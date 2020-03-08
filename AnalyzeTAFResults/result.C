#include"TH1D.h"
#include"TH2D.h"
#include"TCanvas.h"
#include"TFile.h"
#include"TGraph.h"
#include"TGraphErrors.h"
#include"TPad.h"
#include"TGaxis.h"
#include"TSystem.h"
#include"TF1.h"
#include"TText.h"
#include"TArrow.h"
#include"TStyle.h"
#include"TRandom.h"
#include"TLegend.h"
#include"TPaletteAxis.h"

#include<vector>
#include<math.h>
#include<fstream>
#include<regex>
#include<string>

using namespace std ;
using namespace TMath ;


//return the angle of deviation of a particle ( of momentum p [MeV], velocity beta_c and charge number z ) leaving a detector ( of thickness x and radiation length X_0 )
//For Si, X_0 = 9.36 cm and x = 50 micrometer for one sensor
//For electrons, m = 511E-3 and z = 1
double MultScatt(double p, double m = 511E-3, double z = 1 , double x = 50E-4, double X_0 = 9.36){ 
    double E = sqrt(m*m + p*p);
    double beta_c = p/E ;
    return 13.6*z*sqrt(x/X_0)*( 1 + 0.038*log(x/X_0) )/(beta_c*p) ;
}


//return the number of pixels per cluster as function of the Threshold T and parameters par[0] = Q, par[1] = pixel size, par[2]= sigma 
double Cluster_model(double *T, double *par){
    return TMath::TwoPi()*TMath::Power(par[3]/par[2], 2)*TMath::Log( par[0]/( TMath::TwoPi()*par[1]*T[0]*TMath::Power(par[3],2) ) ) ;
}

//Cluster model but inverted, such that we get the charge deposited per unit of area
//par[0] = Q, par[1] = sigma
double Cluster_model_exp(double *r, double *par){
    return par[0]*exp(-TMath::Power(r[0]/par[1], 2)/2)/(TMath::TwoPi()*TMath::Power(par[1],2)) ;
}


Double_t fermiFunction( Double_t *x, Double_t *par ) {
  // Implementation of the Fermi function for Beta- spectrum

  Double_t Q = par[0]; // spectrum end
  Double_t Z = par[1]; // atomic number
  Double_t Norm = par[2];
  Double_t Cut_off = par[3] ; //energy cut off
  Double_t E = x[0]; // Beta energy

  if( E > Cut_off ){
    // constants
    Double_t alpha = 1./137.;
    Double_t eMass = 511; // keV/c2

    Double_t F1 = sqrt(E*E+2*eMass)*(Q-E)*(Q-E)*(E+eMass);
    Double_t g = TMath::TwoPi()*alpha*Z*(1+E/Q)*sqrt(E*E/Q/Q+2*E/Q);
    Double_t F2 = Z*Z*(E/Q+1)*(E/Q+1)*alpha*alpha+E*E/Q/Q+E/2/Q;

    Double_t p = F1*g/(exp(g)-1)*TMath::Power( F2, sqrt(1-Z*Z*alpha*alpha)-1);

    //printf("\n E=%.1f, F1=%.2f, F2=%.2f, g=%.2f\n", E, F1, F2, g);
    //printf("    g/(1-e(g))=%e, power=%.2f\n", g/(1-exp(g)), sqrt(1-Z*Z*alpha*alpha)-1);

    return Norm*p/1.e11;
    
  }
  
  else{
      return 0 ;
  }
}


Double_t randomFermi( double Q, int Z, double cut_off) {
  // Draw an energy randomly distributed between 0 and Q
  //  according to the Fermi function with Z=atomic number.

  double par[4];
  par[0] = Q;
  par[1] = Z;
  par[2] = 1.;
  par[3] = cut_off ;
  double E[1] = { gRandom->Uniform()*Q };
  double max = 15.; // 15 for Sr90 6 for O15, 0.9 for C11, 0.2 for F18,
  while( max*gRandom->Uniform()>fermiFunction( E, par) ) {
    //printf( " essai avec E=%.2f\n", E[0]);
    E[0] = gRandom->Uniform()*Q;
  }

  return E[0];
}



void result(){
    TFile *result = new TFile("result.root", "recreate"); // open a root file to save all the plots
    TString wkDir = gSystem->pwd(); // get the current directory to save the root file in this directory
    
    //Histos 1D = pixel multiplicity for a given plane
    printf("\n");
    printf("############################################\n");
    printf("#                 Fake Rate                #\n");
    printf("#                    &                     #\n");
    printf("#               Cluster Size               #\n");
    printf("############################################\n");
    printf("\n");
    
    ////////////////////////////////////////////
    //                 Fake Rate              //
    ////////////////////////////////////////////
    //Goal : construct a TGraph of the fake rate as a function of the threshold with no veto
    
    //Factor to get a fake rate from a number of fake = 1/Number of pixel/Number of frames (4*Number of events)
    double N = 1./(960*928)/(4*150000) ; 
    vector<double> sigma; vector<double> fake; vector<double> fake_error ;
    
    //vector with different value of Threshold in sigma unit
    sigma.push_back(6) ; sigma.push_back(8) ; 
    sigma.push_back(10) ; sigma.push_back(12) ;
    //vector with the value of the fake rate = fake number * N
    fake.push_back(448616*N) ; fake.push_back(403227*N); 
    fake.push_back(402856*N) ; fake.push_back(403457*N);
    //fake.push_back(263426*N) ; fake.push_back(33712*N); 
    //fake.push_back(223782*N) ; fake.push_back(562881*N);
    //Construct a TGraph : mean cluster size as a function of the threshold
    TGraph *hFakeRatePl1 = new TGraphErrors(fake.size(), sigma.data() , fake.data());
    hFakeRatePl1->SetNameTitle("Fake Rate Pl1", "Fake Rate Pl1");
    hFakeRatePl1->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl1->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl1->SetMarkerStyle(2);

    
    fake.clear() ;
    //fake.push_back(351799*N) ; fake.push_back(213555*N); 
    //fake.push_back(202601*N) ; fake.push_back(229682*N);
    fake.push_back(899796*N) ; fake.push_back(314938*N); 
    fake.push_back(302939*N) ; fake.push_back(302461*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl2 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl2->SetNameTitle("Fake Rate Pl2", "Fake Rate Pl2");
    hFakeRatePl2->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl2->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl2->SetMarkerStyle(2);

    
    fake.clear() ;
    fake.push_back(280169*N) ; fake.push_back(208011*N); 
    fake.push_back(203560*N) ; fake.push_back(203310*N);
    //fake.push_back(450399*N) ; fake.push_back(171172*N); 
    //fake.push_back(280910*N) ; fake.push_back(304878*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl3 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl3->SetNameTitle("Fake Rate Pl3", "Fake Rate Pl3");
    hFakeRatePl3->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl3->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl3->SetMarkerStyle(2);
    
    
    fake.clear() ;
    fake.push_back(300553*N) ; fake.push_back(22084*N); 
    fake.push_back(2154*N) ; fake.push_back(129*N);
    //fake.push_back(1366582*N) ; fake.push_back(26330*N); 
    //fake.push_back(1851*N) ; fake.push_back(126*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl4 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl4->SetNameTitle("Fake Rate Pl4", "Fake Rate Pl4");
    hFakeRatePl4->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl4->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl4->SetMarkerStyle(2);
    
    
    ////////////////////////////////////////////
    //                 Fake Rate              //
    //           w/ veto on pixel             //
    //         w/ min occurence 0.01          //
    ////////////////////////////////////////////
    //Goal : construct a TGraph of the fake rate as a function of the threshold with veto ( min occurence = 0.01 )
    
    fake.push_back(90440*N) ; fake.push_back(1925*N); 
    fake.push_back(3843*N) ; fake.push_back(1235*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl1_veto_01 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl1_veto_01->SetNameTitle("Fake Rate Pl1 w/ veto w/ minOcc = 0.01", "Fake Rate Pl1 w/ veto w/ minOcc = 0.01");
    hFakeRatePl1_veto_01->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl1_veto_01->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl1_veto_01->SetMarkerStyle(kOpenCircle);
    hFakeRatePl1_veto_01->SetMarkerColor(kBlue);

    fake.clear() ;
    fake.push_back(527686*N) ; fake.push_back(11927*N); 
    fake.push_back(509*N) ; fake.push_back(44*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl2_veto_01 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl2_veto_01->SetNameTitle("Fake Rate Pl2 w/ veto w/ minOcc = 0.01", "Fake Rate Pl2 w/ veto w/ minOcc = 0.01");
    hFakeRatePl2_veto_01->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl2_veto_01->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl2_veto_01->SetMarkerStyle(kOpenCircle);
    hFakeRatePl2_veto_01->SetMarkerColor(kBlue);
    
    fake.clear() ;
    fake.push_back(155137*N) ; fake.push_back(3545*N); 
    fake.push_back(261*N) ; fake.push_back(68*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl3_veto_01 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl3_veto_01->SetNameTitle("Fake Rate Pl3 w/ veto w/ minOcc = 0.01", "Fake Rate Pl3 w/ veto w/ minOcc = 0.01");
    hFakeRatePl3_veto_01->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl3_veto_01->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl3_veto_01->SetMarkerStyle(kOpenCircle);
    hFakeRatePl3_veto_01->SetMarkerColor(kBlue);
    
    fake.clear() ;
    fake.push_back(1160046*N) ; fake.push_back(22502*N); 
    fake.push_back(1851*N) ; fake.push_back(126*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl4_veto_01 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl4_veto_01->SetNameTitle("Fake Rate Pl4 w/ veto w/ minOcc = 0.01", "Fake Rate Pl4 w/ veto w/ minOcc = 0.01");
    hFakeRatePl4_veto_01->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl4_veto_01->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl4_veto_01->SetMarkerStyle(kOpenCircle);
    hFakeRatePl4_veto_01->SetMarkerColor(kBlue);
    
    
    ////////////////////////////////////////////
    //                 Fake Rate              //
    //           w/ veto on pixel             //
    //         w/ min occurence 0.1          //
    ////////////////////////////////////////////
    //Goal : construct a TGraph of the fake rate as a function of the threshold with veto ( min occurence = 0.1 )

    
    fake.push_back(101470*N) ; fake.push_back(1925*N); 
    fake.push_back(16832*N) ; fake.push_back(12405*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl1_veto_1 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl1_veto_1->SetNameTitle("Fake Rate Pl1 w/ veto w/ minOcc = 0.1", "Fake Rate Pl1 w/ veto w/ minOcc = 0.1");
    hFakeRatePl1_veto_1->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl1_veto_1->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl1_veto_1->SetMarkerStyle(kOpenTriangleUp);
    hFakeRatePl1_veto_1->SetMarkerColor(kRed);    
    
    fake.clear() ;
    fake.push_back(611710*N) ; fake.push_back(15982*N); 
    fake.push_back(3058*N) ; fake.push_back(2536*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl2_veto_1 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl2_veto_1->SetNameTitle("Fake Rate Pl2 w/ veto w/ minOcc = 0.1", "Fake Rate Pl2 w/ veto w/ minOcc = 0.1");
    hFakeRatePl2_veto_1->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl2_veto_1->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl2_veto_1->SetMarkerStyle(kOpenTriangleUp);
    hFakeRatePl2_veto_1->SetMarkerColor(kRed);
    
    fake.clear() ;
    fake.push_back(220763*N) ; fake.push_back(6555*N); 
    fake.push_back(4908*N) ; fake.push_back(4960*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl3_veto_1 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl3_veto_1->SetNameTitle("Fake Rate Pl3 w/ veto w/ minOcc = 0.1", "Fake Rate Pl3 w/ veto w/ minOcc = 0.1");
    hFakeRatePl3_veto_1->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl3_veto_1->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl3_veto_1->SetMarkerStyle(kOpenTriangleUp);
    hFakeRatePl3_veto_1->SetMarkerColor(kRed);
    
    fake.clear() ;
    fake.push_back(1366582*N) ; fake.push_back(26330*N); 
    fake.push_back(1851*N) ; fake.push_back(126*N);
    //Construct a TGraph : fake rate as a function of the threshold
    TGraph *hFakeRatePl4_veto_1 = new TGraph(fake.size(), sigma.data() , fake.data());
    hFakeRatePl4_veto_1->SetNameTitle("Fake Rate Pl4 w/ veto w/ minOcc = 0.1", "Fake Rate Pl4 w/ veto w/ minOcc = 0.1");
    hFakeRatePl4_veto_1->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hFakeRatePl4_veto_1->GetYaxis()->SetNameTitle("Fake Rate", "Fake Rate");
    hFakeRatePl4_veto_1->SetMarkerStyle(kOpenTriangleUp);
    hFakeRatePl4_veto_1->SetMarkerColor(kRed);


    ////////////////////////////////////////////
    //              Cluster Size              //
    ////////////////////////////////////////////
    //Goal : construct a TGraph of the mean cluster size as a function of the threshold
    //      + scale this graph to draw it on the same plot with the fake rate 
    
    printf("Cluster Size and Fake rate determination\n");
    gSystem->cd("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/10_6s_100k");
    printf("Changing directory... %s \n", gSystem->pwd() );
    TFile* file_6s = new TFile("HitMap_run10.root");
    TH1D* hPl1_6s = (TH1D*)file_6s->Get("hhitpixpl1;1");
    TH1D* hPl2_6s = (TH1D*)file_6s->Get("hhitpixpl2;1");
    TH1D* hPl3_6s = (TH1D*)file_6s->Get("hhitpixpl3;1");
    TH1D* hPl4_6s = (TH1D*)file_6s->Get("hhitpixpl4;1");

    gSystem->cd("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/10_8s_100k");
    printf("Changing directory... %s \n", gSystem->pwd() );
    TFile* file_8s = new TFile("HitMap_run10.root");
    TH1D* hPl1_8s = (TH1D*)file_8s->Get("hhitpixpl1;1");
    TH1D* hPl2_8s = (TH1D*)file_8s->Get("hhitpixpl2;1");
    TH1D* hPl3_8s = (TH1D*)file_8s->Get("hhitpixpl3;1");
    TH1D* hPl4_8s = (TH1D*)file_8s->Get("hhitpixpl4;1");
    
    gSystem->cd("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/10_10s_100k");
    printf("Changing directory... %s \n", gSystem->pwd() );
    TFile* file_10s = new TFile("HitMap_run10.root");
    TH1D* hPl1_10s = (TH1D*)file_10s->Get("hhitpixpl1;1");
    TH1D* hPl2_10s = (TH1D*)file_10s->Get("hhitpixpl2;1");
    TH1D* hPl3_10s = (TH1D*)file_10s->Get("hhitpixpl3;1");
    TH1D* hPl4_10s =  (TH1D*)file_10s->Get("hhitpixpl4;1");
    
    gSystem->cd("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/10_12s_100k");
    printf("Changing directory... %s \n", gSystem->pwd() );
    TFile* file_12s = new TFile("HitMap_run10.root");
    TH1D* hPl1_12s = (TH1D*)file_12s->Get("hhitpixpl1;1");
    TH1D* hPl2_12s = (TH1D*)file_12s->Get("hhitpixpl2;1");
    TH1D* hPl3_12s = (TH1D*)file_12s->Get("hhitpixpl3;1");
    TH1D* hPl4_12s = (TH1D*)file_12s->Get("hhitpixpl4;1");
    
    
    vector<double>  cluster ;
    cluster.push_back((hPl1_6s->GetMean())) ; cluster.push_back((hPl1_8s->GetMean()));
    cluster.push_back((hPl1_10s->GetMean())) ; cluster.push_back((hPl1_12s->GetMean()));
    //Construct a TGraph : mean cluster size as a function of the threshold
    TGraph *hClusterSizePl1 = new TGraph( cluster.size(), sigma.data(), cluster.data() );
    hClusterSizePl1->SetNameTitle("Cluster Size Pl1", "Cluster Size Pl1");
    hClusterSizePl1->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hClusterSizePl1->GetYaxis()->SetNameTitle("Cluster Size (pxl)", "Cluster Size (pxl)");
    hClusterSizePl1->SetMarkerStyle(2);
    hClusterSizePl1->SetMarkerColor(kRed);
    
    //Construct a TGraph : same as before but it will be scaled later 
    // in order to get the fake rate and cluster size on the same graph
    TGraph *hClusterSizePl1_scale = new TGraph( cluster.size(), sigma.data(), cluster.data() );
    hClusterSizePl1_scale->SetNameTitle("Cluster Size Pl1", "Cluster Size Pl1");
    hClusterSizePl1_scale->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hClusterSizePl1_scale->GetYaxis()->SetNameTitle("Cluster Size (pxl)", "Cluster Size (pxl)");
    hClusterSizePl1_scale->SetMarkerStyle(2);
    hClusterSizePl1_scale->SetMarkerColor(kRed);
    
    cluster.clear();
    cluster.push_back((hPl2_6s->GetMean())) ; cluster.push_back((hPl2_8s->GetMean()));
    cluster.push_back((hPl2_10s->GetMean())) ; cluster.push_back((hPl2_12s->GetMean()));
    //Construct a TGraph : mean cluster size as a function of the threshold
    TGraph *hClusterSizePl2 = new TGraph( cluster.size(), sigma.data(), cluster.data() );
    hClusterSizePl2->SetNameTitle("Cluster Size Pl2", "Cluster Size Pl2");
    hClusterSizePl2->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hClusterSizePl2->GetYaxis()->SetNameTitle("Cluster Size (pxl)", "Cluster Size (pxl)");
    hClusterSizePl2->SetMarkerStyle(2);
    hClusterSizePl2->SetMarkerColor(kRed);
    
    //Construct a TGraph : same as before but it will be scaled later 
    // in order to get the fake rate and cluster size on the same graph
    TGraph *hClusterSizePl2_scale = new TGraph( cluster.size(), sigma.data(), cluster.data() );
    hClusterSizePl2_scale->SetNameTitle("Cluster Size Pl2", "Cluster Size Pl2");
    hClusterSizePl2_scale->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hClusterSizePl2_scale->GetYaxis()->SetNameTitle("Cluster Size (pxl)", "Cluster Size (pxl)");
    hClusterSizePl2_scale->SetMarkerStyle(2);
    hClusterSizePl2_scale->SetMarkerColor(kRed);
    
    cluster.clear();
    cluster.push_back((hPl3_6s->GetMean())) ; cluster.push_back((hPl3_8s->GetMean()));
    cluster.push_back((hPl3_10s->GetMean())) ; cluster.push_back((hPl3_12s->GetMean()));
    //Construct a TGraph : mean cluster size as a function of the threshold
    TGraph *hClusterSizePl3 = new TGraph( cluster.size(), sigma.data(), cluster.data() );
    hClusterSizePl3->SetNameTitle("Cluster Size Pl3", "Cluster Size Pl3");
    hClusterSizePl3->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hClusterSizePl3->GetYaxis()->SetNameTitle("Cluster Size (#pxl)", "Cluster Size (#pxl)");
    hClusterSizePl3->SetMarkerStyle(2);
    hClusterSizePl3->SetMarkerColor(kRed);
    
    //Construct a TGraph : same as before but it will be scaled later 
    // in order to get the fake rate and cluster size on the same graph
    TGraph *hClusterSizePl3_scale = new TGraph( cluster.size(), sigma.data(), cluster.data() );
    hClusterSizePl3_scale->SetNameTitle("Cluster Size Pl3", "Cluster Size Pl3");
    hClusterSizePl3_scale->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hClusterSizePl3_scale->GetYaxis()->SetNameTitle("Cluster Size (#pxl)", "Cluster Size (#pxl)");
    hClusterSizePl3_scale->SetMarkerStyle(2);
    hClusterSizePl3_scale->SetMarkerColor(kRed);
    
    cluster.clear();
    cluster.push_back((hPl4_6s->GetMean())) ; cluster.push_back((hPl4_8s->GetMean())); 
    cluster.push_back((hPl4_10s->GetMean())) ; cluster.push_back((hPl4_12s->GetMean()));
    //Construct a TGraph : mean cluster size as a function of the threshold
    TGraph *hClusterSizePl4 = new TGraph( cluster.size(), sigma.data(), cluster.data() );
    hClusterSizePl4->SetNameTitle("Cluster Size Pl4", "Cluster Size Pl4");
    hClusterSizePl4->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hClusterSizePl4->GetYaxis()->SetNameTitle("Cluster Size (#pxl)", "Cluster Size (#pxl)");
    hClusterSizePl4->SetMarkerStyle(2);
    hClusterSizePl4->SetMarkerColor(kRed);
    
    //Construct a TGraph : same as before but it will be scaled later 
    // in order to get the fake rate and cluster size on the same graph
    TGraph *hClusterSizePl4_scale = new TGraph( cluster.size(), sigma.data(), cluster.data() );
    hClusterSizePl4_scale->SetNameTitle("Cluster Size Pl4", "Cluster Size Pl4");
    hClusterSizePl4_scale->GetXaxis()->SetNameTitle("Threshold (sigma)", "Threshold (sigma)");
    hClusterSizePl4_scale->GetYaxis()->SetNameTitle("Cluster Size (#pxl)", "Cluster Size (#pxl)");
    hClusterSizePl4_scale->SetMarkerStyle(2);
    hClusterSizePl4_scale->SetMarkerColor(kRed);
    
    //Axis for Cluster Size : to draw cluster size and fake rate on the same plot, while they dont have the same axis
    //                       we create new axis ( TAxis object ) for the cluster size
    TGaxis *AxisPl1 = new TGaxis(hFakeRatePl1->GetXaxis()->GetXmax(),
				   hFakeRatePl1->GetYaxis()->GetXmin(),
				   hFakeRatePl1->GetXaxis()->GetXmax(),
				   hFakeRatePl1->GetYaxis()->GetXmax(),
				   hClusterSizePl1->GetYaxis()->GetXmin(),hClusterSizePl1->GetYaxis()->GetXmax(),510,"+L");
    AxisPl1->SetLineColor(kRed);
    AxisPl1->SetLabelColor(kRed);
    AxisPl1->SetTitleColor(kRed);
    AxisPl1->SetTitle("Cluster Size (pxl)");
    
    TGaxis *AxisPl2 = new TGaxis(hFakeRatePl2->GetXaxis()->GetXmax(),
				   hFakeRatePl2->GetYaxis()->GetXmin(),
				   hFakeRatePl2->GetXaxis()->GetXmax(),
				   hFakeRatePl2->GetYaxis()->GetXmax(),
				   hClusterSizePl2->GetYaxis()->GetXmin(),hClusterSizePl2->GetYaxis()->GetXmax(),510,"+L");
    AxisPl2->SetLineColor(kRed);
    AxisPl2->SetLabelColor(kRed);
    AxisPl2->SetTitleColor(kRed);
    AxisPl2->SetTitle("Cluster Size (pxl)");
    
    TGaxis *AxisPl3 = new TGaxis(hFakeRatePl3->GetXaxis()->GetXmax(),
				   hFakeRatePl3->GetYaxis()->GetXmin(),
				   hFakeRatePl3->GetXaxis()->GetXmax(),
				   hFakeRatePl3->GetYaxis()->GetXmax(),
				   hClusterSizePl3->GetYaxis()->GetXmin(),hClusterSizePl3->GetYaxis()->GetXmax(),510,"+L");
    AxisPl3->SetLineColor(kRed);
    AxisPl3->SetLabelColor(kRed);
    AxisPl3->SetTitleColor(kRed);
    AxisPl3->SetTitle("Cluster Size (pxl)");
    
    TGaxis *AxisPl4 = new TGaxis(hFakeRatePl4->GetXaxis()->GetXmax(),
				   hFakeRatePl4->GetYaxis()->GetXmin(),
				   hFakeRatePl4->GetXaxis()->GetXmax(),
				   hFakeRatePl4->GetYaxis()->GetXmax(),
				   hClusterSizePl4->GetYaxis()->GetXmin(),hClusterSizePl4->GetYaxis()->GetXmax(),510,"+L");
    AxisPl4->SetLineColor(kRed);
    AxisPl4->SetLabelColor(kRed);
    AxisPl4->SetTitleColor(kRed);
    AxisPl4->SetTitle("Cluster Size (pxl)");
    
   
    
    //scaling
    //To draw cluster size and fake rate on the same plot, we need to scale the cluster size
    //scaling is given by : [c1; c2] --> [f1; f2] 
    //                         ci    --> f(ci) = a*ci + b = fi
    //where [c1;c2] and [f1;f2] are the range of the cluster size and fake rate respectively
    //
    // f(c2) = a*c2 + b = f2 and f(c1) = a*c1 + b = f1
    // solving this system of eq gives :  a = ( f2 - f1 )/( c2 - c1 ) and b = ( f1*c2 - f2*c1 )/( c2 - c1 )
    // Here f1 = Uymin, f2 = Uymax, c1 = ymin and c2 = ymax
    double Uymax = hFakeRatePl1->GetYaxis()->GetXmax(); double Uymin = hFakeRatePl1->GetYaxis()->GetXmin();
    double ymax = hClusterSizePl1_scale->GetYaxis()->GetXmax(); double ymin = hClusterSizePl1_scale->GetYaxis()->GetXmin();
    double a = (Uymax -Uymin)/(ymax - ymin) ; double b = (ymax*Uymin - Uymax*ymin)/(ymax - ymin) ;
    for(int iCl = 0 ; iCl < 4 ; iCl++) hClusterSizePl1_scale->GetY()[iCl] = a*(hClusterSizePl1_scale->GetY()[iCl]) + b ;
        
    Uymax = hFakeRatePl2->GetYaxis()->GetXmax(); Uymin = hFakeRatePl2->GetYaxis()->GetXmin();    
    ymax = hClusterSizePl2_scale->GetYaxis()->GetXmax(); ymin = hClusterSizePl2_scale->GetYaxis()->GetXmin();
    a = (Uymax -Uymin)/(ymax - ymin) ; b = (ymax*Uymin - Uymax*ymin)/(ymax - ymin) ;
    for(int iCl = 0 ; iCl < 4 ; iCl++) hClusterSizePl2_scale->GetY()[iCl] = a*(hClusterSizePl2_scale->GetY()[iCl]) + b ;
    
    Uymax = hFakeRatePl3->GetYaxis()->GetXmax(); Uymin = hFakeRatePl3->GetYaxis()->GetXmin();    
    ymax = hClusterSizePl3_scale->GetYaxis()->GetXmax(); ymin = hClusterSizePl3_scale->GetYaxis()->GetXmin();
    a = (Uymax -Uymin)/(ymax - ymin) ; b = (ymax*Uymin - Uymax*ymin)/(ymax - ymin) ;
    for(int iCl = 0 ; iCl < 4 ; iCl++) hClusterSizePl3_scale->GetY()[iCl] = a*(hClusterSizePl3_scale->GetY()[iCl]) + b ;
    
    Uymax = hFakeRatePl4->GetYaxis()->GetXmax(); Uymin = hFakeRatePl4->GetYaxis()->GetXmin();    
    ymax = hClusterSizePl4_scale->GetYaxis()->GetXmax(); ymin = hClusterSizePl4_scale->GetYaxis()->GetXmin();
    a = (Uymax -Uymin)/(ymax - ymin) ; b = (ymax*Uymin - Uymax*ymin)/(ymax - ymin) ;
    for(int iCl = 0 ; iCl < 4 ; iCl++) hClusterSizePl4_scale->GetY()[iCl] = a*(hClusterSizePl4_scale->GetY()[iCl]) + b ;
    
    
    //Fit of cluster size with the cluster model for each cluster size
    // + define a TF1 to draw the charge deposited per unit of area of a particle using fit parameters for each plane
    TF1 *clusterSize = new TF1( "clusterSize", Cluster_model, 0, 100, 4);
    clusterSize->SetParName( 0, "Delta E");
    clusterSize->SetParName( 1, "Eg");
    clusterSize->SetParName( 2, "Pixel Size");
    clusterSize->SetParName( 3, "Sigma");
    clusterSize->FixParameter(1, 3.6E-3);
    clusterSize->FixParameter(2, 20.7);
    clusterSize->SetParameter(0, 1000);
    clusterSize->SetParameter(3, 80E-6);
    
    hClusterSizePl1->Fit("clusterSize");
    TF1 *fClusterPl1 = new TF1( "Cluster Model Pl1", Cluster_model_exp, -40, 40, 2);
    fClusterPl1->SetParameter(0, clusterSize->GetParameter(0)/clusterSize->GetParameter(1));
    fClusterPl1->SetParameter(1, clusterSize->GetParameter(3));
    fClusterPl1->GetXaxis()->SetTitle("r (micrometer)");
    fClusterPl1->GetYaxis()->SetTitle("charge deposited per unit of area");
    fClusterPl1->SetLineColor(kBlack);

    hClusterSizePl2->Fit("clusterSize");
    TF1 *fClusterPl2 = new TF1( "Cluster Model Pl2", Cluster_model_exp, -40, 40, 2);
    fClusterPl2->SetParameter(0, clusterSize->GetParameter(0)/clusterSize->GetParameter(1));
    fClusterPl2->SetParameter(1, clusterSize->GetParameter(1));
    fClusterPl2->GetXaxis()->SetTitle("r (micrometer)");
    fClusterPl2->GetYaxis()->SetTitle("charge deposited per unit of area");
    fClusterPl2->SetLineColor(kBlack);
    
    hClusterSizePl3->Fit("clusterSize");
    TF1 *fClusterPl3 = new TF1( "Cluster Model Pl3", Cluster_model_exp, -40, 40, 2);
    fClusterPl3->SetParameter(0, clusterSize->GetParameter(0)/clusterSize->GetParameter(1));
    fClusterPl3->SetParameter(1, clusterSize->GetParameter(3));
    fClusterPl3->GetXaxis()->SetTitle("r (micrometer)");
    fClusterPl3->GetYaxis()->SetTitle("charge deposited per unit of area");
    fClusterPl3->SetLineColor(kBlack);
    
    hClusterSizePl4->Fit("clusterSize");
    TF1 *fClusterPl4 = new TF1( "Cluster Model Pl4", Cluster_model_exp, -40, 40, 2);
    fClusterPl4->SetParameter(0, clusterSize->GetParameter(0)/clusterSize->GetParameter(1));
    fClusterPl4->SetParameter(1, clusterSize->GetParameter(3));
    fClusterPl4->GetXaxis()->SetTitle("r (micrometer)");
    fClusterPl4->GetYaxis()->SetTitle("charge deposited per unit of area");
    fClusterPl4->SetLineColor(kBlack);
    
    
    //On each graph of the charge deposited per unit of area of a particle, we draw a line corresponding to the impact of the threshold
    //Above each line will be written the threshold level in units of sigma
    double x[2] ; double par[2] ; double y ; 
    vector<TString> Threshold ;
    Threshold.push_back("6") ; Threshold.push_back("8") ;
    Threshold.push_back("10") ; Threshold.push_back("12") ;
    
    //For plane 1
    cluster.clear();
    cluster.push_back((hPl1_6s->GetMean())) ; cluster.push_back((hPl1_8s->GetMean())); 
    cluster.push_back((hPl1_10s->GetMean())) ; cluster.push_back((hPl1_12s->GetMean()));
    par[0] = fClusterPl1->GetParameter(0) ; par[1] = fClusterPl1->GetParameter(1) ;
    vector<TLine*> lPl1 ; vector<TText*> tPl1 ; // 0 = 6s, 1 = 8s, 2 = 10s and 3 = 12s
    for( int iTh = 0 ; iTh < 4 ; iTh++){//loop on the number of lines or threshold to draw
        x[0] = cluster[iTh]*20.7/2 ; y = Cluster_model_exp(x, par);
        lPl1.push_back( new TLine( fClusterPl1->GetXaxis()->GetXmin(), y, fClusterPl1->GetXaxis()->GetXmax(), y) );
        tPl1.push_back( new TText( fClusterPl1->GetXaxis()->GetXmax() - 5, y, Threshold[iTh]) );
        lPl1[iTh]->SetLineColor(kRed); tPl1[iTh]->SetTextColor(kRed) ;
    }//end loop on the number of lines or threshold
    
    //For plane 2, we dont do this because there are problems in the results.
    
    //For plane 3
    cluster.clear();
    cluster.push_back((hPl3_6s->GetMean())) ; cluster.push_back((hPl3_8s->GetMean())); 
    cluster.push_back((hPl3_10s->GetMean())) ; cluster.push_back((hPl3_12s->GetMean()));
    par[0] = fClusterPl3->GetParameter(0) ; par[1] = fClusterPl3->GetParameter(1) ;
    vector<TLine*> lPl3 ; vector<TText*> tPl3 ; // 0 = 6s, 1 = 8s, 2 = 10s and 3 = 12s
    for( int iTh = 0 ; iTh < 4 ; iTh++){//loop on the number of lines or threshold to draw
        x[0] = cluster[iTh]*20.7/2 ; y = Cluster_model_exp(x, par);
        lPl3.push_back( new TLine( fClusterPl3->GetXaxis()->GetXmin(), y, fClusterPl3->GetXaxis()->GetXmax(), y) );
        tPl3.push_back( new TText( fClusterPl3->GetXaxis()->GetXmax() - 5, y, Threshold[iTh]) );
        lPl3[iTh]->SetLineColor(kRed); tPl3[iTh]->SetTextColor(kRed) ;
    }//end loop on the number of lines or threshold
    
    //For plane 4
    cluster.clear();
    cluster.push_back((hPl4_6s->GetMean())) ; cluster.push_back((hPl4_8s->GetMean())); 
    cluster.push_back((hPl4_10s->GetMean())) ; cluster.push_back((hPl4_12s->GetMean()));
    par[0] = fClusterPl4->GetParameter(0) ; par[1] = fClusterPl4->GetParameter(1) ;
    vector<TLine*> lPl4 ; vector<TText*> tPl4 ; // 0 = 6s, 1 = 8s, 2 = 10s and 3 = 12s
    for( int iTh = 0 ; iTh < 4 ; iTh++){//loop on the number of lines or threshold to draw
        x[0] = cluster[iTh]*20.7/2 ; y = Cluster_model_exp(x, par);
        lPl4.push_back( new TLine( fClusterPl4->GetXaxis()->GetXmin(), y, fClusterPl4->GetXaxis()->GetXmax(), y) );
        tPl4.push_back( new TText( fClusterPl4->GetXaxis()->GetXmax() - 5, y, Threshold[iTh]) );
        lPl4[iTh]->SetLineColor(kRed); tPl4[iTh]->SetTextColor(kRed) ;
    }//end loop on the number of lines or threshold
    
    
    
    
    //Planes Alignement
    printf("\n");
    printf("############################################\n");
    printf("#            Planes Alignement             #\n");
    printf("############################################\n");
    printf("\n");
    
    //enter the path for each data directory to be accumulated
    vector< TString > path ;
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/NotAligned/50_12s_100k_1");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/NotAligned/50_12s_100k_2");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/NotAligned/50_12s_100k_3");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/NotAligned/50_12s_100k_4");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/NotAligned/50_12s_100k_5");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/NotAligned/50_12s_100k_6");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/NotAligned/50_12s_100k_7");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/NotAligned/50_12s_100k_8");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/NotAligned/50_12s_100k_9");
    
    /*path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/Aligned_final/50_12s_100k_1");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/Aligned_final/50_12s_100k_2");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/Aligned_final/50_12s_100k_3");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/Aligned_final/50_12s_100k_4");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/Aligned_final/50_12s_100k_5");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/Aligned_final/50_12s_100k_6");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/Aligned_final/50_12s_100k_7");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/Aligned_final/50_12s_100k_8");
    path.push_back("/home/romain/SiTrInEO_EX2/taf/Results/HitMap/Aligned_final/50_12s_100k_9");*/
    
    
    //To align the planes, we are only interested in the hit map
    //Define the TH2D containing the hitmap 
    gSystem->cd(path[0]);
    printf("Planes alignement\n");
    printf("Changing directory... %s \n", gSystem->pwd() );
    //Using Hit Map
    TFile* file_Raw = new TFile( gSystem->GetFromPipe("ls | grep -E '^(HitMap).*\.root$'") );
    //Using SitrineoCumul Map
    //TFile* file_Raw = new TFile( gSystem->GetFromPipe("ls | grep -E '^(sitrineo).*\.root$'") );
    TH2D* hPl1 = (TH2D*)file_Raw->Get("hhitmappl1;1"); TH2D* hPl2 = (TH2D*)file_Raw->Get("hhitmappl2;1");
    TH2D* hPl3 = (TH2D*)file_Raw->Get("hhitmappl3;1"); TH2D* hPl4 = (TH2D*)file_Raw->Get("hhitmappl4;1");
    //Using Raw data Map
    //TFile* file_Raw = new TFile( gSystem->GetFromPipe("ls | grep -E '^(RawData).*\.root$'") );
    //TH2D* hPl1 = (TH2D*)file_Raw->Get("hrdmappl1;1"); TH2D* hPl2 = (TH2D*)file_Raw->Get("hrdmappl2;1");
    //TH2D* hPl3 = (TH2D*)file_Raw->Get("hrdmappl3;1"); TH2D* hPl4 = (TH2D*)file_Raw->Get("hrdmappl4;1");
    
    
    for( int iPath = 1 ; iPath < path.size() ; iPath++){//loop on the data directory
        
        gSystem->cd(path[iPath]);
        printf("Changing directory... %s \n", gSystem->pwd() );
        //Using Hit Map
        TFile* file_Raw = new TFile( gSystem->GetFromPipe("ls | grep -E '^(HitMap).*\.root$'") );
        //Using SitrineoCumul map
        //TFile* file_Raw = new TFile( gSystem->GetFromPipe("ls | grep -E '^(sitrineo).*\.root$'") );
        hPl1->Add( (TH2D*)file_Raw->Get("hhitmappl1;1"), 1); hPl2->Add( (TH2D*)file_Raw->Get("hhitmappl2;1"), 1);
        hPl3->Add( (TH2D*)file_Raw->Get("hhitmappl3;1"), 1); hPl4->Add( (TH2D*)file_Raw->Get("hhitmappl4;1"), 1);
        //Using Raw data Map
        //TFile* file_Raw = new TFile( gSystem->GetFromPipe("ls | grep -E '^(RawData).*\.root$'") );
        //hPl1->Add( (TH2D*)file_Raw->Get("hrdmappl1;1"), 1); hPl2->Add( (TH2D*)file_Raw->Get("hrdmappl2;1"), 1);
        //hPl3->Add( (TH2D*)file_Raw->Get("hrdmappl3;1"), 1); hPl4->Add( (TH2D*)file_Raw->Get("hrdmappl4;1"), 1);
        
    }//end loop on the data directory
  
    //Rebin and label all the histograms + project the 2D histo on X and Y axis
    hPl1->RebinX(14) ; hPl1->RebinY(14);
    hPl1->GetXaxis()->SetLabelSize(0.035);
    hPl1->GetXaxis()->SetTitleSize(0.035);
    hPl1->GetYaxis()->SetLabelSize(0.035);
    hPl1->GetYaxis()->SetTitleSize(0.035);
    hPl1->GetYaxis()->SetTitleOffset(1.5);
    TH1D* hPl1_x = hPl1->ProjectionX("Pl1_px", 0, hPl1->GetNbinsY()); TH1D *hPl1_x_clone = (TH1D*)hPl1_x->Clone();
    TH1D* hPl1_y = hPl1->ProjectionY("Pl1_py", 0, hPl1->GetNbinsX()); TH1D *hPl1_y_clone = (TH1D*)hPl1_y->Clone();
    
    hPl2->RebinX(14) ; hPl2->RebinY(14);
    hPl2->GetXaxis()->SetLabelSize(0.035);
    hPl2->GetXaxis()->SetTitleSize(0.035);
    hPl2->GetYaxis()->SetLabelSize(0.035);
    hPl2->GetYaxis()->SetTitleSize(0.035);
    hPl2->GetYaxis()->SetTitleOffset(1.5);
    TH1D* hPl2_x = hPl2->ProjectionX("Pl2_px", 0, hPl2->GetNbinsY()); TH1D *hPl2_x_clone = (TH1D*)hPl2_x->Clone();
    TH1D* hPl2_y = hPl2->ProjectionY("Pl2_py", 0, hPl2->GetNbinsX()); TH1D *hPl2_y_clone = (TH1D*)hPl2_y->Clone();
    
    hPl3->RebinX(14) ; hPl3->RebinY(14);
    hPl3->GetXaxis()->SetLabelSize(0.035);
    hPl3->GetXaxis()->SetTitleSize(0.035);
    hPl3->GetYaxis()->SetLabelSize(0.035);
    hPl3->GetYaxis()->SetTitleSize(0.035);
    hPl3->GetYaxis()->SetTitleOffset(1.5);
    TH1D* hPl3_x = hPl3->ProjectionX("Pl3_px", 0, hPl3->GetNbinsY()); TH1D *hPl3_x_clone = (TH1D*)hPl3_x->Clone();
    TH1D* hPl3_y = hPl3->ProjectionY("Pl3_py", 0, hPl3->GetNbinsX()); TH1D *hPl3_y_clone = (TH1D*)hPl3_y->Clone();
    
    hPl4->RebinX(14) ; hPl4->RebinY(14);
    hPl4->GetXaxis()->SetLabelSize(0.035);
    hPl4->GetXaxis()->SetTitleSize(0.035);
    hPl4->GetYaxis()->SetLabelSize(0.035);
    hPl4->GetYaxis()->SetTitleSize(0.035);
    hPl4->GetYaxis()->SetTitleOffset(1.5);
    TH1D* hPl4_x = hPl4->ProjectionX("Pl4_px", 0, hPl4->GetNbinsY()); TH1D *hPl4_x_clone = (TH1D*)hPl4_x->Clone();
    TH1D* hPl4_y = hPl4->ProjectionY("Pl4_py", 0, hPl4->GetNbinsX()); TH1D *hPl4_y_clone = (TH1D*)hPl4_y->Clone();
    
    
    
    //Draw X and Y positions of the image of the source as a function of the Z position of the image of the source ( equivalent to the positions of the planes )
    
    //vectors containing positions of the image of the source on each plane and the errors on this positions
    vector<double>  PlanePosX, PlanePosY, PlanePosZ, ErrPlanePosX, ErrPlanePosY, ErrPlanePosZ ; 
    //Filling order : sensor 1, sensor 2, sensor 3, sensor 4 ( in front of the source )
    //Position obtained from the mean of the fit of the projection on X and Y axis of the image of the source on each sensor
    PlanePosX.push_back(-9.13E2) ; PlanePosX.push_back(-2.76E2) ; PlanePosX.push_back(5.39E2) ; PlanePosX.push_back(8.34E2) ;
    PlanePosY.push_back(-2.24E3) ; PlanePosY.push_back(-9.95E2) ; PlanePosY.push_back(2.29E3) ; PlanePosY.push_back(3.74E3) ;
    PlanePosZ.push_back(29E3) ; PlanePosZ.push_back(12E3) ; PlanePosZ.push_back(-13E3) ; PlanePosZ.push_back(-27E3) ;
    double l = 27E3 ; //distance between the sensor 4 and the source
    
    //uncertainty on position X and Y = sqrt( power( uncertainty due to sensor, 2) + power( uncertainty due to fit, 2) ) 
    //because uncertainties are uncorrelated and uncertainties due to sensor = 20.7 micrometer
    //uncertainty on Z = 1 mm because lowest accessible value on the ruler
    ErrPlanePosX.push_back(Sqrt( Power(5.45E1,2) + Power(20.7,2) ) ) ; 
    ErrPlanePosX.push_back(Sqrt( Power(1.05E1,2) + Power(20.7,2) ) ) ; 
    ErrPlanePosX.push_back(Sqrt( Power(7.58,2) + Power(20.7,2) ) ) ; 
    ErrPlanePosX.push_back(Sqrt( Power(2.82,2) + Power(20.7,2) ) ) ;
    ErrPlanePosY.push_back(Sqrt( Power(3.30,2) + Power(20.7,2) ) ) ; 
    ErrPlanePosY.push_back(Sqrt( Power(1.04E1,2) + Power(20.7,2) ) ) ; 
    ErrPlanePosY.push_back(Sqrt( Power(2.96,2) + Power(20.7,2) ) ) ; 
    ErrPlanePosY.push_back(Sqrt( Power(1.10,2) + Power(20.7,2) ) ) ; 
    ErrPlanePosZ.push_back(1E3) ; ErrPlanePosZ.push_back(1E3) ; 
    ErrPlanePosZ.push_back(1E3) ; ErrPlanePosZ.push_back(1E3) ; 
    
    //Construct a TGraph of X position of the image of the source as a function of the Z position of the image of the source
    TGraphErrors *hPlanePosX = new TGraphErrors( PlanePosZ.size(), PlanePosZ.data(), PlanePosX.data(), ErrPlanePosZ.data(), ErrPlanePosX.data() );
    hPlanePosX->GetYaxis()->SetRangeUser(-1300, 1300);
    hPlanePosX->GetXaxis()->SetTitleSize(0.06);
    hPlanePosX->GetYaxis()->SetTitleSize(0.06);
    hPlanePosX->GetYaxis()->SetLabelSize(0.07);
    hPlanePosX->GetYaxis()->SetTitleOffset(0.6);
    hPlanePosX->SetNameTitle("PlanesShiftX", "Planes displacements");
    hPlanePosX->GetXaxis()->SetTitle("Z (#mu m)");
    hPlanePosX->GetYaxis()->SetTitle("X (#mu m)");
    hPlanePosX->SetMarkerStyle(5);
    hPlanePosX->SetMarkerSize(2);
    hPlanePosX->SetMarkerColor(kBlue);
    
    //Construct a TGraph of Y position of the image of the source as a function of the Z position of the image of the source
    TGraphErrors *hPlanePosY = new TGraphErrors( PlanePosZ.size(), PlanePosZ.data(), PlanePosY.data(), ErrPlanePosZ.data(), ErrPlanePosY.data() );
    hPlanePosY->GetYaxis()->SetRangeUser(-3700, 4500);
    hPlanePosY->GetXaxis()->SetTitleSize(0.06);
    hPlanePosY->GetYaxis()->SetTitleSize(0.06);
    hPlanePosY->GetXaxis()->SetLabelSize(0.06);
    hPlanePosY->GetYaxis()->SetLabelSize(0.06);
    hPlanePosY->GetYaxis()->SetTitleOffset(0.6);
    hPlanePosY->SetNameTitle("PlanesShiftY", "");
    hPlanePosY->GetXaxis()->SetTitle("Z (#mu m)");
    hPlanePosY->GetYaxis()->SetTitle("Y (#mu m)");
    hPlanePosY->SetMarkerStyle(5);
    hPlanePosY->SetMarkerSize(2);
    hPlanePosY->SetMarkerColor(kBlue);
    
    //Construct the extrapolation of the position of the image of the source
    double slope_x, intercept_x ;
    slope_x = (PlanePosX[1] - PlanePosX[3])/(PlanePosZ[1] - PlanePosZ[3]);
    intercept_x = (PlanePosZ[1]*PlanePosX[3] - PlanePosZ[3]*PlanePosX[1])/(PlanePosZ[1] - PlanePosZ[3]);
    TF1 *lin_X = new TF1("lin_X", "[0]*x + [1]", PlanePosZ[3], PlanePosZ[0]);
    lin_X->SetParameter(0, slope_x);
    lin_X->SetParameter(1, intercept_x );
    
    double slope_y, intercept_y ;
    slope_y = (PlanePosY[1] - PlanePosY[3])/(PlanePosZ[1] - PlanePosZ[3]);
    intercept_y = (PlanePosZ[1]*PlanePosY[3] - PlanePosZ[3]*PlanePosY[1])/(PlanePosZ[1] - PlanePosZ[3]);
    TF1 *lin_Y = new TF1("lin_Y", "[0]*x + [1]", PlanePosZ[3], PlanePosZ[0]);
    lin_Y->SetParameter(0, slope_y);
    lin_Y->SetParameter(1, intercept_y );
    
    
    //Define text to be drawn above each position to indicate the plane number
    TText *txPl1 = new TText( PlanePosZ[0], PlanePosX[0] - 200, "1"); 
    TText *txPl2 = new TText( PlanePosZ[1], PlanePosX[1] + 200, "2");
    TText *txPl3 = new TText( PlanePosZ[2], PlanePosX[2] + 200, "3"); 
    TText *txPl4 = new TText( PlanePosZ[3], PlanePosX[3] + 200, "4");

    txPl1->SetTextSize(30); txPl2->SetTextSize(30); txPl3->SetTextSize(30); txPl4->SetTextSize(30);
    txPl1->SetTextFont(43); txPl2->SetTextFont(43); txPl3->SetTextFont(43); txPl4->SetTextFont(43); 
    txPl1->SetTextAlign(22); txPl2->SetTextAlign(22); txPl3->SetTextAlign(22); txPl4->SetTextAlign(22);
    txPl1->SetTextColor(kBlue); txPl2->SetTextColor(kBlue); txPl3->SetTextColor(kBlue); txPl4->SetTextColor(kBlue);
    
    TText *tyPl1 = new TText( PlanePosZ[0], PlanePosY[0] + 400, "1"); 
    TText *tyPl2 = new TText( PlanePosZ[1], PlanePosY[1] + 400, "2");
    TText *tyPl3 = new TText( PlanePosZ[2], PlanePosY[2] + 400, "3"); 
    TText *tyPl4 = new TText( PlanePosZ[3], PlanePosY[3] + 400, "4");

    tyPl1->SetTextSize(30); tyPl2->SetTextSize(30); tyPl3->SetTextSize(30); tyPl4->SetTextSize(30);
    tyPl1->SetTextFont(43); tyPl2->SetTextFont(43); tyPl3->SetTextFont(43); tyPl4->SetTextFont(43);
    tyPl1->SetTextAlign(22); tyPl2->SetTextAlign(22); tyPl3->SetTextAlign(22); tyPl4->SetTextAlign(22);
    tyPl1->SetTextColor(kBlue); tyPl2->SetTextColor(kBlue); tyPl3->SetTextColor(kBlue); tyPl4->SetTextColor(kBlue);

    
    //Print the deviation of the planes 0 and 2 with respect the reference planes 1 and 3, by comparating the extrapolation and the observed position of the image of the source
    printf("\n");
    printf("Plane %d deviation...\n", 0);
    printf("Expected - observed position X of the source on plane %d : %4f\n", 0, slope_x*PlanePosZ[0]+intercept_x - PlanePosX[0]);        printf("Expected - observed position Y of the source on plane %d : %4f\n", 0, slope_y*PlanePosZ[0]+intercept_y - PlanePosY[0]);
    printf("\n");
    printf("Plane %d deviation...\n", 2);
    printf("Expected - observed position X of the source on plane %d : %4f\n", 2, slope_x*PlanePosZ[2]+intercept_x - PlanePosX[2]);
    printf("Expected - observed position Y of the source on plane %d : %4f\n", 2, slope_y*PlanePosZ[2]+intercept_y - PlanePosY[2]);
    printf("\n");
    //print the position of the source, using the position of the image of the source of the two reference sensor 1 and 3
    printf("Source position...\n");
    printf("Expected position X of the source : %4f\n", slope_x*(PlanePosZ[3]-l)+intercept_x);
    printf("Expected position Y of the source : %4f\n", slope_y*(PlanePosZ[3]-l)+intercept_y);
    

    
    
    
    //Multiple Scattering
    printf("\n");
    printf("############################################\n");
    printf("#            Multiple Scattering           #\n");
    printf("############################################\n");
    printf("\n");
    
    //Draw a graph representing the angular deviation through one sensor as a function of the momentum
    vector<double> mom, sigma_MultScatt ;
    for(double p = 0.1 ; p < 2.3 ; p += 0.01){
        mom.push_back(p);
        sigma_MultScatt.push_back(MultScatt(p, 511E-3, 1, 50E-4, 9.36));
    }
    TGraph* hMultScatt = new TGraph(mom.size(), mom.data(), sigma_MultScatt.data());
    hMultScatt->SetNameTitle("MultScatt as a function of p", "MultScatt as a function of p");
    hMultScatt->GetXaxis()->SetNameTitle("p (MeV)", "Momentum (MeV)");
    hMultScatt->GetYaxis()->SetNameTitle("Angular deviation (rad)", "Angular deviation (rad)");
    hMultScatt->SetMarkerStyle(kFullCircle);
    
    
    // Try to reconstruct the spatial dispersion due to multiple scattering using MultScatt function, defined at the top of the file
    // Peak randomly an energy of the fermi spectrum, construct the gaussian distribution describing the spatial dispersion of the electron with this random energy
    // Do it again and sum the the gaussian distribution
    //and so on, for different cutoff
    vector <TH1*> diff ; double Cutoff ; TString title ;
    for( int i = 0 ; i < 5; i++){
        Cutoff = 300 + i*50 ;
        TF1 *fdiff = new TF1("", "[0]*exp(-(x-[1])*(x-[1])/(2*[2]*[2]))", -30000, 30000);
        fdiff->SetParameter(0, 1); fdiff->SetParameter(1, 0);
        double p =  randomFermi(2280, 39, Cutoff) ;
        fdiff->SetParameter(2, MultScatt(p*1E-3, 511E-3, 1, 50E-4, 9.36)*14E3);
        diff.push_back(fdiff->GetHistogram());
        vector< TF1*> diff2 ; diff2.resize(10000);
        for( int iPart = 0 ; iPart < 10000 ; iPart++){
            p =  randomFermi(2280, 39, Cutoff) ;
            diff2[iPart] = new TF1( "", "[0]*exp(-(x-[1])*(x-[1])/(2*[2]*[2]))", -30000, 30000 ) ;
            diff2[iPart]->SetParameter(0, 1) ; diff2[iPart]->SetParameter(1, 0) ; 
            diff2[iPart]->SetParameter(2, MultScatt(p*1E-3, 511E-3, 1, 50E-4, 9.36)*14E3) ;
            diff[i]->Add(diff2[iPart], 1);
        }
        diff2.clear();
        diff[i]->RebinX(2);
        title = (TString) std::to_string(Cutoff);
        diff[i]->SetTitle(title);
    }
    
    
    //enter the path for each data directory to be accumulated for multiple scattering ( necessarly coming from SitrineoCumul )
    vector< TString > path_sitrineo_cumul ;
    path_sitrineo_cumul.push_back("/home/romain/SiTrInEO_EX2/taf/Results/SitrineoCumul/Aligned_final/50_8s_150k_35cm_1");
    path_sitrineo_cumul.push_back("/home/romain/SiTrInEO_EX2/taf/Results/SitrineoCumul/Aligned_final/50_8s_150k_35cm_2");
    path_sitrineo_cumul.push_back("/home/romain/SiTrInEO_EX2/taf/Results/SitrineoCumul/Aligned_final/50_8s_150k_35cm_3");
    path_sitrineo_cumul.push_back("/home/romain/SiTrInEO_EX2/taf/Results/SitrineoCumul/Aligned_final/50_8s_150k_35cm_4");
    path_sitrineo_cumul.push_back("/home/romain/SiTrInEO_EX2/taf/Results/SitrineoCumul/Aligned_final/50_8s_150k_35cm_5");
    
    
    //To study multiple scattering, we are only interested in the hMultScatt histos
    //Define the TH1D containing the dispersion due to the Mult scatt
    gSystem->cd(path_sitrineo_cumul[0]);
    printf("Changing directory... %s \n", gSystem->pwd() );
    TFile* file_Sitrineo = new TFile( gSystem->GetFromPipe("ls | grep -E '^(sitrineo).*\.root$'") );
    TH1D* hMultScattX_Pl1 = (TH1D*)file_Sitrineo->Get("hMultScattX_Pl1;1"); TH1D* hMultScattY_Pl1 = (TH1D*)file_Sitrineo->Get("hMultScattY_Pl1;1");
    TH1D* hMultScattX_Pl2 = (TH1D*)file_Sitrineo->Get("hMultScattX_Pl2;1"); TH1D* hMultScattY_Pl2 = (TH1D*)file_Sitrineo->Get("hMultScattY_Pl2;1");
    TH1D* hMultScattX_Pl3 = (TH1D*)file_Sitrineo->Get("hMultScattX_Pl3;1"); TH1D* hMultScattY_Pl3 = (TH1D*)file_Sitrineo->Get("hMultScattY_Pl3;1");
    
    
    
    for( int iPath = 1 ; iPath < path_sitrineo_cumul.size() ; iPath++){//loop on the data directory
        
        gSystem->cd(path_sitrineo_cumul[iPath]);
        printf("Changing directory... %s \n", gSystem->pwd() );
        
        TFile* file_Sitrineo = new TFile( gSystem->GetFromPipe("ls | grep -E '^(sitrineo).*\.root$'") );
        hMultScattX_Pl1->Add( (TH1D*)file_Sitrineo->Get("hMultScattX_Pl1;1"), 1); hMultScattY_Pl1->Add( (TH1D*)file_Sitrineo->Get("hMultScattY_Pl1;1"), 1);
        hMultScattX_Pl2->Add( (TH1D*)file_Sitrineo->Get("hMultScattX_Pl2;1"), 1); hMultScattY_Pl2->Add( (TH1D*)file_Sitrineo->Get("hMultScattY_Pl2;1"), 1);
        hMultScattX_Pl3->Add( (TH1D*)file_Sitrineo->Get("hMultScattX_Pl3;1"), 1); hMultScattY_Pl3->Add( (TH1D*)file_Sitrineo->Get("hMultScattY_Pl3;1"), 1);
        
    }//end loop on the data directory
    
    //Rebin and label all the histograms 
    hMultScattX_Pl1->GetXaxis()->SetTitle("Observed - Expected Hit position X (#mu m)");
    hMultScattX_Pl2->GetXaxis()->SetTitle("Observed - Expected Hit position X (#mu m)");
    hMultScattX_Pl3->GetXaxis()->SetTitle("Observed - Expected Hit position X (#mu m)");
    hMultScattY_Pl1->GetXaxis()->SetTitle("Observed - Expected Hit position Y (#mu m)");
    hMultScattY_Pl2->GetXaxis()->SetTitle("Observed - Expected Hit position Y (#mu m)");
    hMultScattY_Pl3->GetXaxis()->SetTitle("Observed - Expected Hit position Y (#mu m)");
    
    hMultScattX_Pl1->GetXaxis()->SetTitleSize(0.04); hMultScattY_Pl1->GetXaxis()->SetTitleSize(0.04); 
    hMultScattX_Pl2->GetXaxis()->SetTitleSize(0.04); hMultScattY_Pl2->GetXaxis()->SetTitleSize(0.04);
    hMultScattX_Pl3->GetXaxis()->SetTitleSize(0.04); hMultScattY_Pl3->GetXaxis()->SetTitleSize(0.04); 
    
    hMultScattX_Pl1->GetXaxis()->SetLabelSize(0.04); hMultScattY_Pl1->GetXaxis()->SetLabelSize(0.04);
    hMultScattX_Pl2->GetXaxis()->SetLabelSize(0.04); hMultScattY_Pl2->GetXaxis()->SetLabelSize(0.04);
    hMultScattX_Pl3->GetXaxis()->SetLabelSize(0.04); hMultScattY_Pl3->GetXaxis()->SetLabelSize(0.04);
    
    hMultScattX_Pl1->GetYaxis()->SetLabelSize(0.04); hMultScattY_Pl1->GetYaxis()->SetLabelSize(0.04);
    hMultScattX_Pl2->GetYaxis()->SetLabelSize(0.04); hMultScattY_Pl2->GetYaxis()->SetLabelSize(0.04);
    hMultScattX_Pl3->GetYaxis()->SetLabelSize(0.04); hMultScattY_Pl3->GetYaxis()->SetLabelSize(0.04);
    
    hMultScattX_Pl1->Rebin(3); 
    hMultScattY_Pl1->Rebin(3);
    hMultScattX_Pl2->Rebin(3); 
    hMultScattY_Pl2->Rebin(3);
    hMultScattX_Pl3->Rebin(3); 
    hMultScattY_Pl3->Rebin(3);
    
    
    //Fit of the gaussian core of the previous histos
    //We try to find the range of the fit such that the proba of the fit is equal to 5%
    //The range and the proba is very sensitive on the binning of the histos
    
    //To iterate on all the histos, we store the histos into vectors
    vector< TH1D* > MultScattX, MultScattY ;
    MultScattX.push_back( (TH1D*)hMultScattX_Pl1 );
    MultScattX.push_back( (TH1D*)hMultScattX_Pl2 );
    MultScattX.push_back( (TH1D*)hMultScattX_Pl3 );
    MultScattY.push_back( (TH1D*)hMultScattY_Pl1 );
    MultScattY.push_back( (TH1D*)hMultScattY_Pl2 );
    MultScattY.push_back( (TH1D*)hMultScattY_Pl3 );
    
    //To iterate on all the histos, we store the fits of the histos into vectors
    //Fit ranges is constructed symmetrically with respect to the MPV
    //So fit range start on the edge on the histo, and then will be restricted. Each edge approaching more and more the MPV
    vector<TF1*> MultScattX_fit ;    
    MultScattX_fit.push_back( new TF1("MultScattXPl1_fit", "gaus", 
                                      hMultScattX_Pl1->GetBinCenter( hMultScattX_Pl1->GetMaximumBin() - (int)hMultScattX_Pl1->GetNbinsX()/2 ), 
                                      hMultScattX_Pl1->GetBinCenter( hMultScattX_Pl1->GetMaximumBin() + (int)hMultScattX_Pl1->GetNbinsX()/2 ) ) );
    MultScattX_fit.push_back( new TF1("MultScattXPl2_fit", "gaus", 
                                      hMultScattX_Pl2->GetBinCenter( hMultScattX_Pl2->GetMaximumBin() - (int)hMultScattX_Pl2->GetNbinsX()/2 ), 
                                      hMultScattX_Pl2->GetBinCenter( hMultScattX_Pl2->GetMaximumBin() + (int)hMultScattX_Pl2->GetNbinsX()/2 ) ) );
    MultScattX_fit.push_back( new TF1("MultScattXPl3_fit", "gaus", 
                                      hMultScattX_Pl3->GetBinCenter( hMultScattX_Pl3->GetMaximumBin() - (int)hMultScattX_Pl3->GetNbinsX()/2 ), 
                                      hMultScattX_Pl3->GetBinCenter( hMultScattX_Pl3->GetMaximumBin() + (int)hMultScattX_Pl3->GetNbinsX()/2 ) ) );
    
    
    vector<TF1*> MultScattY_fit ;
    MultScattY_fit.push_back( new TF1("MultScattYPl1_fit", "gaus", 
                                      hMultScattY_Pl1->GetBinCenter( hMultScattY_Pl1->GetMaximumBin() - (int)hMultScattY_Pl1->GetNbinsX()/2 ), 
                                      hMultScattY_Pl1->GetBinCenter( hMultScattY_Pl1->GetMaximumBin() + (int)hMultScattY_Pl1->GetNbinsX()/2 ) ) );
    MultScattY_fit.push_back( new TF1("MultScattYPl2_fit", "gaus", 
                                      hMultScattY_Pl2->GetBinCenter( hMultScattY_Pl2->GetMaximumBin() - (int)hMultScattY_Pl2->GetNbinsX()/2 ), 
                                      hMultScattY_Pl2->GetBinCenter( hMultScattY_Pl2->GetMaximumBin() + (int)hMultScattY_Pl2->GetNbinsX()/2 ) ) );
    MultScattY_fit.push_back( new TF1("MultScattYPl3_fit", "gaus", 
                                      hMultScattY_Pl3->GetBinCenter( hMultScattY_Pl3->GetMaximumBin() - (int)hMultScattY_Pl3->GetNbinsX()/2 ), 
                                      hMultScattY_Pl3->GetBinCenter( hMultScattY_Pl3->GetMaximumBin() + (int)hMultScattY_Pl3->GetNbinsX()/2 ) ) );
    
    //Iterate on all the histos
    for( int iFit = 0 ; iFit < MultScattX_fit.size() ; iFit++){//loop on the histos
        
        MultScattX[iFit]->Fit(MultScattX_fit[iFit]->GetName(), "RQ");//fit X histos
        MultScattY[iFit]->Fit(MultScattY_fit[iFit]->GetName(), "RQ");//fit Y histos
        
        int i = 2;
        while( MultScattX_fit[iFit]->GetProb() < 0.05 ){//loop on fit X histos 
            
            //break the loop if the two limits of the range are the same
            if( i >= (int)MultScattX[iFit]->GetNbinsX()/2 ){ printf("Breaking...\n") ; break ; }
            
            //restrict range 
            MultScattX_fit[iFit]->SetRange(
                MultScattX[iFit]->GetBinCenter( MultScattX[iFit]->GetMaximumBin() - (int)MultScattX[iFit]->GetNbinsX()/2 + i ),
                MultScattX[iFit]->GetBinCenter( MultScattX[iFit]->GetMaximumBin() + (int)MultScattX[iFit]->GetNbinsX()/2 - i ));
            
            //Fit again
            MultScattX[iFit]->Fit(MultScattX_fit[iFit]->GetName(), "RQ");
            i++;
            
        }//end loop on fit X histos
        
        //Print information relating to the fit of X histo
        printf("**********************************************************************\n");
        printf("Histo name : %s\n", MultScattX[iFit]->GetName());
        printf("Amplitude = %4f\n", MultScattX_fit[iFit]->GetParameter(0) );
        printf("Mean (micro) = %4f\n", MultScattX_fit[iFit]->GetParameter(1) );
        printf("Sigma (micro) = %4f\n", MultScattX_fit[iFit]->GetParameter(2) );
        printf("Proba(chi2/NdF) = %4f\n", MultScattX_fit[iFit]->GetProb());
        printf("Angular deviation (rad) = %4f\n", MultScattX_fit[iFit]->GetParameter(2)/(PlanePosZ[iFit]-PlanePosZ[iFit+1]) );
        printf("**********************************************************************\n");
        
        int j = 2;
        while( MultScattY_fit[iFit]->GetProb() < 0.05 ){//loop on fit Y histos
            
            //break the loop if the two limits of the range are the same
            if( j >= (int)MultScattY[iFit]->GetNbinsX()/2 ){ printf("Breaking...\n") ; break ; }
            
            //restrict range 
            MultScattY_fit[iFit]->SetRange(
                MultScattY[iFit]->GetBinCenter( MultScattY[iFit]->GetMaximumBin() - (int)MultScattY[iFit]->GetNbinsX()/2 + j ),
                MultScattY[iFit]->GetBinCenter( MultScattY[iFit]->GetMaximumBin() + (int)MultScattY[iFit]->GetNbinsX()/2 - j ));
            
            //Fit again
            MultScattY[iFit]->Fit(MultScattY_fit[iFit]->GetName(), "RQ");
            j++;
            
        }//end loop on fit Y histos
        
        //print information relating to the fit of Y histo
        printf("**********************************************************************\n");
        printf("Histo name : %s\n", MultScattY[iFit]->GetName());
        printf("Amplitude = %4f\n", MultScattY_fit[iFit]->GetParameter(0) );
        printf("Mean (micro) = %4f\n", MultScattY_fit[iFit]->GetParameter(1) );
        printf("Sigma (micro) = %4f\n", MultScattY_fit[iFit]->GetParameter(2) );
        printf("Proba(chi2/NdF) = %4f\n", MultScattY_fit[iFit]->GetProb());
        printf("Angular deviation (rad) = %4f\n", MultScattY_fit[iFit]->GetParameter(2)/(PlanePosZ[iFit]-PlanePosZ[iFit+1]) );
        printf("**********************************************************************\n");

    }//end loop on histos
    
    
    
    //From the impact of multiple scattering on each sensor, we can calculate the impact of multiple scattering on the entire 
    // experiment : from the exit of the collimator to the last sensor. This is denoted sigma_f4
    double sigma_Pl1, sigma_Pl2, sigma_Pl3, sigma_B1 ;
    sigma_Pl1 = Sqrt( Power( MultScattX_fit[0]->GetParameter(2), 2) + Power( MultScattY_fit[0]->GetParameter(2), 2) );
    sigma_Pl2 = Sqrt( Power( MultScattX_fit[1]->GetParameter(2), 2) + Power( MultScattY_fit[1]->GetParameter(2), 2) );
    sigma_Pl3 = Sqrt( Power( MultScattX_fit[2]->GetParameter(2), 2) + Power( MultScattY_fit[2]->GetParameter(2), 2) );
    sigma_B1 = Sqrt( Power( 5.01E3, 2) + Power( 3.94E3, 2) );
    double sigma_f4 = Sqrt( Power(sigma_B1, 2) + Power(sigma_Pl1, 2) + Power(sigma_Pl2, 2) + Power(sigma_Pl3, 2) ) ;
    printf("Deviation due to multiple scattering from the source to the last sensor (mu m) : %4f\n", sigma_f4 ); 
    //From the knowledge of sigma_f4, we can try to determine a region on the first sensor
    //so that any particle hitting the first sensor in this region will be detected on the last sensor
    //This region is given the inverse of the erf function of the fraction of particles detected on the last sensor = 1cm/sigma_f4
    printf("Erf(f) = X/(sqrt(2) x sigma_B1 ): %4f\n", ErfInverse( 1E4/(sigma_f4) ) ); 
    
    
    
    
    //plotting
    gSystem->cd(wkDir);
    //canvas with pixel multiplicity on each plane with a threshold level of 6 sigma
    TCanvas *c_6s = new TCanvas("Canvas 6s", "Canvas 6s", 0, 0, 900, 900);
    c_6s->Divide(2,2);
    c_6s->cd(1); hPl1_6s->Draw("");
    c_6s->cd(2); hPl2_6s->Draw("");
    c_6s->cd(3); hPl3_6s->Draw("");
    c_6s->cd(4); hPl4_6s->Draw("");
    
    //canvas with pixel multiplicity on each plane with a threshold level of 6 sigma
    TCanvas *c_8s = new TCanvas("Canvas 8s", "Canvas 8s", 0, 0, 900, 900);
    c_8s->Divide(2,2);
    c_8s->cd(1); hPl1_8s->Draw("");
    c_8s->cd(2); hPl2_8s->Draw("");
    c_8s->cd(3); hPl3_8s->Draw("");
    c_8s->cd(4); hPl4_8s->Draw("");
    
    //canvas with pixel multiplicity on each plane with a threshold level of 6 sigma
    TCanvas *c_10s = new TCanvas("Canvas 10s", "Canvas 10s", 0, 0, 900, 900);
    c_10s->Divide(2,2);
    c_10s->cd(1); hPl1_10s->Draw("");
    c_10s->cd(2); hPl2_10s->Draw("");
    c_10s->cd(3); hPl3_10s->Draw("");
    c_10s->cd(4); hPl4_10s->Draw("");
    
    //canvas with pixel multiplicity on each plane with a threshold level of 6 sigma
    TCanvas *c_12s = new TCanvas("Canvas 12s", "Canvas 12s", 0, 0, 900, 900);
    c_12s->Divide(2,2);
    c_12s->cd(1); hPl1_12s->Draw("");   
    c_12s->cd(2); hPl2_12s->Draw("");
    c_12s->cd(3); hPl3_12s->Draw("");   
    c_12s->cd(4); hPl4_12s->Draw("");  
    
    //canvas with the graph of both fake rate and cluster size
    TCanvas *c_fake_cluster = new TCanvas("Canvas fake rate & Cluster Size", "Canvas fake rate & Cluster Size", 0, 0, 900, 900);
    c_fake_cluster->Divide(2,2);
    c_fake_cluster->cd(1);    
        hFakeRatePl1->Draw("AP");     
        AxisPl1->Draw("SAME");    
        hClusterSizePl1_scale->Draw("SAME P");    
        gPad->BuildLegend();    
    c_fake_cluster->cd(2);
        hFakeRatePl2->Draw("AP");
        AxisPl2->Draw("SAME");    
        hClusterSizePl2_scale->Draw("SAME P");
        gPad->BuildLegend();
    c_fake_cluster->cd(3);
        hFakeRatePl3->Draw("AP");
        AxisPl3->Draw("SAME");    
        hClusterSizePl3_scale->Draw("SAME P");
        gPad->BuildLegend();
    c_fake_cluster->cd(4);
        hFakeRatePl4->Draw("AP");
        AxisPl4->Draw("SAME");    
        hClusterSizePl4_scale->Draw("SAME P");
        clusterSize->Draw("SAME P");
        gPad->BuildLegend();
        
    //canvas with all the fake rate graph
    TCanvas *c_fake = new TCanvas("Canvas fake rate", "Canvas fake rate", 0, 0, 900, 900);
    c_fake->Divide(2,2);
    c_fake->cd(1);
        hFakeRatePl1->Draw("AP");    
        hFakeRatePl1_veto_1->Draw("same P");    
        hFakeRatePl1_veto_01->Draw("same P");   
        gPad->SetLogy();
        gPad->BuildLegend();
    c_fake->cd(2);
    c_fake->SetLogy();
        hFakeRatePl2->Draw("AP");    
        hFakeRatePl2_veto_1->Draw("same P");    
        hFakeRatePl2_veto_01->Draw("same P");  
        gPad->SetLogy();
        gPad->BuildLegend();
    c_fake->cd(3);
    c_fake->SetLogy();
        hFakeRatePl3->Draw("AP");    
        hFakeRatePl3_veto_1->Draw("same P");    
        hFakeRatePl3_veto_01->Draw("same P");    
        gPad->SetLogy();
        gPad->BuildLegend();
    c_fake->cd(4);
    c_fake->SetLogy();
        hFakeRatePl4->Draw("AP");    
        hFakeRatePl4_veto_1->Draw("same P");    
        hFakeRatePl4_veto_01->Draw("same P");    
        gPad->SetLogy();
        gPad->BuildLegend();
    
    //canvas with all the cluster graph
    TCanvas *c_cluster = new TCanvas("Canvas Cluster", "Canvas Cluster", 0 , 0, 1800, 900);
    c_cluster->Divide(4,2);
    c_cluster->cd(1); hClusterSizePl1->Draw("AP");
    c_cluster->cd(2); hClusterSizePl2->Draw("AP");
    c_cluster->cd(3); hClusterSizePl3->Draw("AP");
    c_cluster->cd(4); hClusterSizePl4->Draw("AP");
    c_cluster->cd(5);
        fClusterPl1->Draw("");
        for( int iTh = 0 ; iTh < Threshold.size() ; iTh++){
            lPl1[iTh]->Draw("same");
            tPl1[iTh]->Draw("same");
        }
    c_cluster->cd(6);
        fClusterPl2->Draw("");
    /*for( int iTh = 0 ; iTh < Threshold.size() ; iTh++){
        lPl2[iTh]->Draw("same");
        tPl2[iTh]->Draw("same");
    }*/
    c_cluster->cd(7);
        fClusterPl3->Draw("");
        for( int iTh = 0 ; iTh < Threshold.size() ; iTh++){
            lPl3[iTh]->Draw("same");
            tPl3[iTh]->Draw("same");
        }
    c_cluster->cd(8);
        fClusterPl4->Draw("");
        for( int iTh = 0 ; iTh < Threshold.size() ; iTh++){
            lPl4[iTh]->Draw("same");
            tPl4[iTh]->Draw("same");
        }
    
    //canvas with all the graph relating to the hitmap
    TCanvas *c_H = new TCanvas("Canvas Hits", "Canvas Hits", 0, 0, 1800, 900);
    c_H->Divide(6,2);
    c_H->cd(1); hPl1->Draw("colz");
    c_H->cd(2); hPl1_x->Draw("");
    c_H->cd(3); hPl1_y->Draw("");
    c_H->cd(4); hPl2->Draw("colz");
    c_H->cd(5); hPl2_x->Draw("");
    c_H->cd(6); hPl2_y->Draw("");
    c_H->cd(7); hPl3->Draw("colz");
    c_H->cd(8); hPl3_x->Draw("");
    c_H->cd(9); hPl3_y->Draw("");
    c_H->cd(10); hPl4->Draw("colz");
    c_H->cd(11); hPl4_x->Draw("");
    c_H->cd(12); hPl4_y->Draw("");
    
    
    //canvas with graph relating to the alignment of the planes
    TCanvas *c_Align = new TCanvas("Canvas Align", "Canvas Align", 0, 0, 1400, 900);
    TPad *up = new TPad("up","up", 0, 0.53, 1, 0.98); TPad *down = new TPad("down","down", 0, 0, 1, 0.53);
    up->SetTopMargin(0); up->SetBottomMargin(0); down->SetTopMargin(0); down->SetBottomMargin(0.15);
    up->Draw(""); down->Draw("");
    up->cd();
    hPlanePosX->Draw("AP");
    lin_X->Draw("SAME");
    txPl1->Draw();
    txPl2->Draw();
    txPl3->Draw();
    txPl4->Draw();
    auto legend = new TLegend(0.5, 0.6, 0.9, 1);
    legend->AddEntry(hPlanePosX, "Plane position", "lep");
    legend->AddEntry(lin_X, "Linear fit obtained from the planes 2 and 4", "l");
    legend->SetTextSize(0.06);
    legend->Draw();
    down->cd();
    hPlanePosY->Draw("AP");
    lin_Y->Draw("SAME");
    tyPl1->Draw();
    tyPl2->Draw();
    tyPl3->Draw();
    tyPl4->Draw();
    
    
    //canvas with graph relating to multiple scattering
    TCanvas *c_Mult = new TCanvas("Canvas MultScatt", "Canvas MultScatt", 0, 0, 1800, 900);
    gStyle->SetOptFit(1111);
    TPad *Mult1X = new TPad("Mult1X","Mult1X", 0, 0.5, 0.25, 1); TPad *Mult1Y = new TPad("Mult1Y","Mult1Y", 0.25, 0.5, 0.5, 1);
    TPad *Mult2X = new TPad("Mult2X","Mult2X", 0.5, 0.5, 0.75, 1); TPad *Mult2Y = new TPad("Mult2Y","Mult2Y", 0.75, 0.5, 1, 1);
    TPad *Mult3X = new TPad("Mult3X","Mult3X", 0.25, 0, 0.5, 0.5); TPad *Mult3Y = new TPad("Mult3Y","Mult3Y", 0.5, 0, 0.75, 0.5);
    Mult1X->Draw(); Mult2X->Draw(); Mult3X->Draw();
    Mult1Y->Draw(); Mult2Y->Draw(); Mult3Y->Draw();
    Mult1X->cd();
    hMultScattX_Pl1->Draw("");
    Mult1Y->cd();
    hMultScattY_Pl1->Draw("");
    Mult2X->cd();
    hMultScattX_Pl2->Draw("");
    Mult2Y->cd();
    hMultScattY_Pl2->Draw("");
    Mult3X->cd();
    hMultScattX_Pl3->Draw("");
    Mult3Y->cd();
    hMultScattY_Pl3->Draw("");
        
    //dumped canvas
    TCanvas *c_dump = new TCanvas("Canvas Dump", "Canvas Dump", 0, 0, 1600, 800);
    c_dump->Divide(2,1);
    c_dump->cd(1);
    gPad->SetLogy();
    hMultScatt->Draw("AP");
    c_dump->cd(2);
    gStyle->SetOptTitle(kFALSE);
     hMultScattX_Pl3->DrawNormalized();
        for( int i = 0 ; i < diff.size() ; i++){
            diff[i]->DrawNormalized("same PLC");
        }
        gPad->BuildLegend();
  
        
    //save all the graph in a root file : result.root
    result->cd();
    c_6s->Write();
    c_8s->Write();
    c_10s->Write();
    c_12s->Write();
    c_fake_cluster->Write();
    c_fake->Write();
    c_cluster->Write();
    c_H->Write();
    c_Align->Write();
    c_dump->Write();
    c_Mult->Write();
}
