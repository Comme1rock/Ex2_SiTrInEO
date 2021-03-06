
/*******************************************************************************
File      : x:\lib\com\maps\fsbb0\fsbb0.c
Goal      : Functions of Ultimate 1 library.
          : It provides Ultimate 1 types definition and data handling functions.
Prj date  : 28/02/2011
File date : 28/02/2011
Doc date  : //200
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
----------------------------------------------------------------------------------
License   : You are free to use this source files for your own development as long
          : as it stays in a public research context. You are not allowed to use it
          : for commercial purpose. You must put this header with laboratory and
          : authors names in all development based on this library.
----------------------------------------------------------------------------------
Labo      : IPHC */
/*******************************************************************************/


#ifndef FSBB0_C
#define FSBB0_C


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype : 
          :
Goal      : 
          :
Inputs    :
          :
Ouputs    : 
          :
Globals   : 
          :
Remark    :
          :
Level     : 
Date      : //2004
Doc date  : //2004
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    :
:
Level     :
Date      : 24/11/2008
Doc date  : //2004
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */                          

// $ SInt32 FSBB0__FBegin ( SInt8 FileErrLogLvl, char* FileErrFile ) {

// $  FSBB0__VGContext.FileErrLogLvl = FileErrLogLvl;
// $  strcpy ( FSBB0__VGContext.FileErrFile, FileErrFile );
   
// $  err_retok (( ERR_OUT, "" ));
// $}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    :
:
Level     :
Date      : 24/11/2008
Doc date  : //2004
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */

// $SInt32 FSBB0__FEnd () {
  
  
// $  err_retok (( ERR_OUT, "" ));
// $}



/* ------------------------------ */
/* General functions for MAPS     */
/* ------------------------------ */



/*******************************************************************************
Prototype : SInt8 SUZE02_FHammingDecoder8_4(UInt8 CodedIn)

Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    : PrintLvl = 5 => Print states 
Level     :
Date      : 10/07/2013
Doc date  : 
Rev       : 
 Author    : Matthieu SPECHT
E-mail    : matthieu.specht@iphc.cnrs.fr
Labo      : IPHC */
/******************************************************************************/

 SInt8 FSBB0_FHammingDecoder8_4(UInt8 CodedIn)
 {
 	UInt8 	VSyndrome;
 	UInt8   VParity;
	SInt8 	VResult;
	UInt8   VTempResult;
    UInt8   VError;
	
	VSyndrome = ((((CodedIn & 0x8)>>3)^((CodedIn & 0x10)>>4)^((CodedIn & 0x20)>>5)^((CodedIn & 0x40)>>6))<<2 +
				(((CodedIn & 0x2)>>1)^((CodedIn & 0x4)>>2)^((CodedIn & 0x20)>>5)^((CodedIn & 0x40)>>6))<<1  +
				((CodedIn & 0x1)^((CodedIn & 0x4)>>2)^((CodedIn & 0x10)>>4)^((CodedIn & 0x40)>>6)));
 	// Parity bit

 	VParity       = (CodedIn & 0x1)^((CodedIn & 0x2)>>1)^((CodedIn & 0x4)>>2)^((CodedIn & 0x8)>>3)^((CodedIn & 0x10)>>4)^((CodedIn & 0x20)>>5)^((CodedIn & 0x40)>>6);
	VTempResult = CodedIn;
   switch (VSyndrome )
    {
			case 0 : {
					// No Trans Error 
					// Nothing to do
				break;
				}
			case 1 :{
					// Error on bit 0
					VTempResult ^= 0x1;
				break;
				}
			case 2 : {
					// Error on bit 1
					VTempResult ^= 0x2;
				break;
				}
			case 3 : {
					// Error on bit 2
					VTempResult ^= 0x4;
				break;
				}
			case 4 : {
					// Error on bit 3
					VTempResult ^= 0x8;
				break;
				}
			case 5 : {
					// Error on bit 4
					VTempResult ^= 0x10;
				break;
				}
			case 6 : {
					// Error on bit 5
					VTempResult ^= 0x20;
				break;
				}
			default      : {
					// Error on bit 6
					VTempResult ^= 0x40;
				break;
				}
	}  /*  end switch  */
    // ------------------------------------------------------------- //
  if (VSyndrome == 0){
		VError = 0;
	}
	else{
		if (VParity == ((CodedIn & 0x80)>>7)){
			VError = 5;
			}
		else{
			VError = 3;
		}
	}
	VResult = ((VTempResult & 2)>>2) + ((VTempResult & 16)>>3) + ((VTempResult & 32)>>3) + ((VTempResult & 64)>>3);
  err_trace (( ERR_OUT, "FSBB0_FHammingDecoder8_4, result :%X, Error code : %X",VResult,VError  ));
	
	return (VResult);

}




/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 27/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__MAPS__FRegDiscriCumulResetHit ( SInt32* PtDestCumul, SInt16 DiscriNb ) {
  
  SInt16 Vi;
  
  for ( Vi=0; Vi < DiscriNb; Vi++ ) {
    PtDestCumul[Vi] = 0;
  }
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 27/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__MAPS__FRegDiscriCumulAddHit ( SInt8* PtSrcDiscri, SInt32* PtDestCumul, SInt16 DiscriNb ) {
  
  SInt16 Vi;
  
  for ( Vi=0; Vi < DiscriNb; Vi++ ) {
    
    if ( PtSrcDiscri[Vi] == 1 ) {
      ++PtDestCumul[Vi];
    }
    
  }
  
  err_retok (( ERR_OUT, "" ));
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 27/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__MAPS__FRegDiscriCumulCalcPercent ( SInt32* PtSrcCumul, float* PtDestPercent, SInt16 DiscriNb, SInt16 EvNb ) {
  
  SInt16 Vi;
  
  for ( Vi=0; Vi < DiscriNb; Vi++ ) {
    PtDestPercent[Vi] = 100* ((float) PtSrcCumul[Vi] / (float) EvNb);
  }
  
  err_retok (( ERR_OUT, "" ));
}


// 25/02/2009

SInt32 FSBB0__MAPS__FRegDiscriCumulCountHits ( SInt32* PtSrcCumul, float* PtDestPercent, SInt16 DiscriNb, SInt16 EvNb ) {
  
  SInt16 Vi;
  SInt32 VHiCnt;
  
  VHiCnt = 0;
  
  for ( Vi=0; Vi < DiscriNb; Vi++ ) {
    VHiCnt = VHiCnt + PtSrcCumul[Vi];
    PtDestPercent[Vi] = PtSrcCumul[Vi];
  }
  
  // err_retok (( ERR_OUT, "" ));
  
  return (VHiCnt);
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    : Set parameter FirstW16 or LastW16 to -1 to avoid data W16 printing
:
Level     :
Date      : 16/02/2009
Rev       : 17/06/2009
          : - Print Triger

Doc date  : 
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0_FPrintZsFFrameRawHeader ( FSBB0__TZsFFrameRaw* Pt ) {
  
  UInt16 Vi;
    
  err_retnull ( Pt, (ERR_OUT,"Pt == NULL") );
  
  msg (( MSG_OUT, "=======================================" ));
  msg (( MSG_OUT, "AsicNo           = %4d [D]", Pt->SStatus.AsicNo ));
  msg (( MSG_OUT, "AcqNo            = %4d [D]", Pt->SStatus.AcqNo ));
  msg (( MSG_OUT, "FrameNoInAcq     = %4d [D]", Pt->SStatus.FrameNoInAcq ));
  msg (( MSG_OUT, "FrameNoInRun     = %4d [D]", Pt->SStatus.FrameNoInRun ));
//#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
  msg (( MSG_OUT, "TrigSignalLine   = %4d [D]", Pt->SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE] ));
  msg (( MSG_OUT, "TrigSignalClk    = %4d [D]", Pt->SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_CLK]  ));
  msg (( MSG_OUT, "TrigLine         = %4d [D]", Pt->SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__LINE]     ));
  msg (( MSG_OUT, "TotTrigNb        = %4d [D]", Pt->SStatus.ATrigRes[ASIC__FSBB0_TRIG_TOT_NB]        ));
//#endif
  msg (( MSG_OUT, "----------------------------------------" ));
  msg (( MSG_OUT, "Header           = %4x [H]", Pt->Header     ));
  msg (( MSG_OUT, "Trigger          = %4x [h]", Pt->Trigger    ));
  msg (( MSG_OUT, "FrameCnt         = %4d [D]", Pt->DataLengthRemFrCnt.F.FrameCnt   ));
  msg (( MSG_OUT, "CalcDataLength   = %4d [D]", Pt->CalcDataLength ));
  msg (( MSG_OUT, " - DataLength    = %4d [D]", Pt->DataLengthRemFrCnt.F.DataLength ));
  msg (( MSG_OUT, " - Rem           = %4d [D]", Pt->DataLengthRemFrCnt.F.Rem ));
  msg (( MSG_OUT, "Trailer          = %4x [H]", Pt->Trailer    ));
  msg (( MSG_OUT, "=======================================" ));
  
  msg (( MSG_OUT, "" ));
  

  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    : Set parameter FirstW16 or LastW16 to -1 to avoid data W16 printing
:
Level     :
Date      : 09/12/2008
Rev       : 22/05/2014 - MS
          :  Applied the modifications from GC in fsrr_usr.typ and fsbb_usr.def
Doc date  : //2004
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0_FPrintZsFFrameRaw ( FSBB0__TZsFFrameRaw* Pt, SInt16 FirstW32, SInt16 LastW32 ) {

  UInt16 Vi;
  
  err_retnull ( Pt, (ERR_OUT,"Pt == NULL") );
  
  msg (( MSG_OUT, "=======================================" ));
  msg (( MSG_OUT, "Header           = %4x [H]", Pt->Header     ));
  msg (( MSG_OUT, "FrameCnt         = %4x [H]", Pt->DataLengthRemFrCnt.F.FrameCnt   ));
  msg (( MSG_OUT, "CalcDataLength   = %4d [D]", Pt->CalcDataLength ));
  msg (( MSG_OUT, " - DataLength    = %4d [D]", Pt->DataLengthRemFrCnt.F.DataLength ));
  msg (( MSG_OUT, " - Rem           = %4d [D]", Pt->DataLengthRemFrCnt.F.Rem ));
  msg (( MSG_OUT, "Trailer          = %4x [H]", Pt->Trailer    ));
  msg (( MSG_OUT, "=======================================" ));
  
  if ( (FirstW32 < 0) || (LastW32 < 0) || (LastW32 < FirstW32) ) {
    err_retok (( ERR_OUT, "No W32 to print OR bad parameters ? FirstW32=%d - LastW32=%d", FirstW32, LastW32 ));
  }
  
  for ( Vi=FirstW32; Vi <= LastW32; Vi++ ) {
    msg (( MSG_OUT, "[W %4d] = %4x [H] - %4d [D]", Vi, Pt->ADataW32[Vi], Pt->ADataW32[Vi] ));
  }
  
  msg (( MSG_OUT, "=======================================" ));
  msg (( MSG_OUT, "" ));

  err_retok (( ERR_OUT, "" ));
}




/* ------------------------------ */
/* Specific functions for FSBB0    */
/* ------------------------------ */

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 02/02/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FRegDiscriConvBitToW32 ( SInt8* PtSrc, UInt32* PtDest, SInt16 DiscriW32Sz ) {
  
  
  SInt32  ViDiscri;
  SInt32  ViDestW32;
  UInt32  VMask;
  SInt8   ViBitInW32;
  
  err_retnull ( PtSrc, (ERR_OUT,"PtSrc == NULL") );
  err_retnull ( PtDest   , (ERR_OUT,"PtDest    == NULL") );
  
  
  ViDiscri = 0;
  
  for ( ViDestW32=0; ViDestW32 < DiscriW32Sz; ViDestW32++ ) {
    
    PtDest[ViDestW32] = 0;
    VMask = 1;
    
    for ( ViBitInW32=0; ViBitInW32 < 32; ViBitInW32++ ) {
      
      if ( PtSrc[ViDiscri] == 1 ) {
        PtDest[ViDestW32] = PtDest[ViDestW32] + VMask;
      }
      
      VMask = VMask << 1;
      ++ViDiscri;
    }
    
  }
  
  //err_retok (( ERR_OUT, "" ));
}




/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 22/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FRegDiscriConvW32ToBit ( UInt32* PtSrc, SInt8* PtDest, SInt16 DiscriW32Sz ) {
  
  
  SInt32  ViDiscri;
  SInt32  ViSrcW32;
  UInt32  VMask;
  SInt8   ViBitInW32;
  
  err_retnull ( PtSrc, (ERR_OUT,"PtSrc == NULL") );
  err_retnull ( PtDest   , (ERR_OUT,"PtDest    == NULL") );
  
  
  ViDiscri = 0;
  
  for ( ViSrcW32=0; ViSrcW32 < DiscriW32Sz; ViSrcW32++ ) {
    VMask = 1;
    for ( ViBitInW32=0; ViBitInW32 < 32; ViBitInW32++ ) {
      PtDest[ViDiscri] = ( (PtSrc[ViSrcW32] & VMask) != 0 );
      VMask = VMask << 1;
      ++ViDiscri;
    }
  }
  
  return (0);
  
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 07/03/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FRegDiscriConvW32ToBitAsW32 ( UInt32* PtSrc, SInt32* PtDest, SInt16 DiscriW32Sz ) {
  
  char VFuncName[] = "FSBB0__FRegDiscriConvW32ToBitAsW32";

  SInt32  ViDiscri;
  SInt32  ViSrcW32;
  UInt32  VMask;
  SInt8   ViBitInW32;
  
  err_retnull ( PtSrc, (ERR_OUT,"PtSrc == NULL") );
  err_retnull ( PtDest   , (ERR_OUT,"PtDest    == NULL") );
  
  
  ViDiscri = 0;
  
  for ( ViSrcW32=0; ViSrcW32 < DiscriW32Sz; ViSrcW32++ ) {
    VMask = 1;
    for ( ViBitInW32=0; ViBitInW32 < 32; ViBitInW32++ ) {
      PtDest[ViDiscri] = ( (PtSrc[ViSrcW32] & VMask) != 0 );
      VMask = VMask << 1;
      ++ViDiscri;
    }
  }
  
  return (0);
  
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 28/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */


SInt32 FSBB0__FMatDiscriConvW32ToBit ( FSBB0__TMatDiscriW32* PtSrc, FSBB0__TMatDiscriBit* PtDest ) {
  
  SInt32 ViLine;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  == NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
    FSBB0__FRegDiscriConvW32ToBit ( PtSrc->AALineW32[ViLine], PtDest->AALineCol[ViLine], FSBB0__REG_DISCRI_W32_SZ );
  }
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 07/03/2009
		  : 20/05/2014 - MS : replaced 1152 by FSBB0__MAT_DISCRI_COL_NB in the line multiplicator
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */


SInt32 FSBB0__FMatDiscriConvW32ToBitAsW32 ( FSBB0__TMatDiscriW32* PtSrc, SInt32* PtDest ) {

  char VFuncName[] = "FSBB0__FMatDiscriConvW32ToBitAsW32";
  
  SInt32 ViLine;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  == NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
    FSBB0__FRegDiscriConvW32ToBitAsW32 ( PtSrc->AALineW32[ViLine], &PtDest[ViLine * FSBB0__MAT_DISCRI_COL_NB], FSBB0__REG_DISCRI_W32_SZ );
  }
  
  err_retok (( ERR_OUT, "" ));
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 07/03/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */


SInt32 FSBB0__FSubMatDiscriBitAsW32Copy ( SInt32* PtSrc, SInt32* PtDest, SInt8 Matrix ) {

  char VFuncName[] = "FSBB0__FSubMatDiscriBitAsW32Copy";
  
  SInt32 ViLine;
  SInt32 ViCol;
  SInt32 ViPixSrc;
  SInt32 ViPixDest;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  == NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  ViPixDest = 0;

  for ( ViLine=0; ViLine < (FSBB0__MAT_DISCRI_USEFUL_LINES_NB / FSBB0__SUB_MAT_NB); ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
      ViPixSrc = (ViLine * FSBB0__REG_DISCRI_BIT_SZ) + ViCol;
      PtDest[ViPixDest] = PtSrc[ViPixSrc];
      ++ViPixDest;
    }

  }
    
  err_retok (( ERR_OUT, "" ));
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 02/02/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */


SInt32 FSBB0__FMatDiscriEmulHit ( FSBB0__TMatDiscriW32* PtDest, SInt16 HitPattern, SInt16 Hit0Line, SInt16 Hit0Col, SInt16 Hit1Line, SInt16 Hit1Col, SInt16 Hit2Line, SInt16 Hit2Col, SInt16 Hits0AllCol, SInt16 Hits1AllCol, SInt16 Hits2AllCol ) {
  
  SInt32 ViLine;
  SInt32 ViCol;
  FSBB0__TMatDiscriBit* PtDestBit;
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  // Reset all hits
      msg (( MSG_OUT, "FSBB0__FMatDiscriEmulHit, start" ));
  PtDestBit = (FSBB0__TMatDiscriBit*)malloc(sizeof (FSBB0__TMatDiscriBit));
  memset ( PtDestBit, 0, sizeof (FSBB0__TMatDiscriBit) );
  
    switch (HitPattern){
        case FSBB0_EMUL_HITS:{
            msg (( MSG_OUT, "FSBB0__FMatDiscriEmulHit, case FSBB0_EMUL_HITS" ));

            // Hit 0

            if ( (Hit0Line >= 0) && (Hit0Col >= 0) ) {
                PtDestBit->AALineCol[Hit0Line][Hit0Col] = 1;
            }

            // Hit 1

            if ( (Hit1Line >= 0) && (Hit1Col >= 0) ) {
                PtDestBit->AALineCol[Hit1Line][Hit1Col] = 1;
            }

            // Hit 2

            if ( (Hit2Line >= 0) && (Hit2Col >= 0) ) {
                PtDestBit->AALineCol[Hit2Line][Hit2Col] = 1;
            }

            // Hits 0 on all lines of one col

            if ( Hits0AllCol >= 0 ) {
                for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
                  PtDestBit->AALineCol[ViLine][Hits0AllCol] = 1;
                }
            }

            // Hits 1 on all lines of one col

            if ( Hits1AllCol >= 0 ) {
                for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
                  PtDestBit->AALineCol[ViLine][Hits1AllCol] = 1;
                }
            }

            // Hits 2 on all lines of one col

            if ( Hits2AllCol >= 0 ) {
                for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
                  PtDestBit->AALineCol[ViLine][Hits2AllCol] = 1;
                }
            }
        break; }
        case FSBB0_EMUL_ALL_ZERO:{
            msg (( MSG_OUT, "FSBB0__FMatDiscriEmulHit, case FSBB0_EMUL_ALL_ZERO" ));
            // doing nothing because the matrix has been resetted
        break;}
        case FSBB0_EMUL_ALL_ONE:{
            msg (( MSG_OUT, "FSBB0__FMatDiscriEmulHit, case FSBB0_EMUL_ALL_ONE" ));
            for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
                for ( ViCol=0; ViCol < FSBB0__MAT_DISCRI_COL_NB; ViCol++ ) {
                    PtDestBit->AALineCol[ViLine][ViCol] = 1;
                }
            }    
        break;}
        case  FSBB0_EMUL_CROSS:{
            msg (( MSG_OUT, "FSBB0__FMatDiscriEmulHit, case FSBB0_EMUL_CROSS" ));
            ViCol = 0;
            for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
                PtDestBit->AALineCol[ViLine][ViCol] = 1;
                PtDestBit->AALineCol[ViLine][FSBB0__MAT_DISCRI_COL_NB - 1- ViCol] = 1;
                ViCol++;
            }        
        break;}        
        case  FSBB0_EMUL_BORDER:{
            msg (( MSG_OUT, "FSBB0__FMatDiscriEmulHit, case FSBB0_EMUL_BORDER" ));
                // first line and last line
                for ( ViCol=0; ViCol < FSBB0__MAT_DISCRI_COL_NB; ViCol++ ) {
                    PtDestBit->AALineCol[0][ViCol] = 1;
                    PtDestBit->AALineCol[FSBB0__MAT_DISCRI_USEFUL_LINES_NB - 1][ViCol] = 1;
                }
                // first col and last col
            for ( ViLine=1; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB - 1; ViLine++ ) {
                PtDestBit->AALineCol[ViLine][0] = 1;
                PtDestBit->AALineCol[ViLine][FSBB0__MAT_DISCRI_COL_NB - 1] = 1;
                ViCol++;
            }                
        break;}
    } /* end switch */
      msg (( MSG_OUT, "FSBB0__FMatDiscriEmulHit, Emulation done in bits" ));
  
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
        FSBB0__FRegDiscriConvBitToW32 ( PtDestBit->AALineCol[ViLine], PtDest->AALineW32[ViLine], FSBB0__REG_DISCRI_W32_SZ );
    }
  
      msg (( MSG_OUT, "FSBB0__FMatDiscriEmulHit, emulation bit converted to W32" ));
  
  free (PtDestBit);
  err_retok (( ERR_OUT, "" ));
}




/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 21/03/2011
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */


SInt32 FSBB0__FRegDiscriResetHit ( SInt8* PtDest, SInt16 DiscriBitSz  ) {
  
  SInt16 ViCol;
  
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  
  
  // Reset row
    
  for ( ViCol=0; ViCol < DiscriBitSz; ViCol++ ) {
    PtDest[ViCol] = 0;        
  }
      
  err_retok (( ERR_OUT, "" ));
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 21/03/2011
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */


SInt32 FSBB0__FRegDiscriPrintHit ( SInt8* PtSrc ) {
  
  SInt16 ViCol;
  
  err_retnull ( PtSrc, (ERR_OUT,"PtSrc == NULL") );
  
  
  msg (( MSG_OUT, "*************************************" ));
  msg (( MSG_OUT, "* Print coordinates pixels with hit *" ));
  msg (( MSG_OUT, "*************************************" ));
  
  // Scan row => Print coordinates if hit
  
    
  for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
    
    if ( PtSrc[ViCol] == 1 ) {
      msg (( MSG_OUT, "Hit => Col [%.4d]", ViCol ));
    }
    
  }
  
  
  msg (( MSG_OUT, "" ));
  
  err_retok (( ERR_OUT, "" ));
}




/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 28/03/2011
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */


SInt32 FSBB0__FRegDiscriCompare ( SInt8* PtSrc, SInt8* PtRef, SInt8 PrintErrors ) {
  
  SInt16 ViCol;
  SInt32 VErrCnt;


  err_retnull ( PtSrc, (ERR_OUT,"PtSrc == NULL") );
  err_retnull ( PtRef, (ERR_OUT,"PtRef == NULL") );
      
  // Scan row => Print if error 
  
  VErrCnt = 0;
  
  for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
    
    if ( PtSrc[ViCol] != PtRef[ViCol] ) {
      
      ++VErrCnt;
      
      if ( PrintErrors ) {
        msg (( MSG_OUT, "Error => Col [%.4d] Read=%d - Must be=%d", ViCol, PtSrc[ViCol], PtRef[ViCol] ));
      }
      
    }
    
  }
  
  
  err_retval ( VErrCnt, ( ERR_OUT, "Compare done %d errors found !", VErrCnt ) );
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 28/03/2011
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */


SInt32 FSBB0__FMatDiscriResetHit ( FSBB0__TMatDiscriBit* PtDest ) {
  
  SInt32 ViLine;
  SInt32 ViCol;
  
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
    
  // Scan matrix => Reset hits
  
  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
      PtDest->AALineCol[ViLine][ViCol] = 0;
    }
    
  }
    
  err_retok (( ERR_OUT, "" ));
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 02/02/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */


SInt32 FSBB0__FMatDiscriPrintHit ( char* CmtStrTitle, SInt8 CmtSInt8MapsId, FSBB0__TMatDiscriBit* PtDest ) {
  
  SInt32 ViLine;
  SInt32 ViCol;
  
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  
  msg (( MSG_OUT, "***************************************************************************" ));
  msg (( MSG_OUT, "* Mi28 [%d] %s : Coordinates pixels with hit *", CmtSInt8MapsId, CmtStrTitle ));
  msg (( MSG_OUT, "***************************************************************************" ));
  
  // Scan matrix => Print coordinates if hit
  
  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
      
      if ( PtDest->AALineCol[ViLine][ViCol] == 1 ) {
        msg (( MSG_OUT, "Hit => Line [%.4d] - Col [%.4d]", ViLine, ViCol ));
      }
      
    }
    
  }
  
  msg (( MSG_OUT, "" ));
  
  err_retok (( ERR_OUT, "" ));
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 29/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FMatDiscriCumulResetHit ( FSBB0__TMatDiscriCumul* PtDest ) {
  
  SInt16 ViLine;
  SInt16 ViCol;
  
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
      PtDest->AALineCol[ViLine][ViCol] = 0;
    }
    
  }
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 29/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FMatDiscriCumulAddHit ( FSBB0__TMatDiscriBit* PtSrc, FSBB0__TMatDiscriCumul* PtDest ) {
  
  SInt16 ViLine;
  SInt16 ViCol;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
      
      if ( PtSrc->AALineCol[ViLine][ViCol] == 1 ) {
        ++ PtDest->AALineCol[ViLine][ViCol];
      }
      
    }
    
  }
  
  err_retok (( ERR_OUT, "" ));
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 29/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FMatDiscriCumulCalcPercent ( FSBB0__TMatDiscriCumul* PtSrc, FSBB0__TMatDiscriPerCent* PtDest, SInt16 EvNb ) {
  
  SInt16 ViLine;
  SInt16 ViCol;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
      PtDest->AALineCol[ViLine][ViCol] = 100 * ( (float) PtSrc->AALineCol[ViLine][ViCol] / (float) EvNb);
    }
    
  }
  
  err_retok (( ERR_OUT, "" ));
}

// 06/03/2009
// Return mean % value of whole matrix
// 23/01/2013
// - Calculates VMatPerCent on the whole matrix, before it was done on 1/4 matrix assuming
// that Ultimate was tested matrix by matrix = threshold set to 255 on the three matrices not tested

float FSBB0__FExtMatDiscriCumulCalcPercent ( FSBB0__TMatDiscriCumul* PtSrc, FSBB0__TMatDiscriPerCent* PtDest, SInt16 EvNb ) {
  
  SInt16 ViLine;
  SInt16 ViCol;
  float  VPixPerCent;
  float  VSumPerCent;
  float  VMatPerCent;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  VSumPerCent = 0;
  
  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
      VPixPerCent = ( (float) PtSrc->AALineCol[ViLine][ViCol] / (float) EvNb);
      PtDest->AALineCol[ViLine][ViCol] = 100 * VPixPerCent;
      VSumPerCent = VSumPerCent + VPixPerCent;
    }
    
  }
  
  // 23/01/2013

  VMatPerCent = 100 * ( (float) VSumPerCent / (float) (FSBB0__MAT_DISCRI_COL_NB * FSBB0__MAT_DISCRI_USEFUL_LINES_NB) );
  
  err_retval ( VMatPerCent, ( ERR_OUT, "Matrix %d [%]", VMatPerCent ) );
}


// 25/02/2009

SInt32 FSBB0__FMatDiscriCumulCountHits ( FSBB0__TMatDiscriCumul* PtSrc, FSBB0__TMatDiscriPerCent* PtDest, SInt16 EvNb ) {
  
  SInt16 ViLine;
  SInt16 ViCol;
  SInt32 VHitCnt;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  VHitCnt = 0;
  
  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
      VHitCnt = VHitCnt + PtSrc->AALineCol[ViLine][ViCol];
      PtDest->AALineCol[ViLine][ViCol] = PtSrc->AALineCol[ViLine][ViCol];
    }
    
  }
  
  // err_retok (( ERR_OUT, "" ));
  
  // msg (( MSG_OUT, "VHitCnt = %d", VHitCnt ));
  
  return (VHitCnt);
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 28/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriCopySubMatBit ( FSBB0__TMatDiscriBit* PtSrc, FSBB0__TSubMatDiscriBit* PtDest, SInt8 SubMatId ) {
  
  SInt16 ViLine;
  SInt16 ViCol;
  SInt16 VLineOffset;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  switch (SubMatId){
	case 0:{
		VLineOffset = 0;
	    break; }
	case 1:{
		VLineOffset = FSBB0__MAT_DISCRI_USEFUL_LINES_NB / FSBB0__SUB_MAT_NB;
	    break;  }
	default :{
        err_retfail ( -1, (ERR_OUT,"Unknown sub mat id = %d <> 0, 1", SubMatId) );
        break; }

  
  }/* end switch */

  
  for ( ViLine=0; ViLine < (FSBB0__MAT_DISCRI_USEFUL_LINES_NB/ FSBB0__SUB_MAT_NB); ViLine++ ) {
    
    
    for ( ViCol=0; ViCol <= FSBB0__REG_DISCRI_BIT_SZ; ViCol++) {
      
      PtDest->AALineCol[ViLine ][ViCol] = PtSrc->AALineCol[ViLine + VLineOffset][ViCol];
      
    } /* End for ViCol */
    
    
  } /* End for ViLine */
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 28/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriMatConvBitToColState ( FSBB0__TMatDiscriBit* PtSrc, FSBB0__TMatDiscriColor* PtDest, FSBB0__TColor ColorStateZero, FSBB0__TColor ColorStateOne, SInt8 RevertLineDirection ) {
  
  SInt32 ViLine;
  SInt32 ViCol;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  
  /* Revert line direction */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
      
      for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
        
        if ( PtSrc->AALineCol[ViLine][ViCol] == 1 ) {
          PtDest->AALineCol[ViLine][FSBB0__REG_DISCRI_BIT_SZ - 1 - ViCol] = ColorStateOne;
        }
        
        else {
          PtDest->AALineCol[ViLine][FSBB0__REG_DISCRI_BIT_SZ - 1 - ViCol] = ColorStateZero;
        }
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  /* Don't revert line direction */
  
  else {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
      
      for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
        
        if ( PtSrc->AALineCol[ViLine][ViCol] == 1 ) {
          PtDest->AALineCol[ViLine][ViCol] = ColorStateOne;
        }
        
        else {
          PtDest->AALineCol[ViLine][ViCol] = ColorStateZero;
        }
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
  
  
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 25/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriMatFullScaleConvCoinBitToColState ( FSBB0__TMatDiscriBit* PtSrc, FSBB0__TMatDiscriColor* PtDest, FSBB0__TColor ColorZeroHit, FSBB0__TColor* AColorOneHit, FSBB0__TColor ColorMultiHit, SInt8 RevertLineDirection ) {

  UInt16       VMatLineNb = FSBB0__MAT_DISCRI_USEFUL_LINES_NB;
  UInt16       VMatColNb  = FSBB0__REG_DISCRI_BIT_SZ;
  SInt32       ViLine;
  SInt32       ViCol;
  UInt8        VPixState;
  FSBB0__TColor VPixColor;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  /* --------------------- */
  /* Revert line direction */
  /* --------------------- */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < VMatLineNb; ViLine++ ) {
      
      for ( ViCol=0; ViCol < VMatColNb; ViCol++ ) {
    
        VPixState = PtSrc->AALineCol[ViLine][ViCol];
          
        while (1) {
        
          // No hit
        
          if ( VPixState == 0 ) {
            VPixColor = ColorZeroHit;
            break;
          }

          // One hit => Set color of corresponding plane
      
          if ( VPixState <= MAPS__TCDigTelMon_MAX_PLANE_NB ) {
            VPixColor = AColorOneHit[VPixState - 1];
            break;
          }
          
          // Multi hit => Set multi hits color
          
          VPixColor = ColorMultiHit;
          break;
          
        } // End while (1)
        
        PtDest->AALineCol[ViLine][VMatColNb - 1 - ViCol] = VPixColor;
                
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  
  
  /* --------------------------- */
  /* Don't revert line direction */
  /* --------------------------- */
  
  else {
    
    for ( ViLine=0; ViLine < VMatLineNb; ViLine++ ) {
      
      for ( ViCol=0; ViCol < VMatColNb; ViCol++ ) {
        
        VPixState = PtSrc->AALineCol[ViLine][ViCol];
        
        while (1) {
          
          // No hit
          
          if ( VPixState == 0 ) {
            VPixColor = ColorZeroHit;
            break;
          }
          
          // One hit => Set color of corresponding plane
          
          if ( VPixState <= MAPS__TCDigTelMon_MAX_PLANE_NB ) {
            VPixColor = AColorOneHit[VPixState - 1];
            break;
          }
          
          // Multi hit => Set multi hits color
          
          VPixColor = ColorMultiHit;
          break;
          
        } // End while (1)
        
        PtDest->AALineCol[ViLine][ViCol] = VPixColor;
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 25/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriMatConvCoinBitToColStateHalfScale ( FSBB0__TMatDiscriBitHalfScale* PtSrc, FSBB0__TMatDiscriColorHalfScale* PtDest, FSBB0__TColor ColorZeroHit, FSBB0__TColor* AColorOneHit, FSBB0__TColor ColorMultiHit, SInt8 RevertLineDirection ) {
  
  UInt16       VMatLineNb = FSBB0__MAT_DISCRI_USEFUL_LINES_NB / 2;
  UInt16       VMatColNb  = FSBB0__REG_DISCRI_BIT_SZ / 2;
  SInt32       ViLine;
  SInt32       ViCol;
  UInt8        VPixState;
  FSBB0__TColor VPixColor;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  /* --------------------- */
  /* Revert line direction */
  /* --------------------- */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < VMatLineNb; ViLine++ ) {
      
      for ( ViCol=0; ViCol < VMatColNb; ViCol++ ) {
        
        VPixState = PtSrc->AALineCol[ViLine][ViCol];
        
        while (1) {
          
          // No hit
          
          if ( VPixState == 0 ) {
            VPixColor = ColorZeroHit;
            break;
          }
          
          // One hit => Set color of corresponding plane
          
          if ( VPixState <= MAPS__TCDigTelMon_MAX_PLANE_NB ) {
            VPixColor = AColorOneHit[VPixState - 1];
            break;
          }
          
          // Multi hit => Set multi hits color
          
          VPixColor = ColorMultiHit;
          break;
          
        } // End while (1)
        
        PtDest->AALineCol[ViLine][VMatColNb - 1 - ViCol] = VPixColor;
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  
  
  /* --------------------------- */
  /* Don't revert line direction */
  /* --------------------------- */
  
  else {
    
    for ( ViLine=0; ViLine < VMatLineNb; ViLine++ ) {
      
      for ( ViCol=0; ViCol < VMatColNb; ViCol++ ) {
        
        VPixState = PtSrc->AALineCol[ViLine][ViCol];
        
        while (1) {
          
          // No hit
          
          if ( VPixState == 0 ) {
            VPixColor = ColorZeroHit;
            break;
          }
          
          // One hit => Set color of corresponding plane
          
          if ( VPixState <= MAPS__TCDigTelMon_MAX_PLANE_NB ) {
            VPixColor = AColorOneHit[VPixState - 1];
            break;
          }
          
          // Multi hit => Set multi hits color
          
          VPixColor = ColorMultiHit;
          break;
          
        } // End while (1)
        
        PtDest->AALineCol[ViLine][ViCol] = VPixColor;
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 23/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriMatConvBitToColStateHalfScale ( FSBB0__TMatDiscriBitHalfScale* PtSrc, FSBB0__TMatDiscriColorHalfScale* PtDest, FSBB0__TColor ColorStateZero, FSBB0__TColor ColorStateOne, SInt8 RevertLineDirection ) {
  
  SInt32 ViLine;
  SInt32 ViCol;
  SInt32 VMaxCol;
  SInt32 VMaxLine;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  VMaxCol  = FSBB0__REG_DISCRI_BIT_SZ / 2;
  VMaxLine = FSBB0__MAT_DISCRI_USEFUL_LINES_NB / 2;
  
  
  /* Revert line direction */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < VMaxLine; ViLine++ ) {
      
      for ( ViCol=0; ViCol < VMaxCol; ViCol++ ) {
        
        if ( PtSrc->AALineCol[ViLine][ViCol] == 1 ) {
          PtDest->AALineCol[ViLine][VMaxCol - 1 - ViCol] = ColorStateOne;
        }
        
        else {
          PtDest->AALineCol[ViLine][VMaxCol - 1 - ViCol] = ColorStateZero;
        }
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  /* Don't revert line direction */
  
  else {
    
    for ( ViLine=0; ViLine < VMaxLine; ViLine++ ) {
      
      for ( ViCol=0; ViCol < VMaxCol; ViCol++ ) {
        
        if ( PtSrc->AALineCol[ViLine][ViCol] == 1 ) {
          PtDest->AALineCol[ViLine][ViCol] = ColorStateOne;
        }
        
        else {
          PtDest->AALineCol[ViLine][ViCol] = ColorStateZero;
        }
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
  
  
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 28/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriSubMatConvBitToColState ( FSBB0__TSubMatDiscriBit* PtSrc, FSBB0__TSubMatDiscriColor* PtDest, FSBB0__TColor ColorStateZero, FSBB0__TColor ColorStateOne, SInt8 RevertLineDirection ) {
  
  SInt32 ViLine;
  SInt32 ViCol;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  
  /* Revert line direction */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < (FSBB0__MAT_DISCRI_USEFUL_LINES_NB / FSBB0__SUB_MAT_NB); ViLine++ ) {
      
      for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ ; ViCol++ ) {
        
        if ( PtSrc->AALineCol[ViLine][ViCol] == 1 ) {
          PtDest->AALineCol[ViLine][(FSBB0__REG_DISCRI_BIT_SZ ) - 1 - ViCol] = ColorStateOne;
        }
        
        else {
          PtDest->AALineCol[ViLine][(FSBB0__REG_DISCRI_BIT_SZ ) - 1 - ViCol] = ColorStateZero;
        }
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  /* Don't revert line direction */
  
  else {
    
    for ( ViLine=0; ViLine < (FSBB0__MAT_DISCRI_USEFUL_LINES_NB / FSBB0__SUB_MAT_NB); ViLine++ ) {
      
      for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ ; ViCol++ ) {
        
        if ( PtSrc->AALineCol[ViLine][ViCol] == 1 ) {
          PtDest->AALineCol[ViLine][ViCol] = ColorStateOne;
        }
        
        else {
          PtDest->AALineCol[ViLine][ViCol] = ColorStateZero;
        }
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
  
  
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 29/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriCopySubMatPerCent ( FSBB0__TMatDiscriPerCent* PtSrc, FSBB0__TSubMatDiscriPerCent* PtDest, SInt8 SubMatId ) {
  
  SInt16 ViLine;
  SInt16 ViCol;
  SInt16 VLineOffset;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );


  
  switch ( SubMatId ) {
    
    case 0 : {
      VLineOffset = 0;
      break; }
    
    case 1 : {
      VLineOffset = FSBB0__MAT_DISCRI_USEFUL_LINES_NB / FSBB0__SUB_MAT_NB;
      break; }
    

    
    default : {
      err_retfail ( -1, (ERR_OUT,"Unknown sub mat id = %d <> 0, 1", SubMatId) );
      break; }
    
  } /* End switch */
  
  for ( ViLine=0; ViLine < (FSBB0__MAT_DISCRI_USEFUL_LINES_NB/ FSBB0__SUB_MAT_NB); ViLine++ ) {
    
    for ( ViCol=0; ViCol <= FSBB0__REG_DISCRI_BIT_SZ; ViCol++) {
      
      PtDest->AALineCol[ViLine ][ViCol] = PtSrc->AALineCol[ViLine+ VLineOffset][ViCol];
      
    } /* End for ViColSrc */
    
    
  } /* End for ViLine */
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 29/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriMatConvPerCentToColVal ( FSBB0__TMatDiscriPerCent* PtSrc, FSBB0__TMatDiscriColor* PtDest, SInt8 RevertLineDirection ) {
  
  SInt32 ViLine;
  SInt32 ViCol;
  UInt8  VPerCent;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  
  /* Revert line direction */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
      
      for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
        
        if ( PtSrc->AALineCol[ViLine][ViCol] == 0  ) {
          PtDest->AALineCol[ViLine][FSBB0__REG_DISCRI_BIT_SZ - 1 - ViCol] = clWhite;
        }
        
        else {
          VPerCent = 2 * ((UInt8) PtSrc->AALineCol[ViLine][ViCol]);
          PtDest->AALineCol[ViLine][FSBB0__REG_DISCRI_BIT_SZ - 1 - ViCol] = (VPerCent << 8) + (VPerCent << 16);
        }
        
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  /* Don't revert line direction */
  
  else {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
      
      for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
        
        if ( PtSrc->AALineCol[ViLine][ViCol] == 0  ) {
          PtDest->AALineCol[ViLine][ViCol] = clWhite;
        }
        
        else {
          VPerCent = 2 * ((UInt8) PtSrc->AALineCol[ViLine][ViCol]);
          PtDest->AALineCol[ViLine][ViCol] = (VPerCent << 8) + (VPerCent << 16);
        }
        
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
  
  
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 24/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriMatConvCumulToColVal ( FSBB0__TMatDiscriCumul* PtSrc, FSBB0__TMatDiscriColor* PtDest, SInt8 GrayOrBlueLevels, SInt8 PlotHitOrHitCnt, SInt8 RevertLineDirection ) {
  
  SInt32       ViLine;
  SInt32       ViCol;
  UInt16       VPixHitCnt;
  UInt16       VFFMinusPixHitCnt;
  FSBB0__TColor VHitStateColor;
  FSBB0__TColor VHitColor;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  
  if ( GrayOrBlueLevels == 0) {
    VHitStateColor = clBlack;
  }
  
  else {
    VHitStateColor = clBlue;
  }
  
  
  /* Revert line direction */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
      
      for ( ViCol=0; ViCol < (FSBB0__REG_DISCRI_BIT_SZ); ViCol++ ) {
        
        while (1) {
          
          VPixHitCnt = PtSrc->AALineCol[ViLine][ViCol];
          
          // No hit
          
          if ( VPixHitCnt == 0  ) {
            VHitColor = clWhite;
            break;
          }
          
          // Hit & Plot state NOT count => Set VHitStateColor if VPixHitCnt > 0
          
          if ( PlotHitOrHitCnt == 0) {
            VHitColor = VHitStateColor;
            break;
          }
          
          // Hit & ovf
          // This test MUST be done BEFORE gray / blue level plot
          
          if ( VPixHitCnt > 255 ) {
            VHitColor = clRed;
            break;
          }
          
          // Plot count in gray levels
          
          if ( GrayOrBlueLevels == 0 ) {
            VFFMinusPixHitCnt = 255 - VPixHitCnt;
            VHitColor = VFFMinusPixHitCnt + (VFFMinusPixHitCnt << 8) + (VFFMinusPixHitCnt << 16);
            break;
          }
          
          // Plot count in blue levels
          
          VHitColor = 0x00FF0000 + ((255-VPixHitCnt) << 8); // Blue = 255 + Green = 255 - VPixHitCnt 
          break;
          
        } // End while (1)
        
        PtDest->AALineCol[ViLine][(FSBB0__REG_DISCRI_BIT_SZ) - 1 - ViCol] = VHitColor;
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  /* Don't revert line direction */
  
  else {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
      
      for ( ViCol=0; ViCol < (FSBB0__REG_DISCRI_BIT_SZ); ViCol++ ) {
        
        while (1) {
          
          VPixHitCnt = PtSrc->AALineCol[ViLine][ViCol];
          
          // No hit
          
          if ( VPixHitCnt == 0  ) {
            VHitColor = clWhite;
            break;
          }
          
          // Hit & Plot state NOT count => Set VHitStateColor if VPixHitCnt > 0
          
          if ( PlotHitOrHitCnt == 0) {
            VHitColor = VHitStateColor;
            break;
          }
          
          // Hit & ovf
          // This test MUST be done BEFORE gray / blue level plot
          
          if ( VPixHitCnt > 255 ) {
            VHitColor = clRed;
            break;
          }
          
          // Plot count in gray levels
          
          if ( GrayOrBlueLevels == 0 ) {
            VFFMinusPixHitCnt = 255 - VPixHitCnt;
            VHitColor = VFFMinusPixHitCnt + (VFFMinusPixHitCnt << 8) + (VFFMinusPixHitCnt << 16);
            break;
          }
          
          // Plot count in blue levels
          
          VHitColor = 0x00FF0000 + ((255-VPixHitCnt) << 8); // Blue = 255 + Green = 255 - VPixHitCnt
          break;
          
        } // End while (1)
        
        PtDest->AALineCol[ViLine][ViCol] = VHitColor;
                  
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
  
  
}




/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 23/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriMatConvCumulToColValHalfScale ( FSBB0__TMatDiscriCumulHalfScale* PtSrc, FSBB0__TMatDiscriColorHalfScale* PtDest, SInt8 GrayOrBlueLevels, SInt8 PlotHitOrHitCnt, SInt8 RevertLineDirection, SInt8 PrintLvl ) {
  
  SInt32       ViLine;
  SInt32       ViCol;
  UInt16       VPixHitCnt;
  UInt16       VFFMinusPixHitCnt;
  FSBB0__TColor VHitStateColor;
  FSBB0__TColor VHitColor;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  

  if ( PrintLvl ) {
    err_error (( ERR_OUT, "==============================================" ));
    err_error (( ERR_OUT, "= FSBB0__FDiscriMatConvCumulToColValHalfScale =" ));
    err_error (( ERR_OUT, "==============================================" ));
  }


  if ( GrayOrBlueLevels == 0) {
    VHitStateColor = clBlack;
  }
  
  else {
    VHitStateColor = clBlue;
  }
  
  err_error (( ERR_OUT, "Blue=%d - HitCnt=%d", GrayOrBlueLevels, PlotHitOrHitCnt ));
  
  /* Revert line direction */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB / 2; ViLine++ ) {
      
      for ( ViCol=0; ViCol < (FSBB0__REG_DISCRI_BIT_SZ / 2); ViCol++ ) {
        
        while (1) {
          
          VPixHitCnt = PtSrc->AALineCol[ViLine][ViCol];
          
          // No hit
        
          if ( VPixHitCnt == 0  ) {
            VHitColor = clWhite;
            break;
          }
          
          // Hit & Plot state NOT count => Set VHitStateColor if VPixHitCnt > 0
          
          if ( PlotHitOrHitCnt == 0) {
            VHitColor = VHitStateColor;
            break;
          }

          // Hit & ovf
          // This test MUST be done BEFORE gray / blue level plot
          
          if ( VPixHitCnt > 255 ) {
            VHitColor = clRed;
            break;
          }
          
          // Plot count in gray levels
            
          if ( GrayOrBlueLevels == 0 ) {
            VFFMinusPixHitCnt = 255 - VPixHitCnt;
            VHitColor = VFFMinusPixHitCnt + (VFFMinusPixHitCnt << 8) + (VFFMinusPixHitCnt << 16);
            break;
          }
          
          // Plot count in blue levels
          
          VHitColor = 0x00FF0000 + ((255-VPixHitCnt) << 8); // Blue = 255 + Green = 255 - VPixHitCnt
          break;
            
        } // End while (1)
          
        PtDest->AALineCol[ViLine][(FSBB0__REG_DISCRI_BIT_SZ / 2) - 1 - ViCol] = VHitColor;

      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  
  /* Don't revert line direction */
  
  else {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB / 2; ViLine++ ) {
      
      for ( ViCol=0; ViCol < (FSBB0__REG_DISCRI_BIT_SZ / 2); ViCol++ ) {
        
        while (1) {
          
          VPixHitCnt = PtSrc->AALineCol[ViLine][ViCol];
          
          // No hit
          
          if ( VPixHitCnt == 0  ) {
            VHitColor = clWhite;
            break;
          }
          
          // Hit & Plot state NOT count => Set VHitStateColor if VPixHitCnt > 0
          
          if ( PlotHitOrHitCnt == 0) {
            VHitColor = VHitStateColor;
            break;
          }
          
          // Hit & ovf
          // This test MUST be done BEFORE gray / blue level plot
          
          if ( VPixHitCnt > 255 ) {
            VHitColor = clRed;
            break;
          }
          
          // Plot count in gray levels
          
          if ( GrayOrBlueLevels == 0 ) {
            VFFMinusPixHitCnt = 255 - VPixHitCnt;
            VHitColor = VFFMinusPixHitCnt + (VFFMinusPixHitCnt << 8) + (VFFMinusPixHitCnt << 16);
            break;
          }
          
          // Plot count in blue levels
                              
          VHitColor = 0x00FFFF00 + ( (255-VPixHitCnt) << 8 ); // Blue = 255 / Green = 255 / Red = 255 - VPixHitCnt 
          break;
          
        } // End while (1)

        PtDest->AALineCol[ViLine][ViCol] = VHitColor;
 
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
  
    err_error (( ERR_OUT, "==============================================" ));
    
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 25/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriMatConvCumulCoinOrToColVal ( FSBB0__TMatDiscriCumul* PtSrc, FSBB0__TMatDiscriColor* PtDest, FSBB0__TColor* AColorOneHit, SInt8  GrayOrBlueLevels, SInt8 PlotHitOrHitCnt, SInt8 RevertLineDirection ) {
  
  SInt32       ViLine;
  SInt32       ViCol;
  UInt16       VPixHitCnt;
  UInt16       VFFMinusPixHitCnt;
  FSBB0__TColor VPixColor;
  FSBB0__TColor VHitStateColor;
  FSBB0__TColor VHitColor;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  if ( GrayOrBlueLevels == 0 ) {
    VHitStateColor = clBlack;
  }
  
  else {
    VHitStateColor = clBlue;    
  }
  
  
  /* Revert line direction */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
      
      for ( ViCol=0; ViCol < (FSBB0__REG_DISCRI_BIT_SZ); ViCol++ ) {
          
        while (1) {

          VPixHitCnt = PtSrc->AALineCol[ViLine][ViCol];
        
          // No hit
          
          if ( VPixHitCnt == 0  ) {
            VPixColor = clWhite;
            break;
          }
        
          // Count only one hit => Set color of plane
          
          if ( VPixHitCnt <= MAPS__TCDigTelMon_MAX_PLANE_NB) {
            VPixColor = AColorOneHit[VPixHitCnt - 1];           
            break;
          }

          // More than one hit & plot ONLY state, not count
          
          if ( PlotHitOrHitCnt == 0 ) {
            VPixColor = VHitStateColor;
            break;
          }
          
          // More than one hit & ovf
          // This test MUST be done BEFORE gay / blue levels plot
            
          if ( VPixHitCnt > 255 ) {
            VPixColor = clRed;
            break;
          }
          
          // More than one hit & plot count in gray levels
          
          if ( GrayOrBlueLevels == 0 ) {
            VFFMinusPixHitCnt = 255 - VPixHitCnt;
            VPixColor         = VFFMinusPixHitCnt + (VFFMinusPixHitCnt << 8) + (VFFMinusPixHitCnt << 16);
            break;
          }

          // More than one hit & plot count in blue levels
          
          VPixColor = 0x00FF0000 + ((255-VPixHitCnt) << 8); // Blue = 255 + Green = 255 - VPixHitCnt
          break;
            
        } // En while (1)          
        
        PtDest->AALineCol[ViLine][FSBB0__REG_DISCRI_BIT_SZ  - 1 - ViCol] = VPixColor;
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  
  
  /* Don't revert line direction */
  
  else {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
      
      for ( ViCol=0; ViCol < (FSBB0__REG_DISCRI_BIT_SZ); ViCol++ ) {
                
        while (1) {

          VPixHitCnt = PtSrc->AALineCol[ViLine][ViCol];
        
          // No hit
          
          if ( VPixHitCnt == 0  ) {
            VPixColor = clWhite;
            break;
          }
          
          // Count only one hit => Set color of plane
          
          if ( VPixHitCnt <= MAPS__TCDigTelMon_MAX_PLANE_NB) {
            VPixColor = AColorOneHit[VPixHitCnt - 1];
            break;
          }
          
          // More than one hit & plot ONLY state, not count
          
          if ( PlotHitOrHitCnt == 0 ) {
            VPixColor = VHitStateColor;
            break;
          }
          
          // More than one hit & ovf
          // This test MUST be done BEFORE gay / blue levels plot
          
          if ( VPixHitCnt > 255 ) {
            VPixColor = clRed;
            break;
          }
          
          // More than one hit & plot count in gray levels
          
          if ( GrayOrBlueLevels == 0 ) {
            VFFMinusPixHitCnt = 255 - VPixHitCnt;
            VPixColor         = VFFMinusPixHitCnt + (VFFMinusPixHitCnt << 8) + (VFFMinusPixHitCnt << 16);
            break;
          }
          
          // More than one hit & plot count in blue levels
          
          VPixColor = 0x00FF0000 + ((255-VPixHitCnt) << 8); // Blue = 255 + Green = 255 - VPixHitCnt
          break;
          
        } // En while (1)
        
        PtDest->AALineCol[ViLine][ViCol] = VPixColor;
                
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
  
  
}




/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 25/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriMatConvCumulCoinOrToColValHalfScale ( FSBB0__TMatDiscriCumulHalfScale* PtSrc, FSBB0__TMatDiscriColorHalfScale* PtDest, FSBB0__TColor* AColorOneHit, SInt8  GrayOrBlueLevels, SInt8 PlotHitOrHitCnt, SInt8 RevertLineDirection, SInt8 PrintLvl ) {
  
  SInt32       ViLine;
  SInt32       ViCol;
  UInt16       VPixHitCnt;
  UInt16       VFFMinusPixHitCnt;
  FSBB0__TColor VPixColor;
  FSBB0__TColor VHitStateColor;
  FSBB0__TColor VHitColor;
  

  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  if ( PrintLvl ) {
    err_error (( ERR_OUT, "====================================================" ));
    err_error (( ERR_OUT, "= FSBB0__FDiscriMatConvCumulCoinOrToColValHalfScale =" ));
    err_error (( ERR_OUT, "====================================================" ));
  }
  
  
  
  /* Revert line direction */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB / 2; ViLine++ ) {
      
      for ( ViCol=0; ViCol < (FSBB0__REG_DISCRI_BIT_SZ / 2); ViCol++ ) {
        
        while (1) {

          VPixHitCnt = PtSrc->AALineCol[ViLine][ViCol];
        
          // No hit
          
          if ( VPixHitCnt == 0  ) {
            VPixColor = clWhite;
            break;
          }
          
          // Count only one hit => Set color of plane
          
          if ( VPixHitCnt <= MAPS__TCDigTelMon_MAX_PLANE_NB) {
            VPixColor = AColorOneHit[VPixHitCnt - 1];
            break;
          }
          
          // More than one hit & plot ONLY state, not count
          
          if ( PlotHitOrHitCnt == 0 ) {
            VPixColor = VHitStateColor;
            break;
          }
          
          // More than one hit & ovf
          // This test MUST be done BEFORE gay / blue levels plot
          
          if ( VPixHitCnt > 255 ) {
            VPixColor = clRed;
            break;
          }
          
          // More than one hit & plot count in gray levels
          
          if ( GrayOrBlueLevels == 0 ) {
            VFFMinusPixHitCnt = 255 - VPixHitCnt;
            VPixColor         = VFFMinusPixHitCnt + (VFFMinusPixHitCnt << 8) + (VFFMinusPixHitCnt << 16);
            break;
          }
          
          // More than one hit & plot count in blue levels
          
          VPixColor = 0x00FF0000 + ((255-VPixHitCnt) << 8); // Blue = 255 + Green = 255 - VPixHitCnt
          break;
          
        } // En while (1)
        
        
        PtDest->AALineCol[ViLine][(FSBB0__REG_DISCRI_BIT_SZ / 2) - 1 - ViCol] = VPixColor;
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  
  /* Don't revert line direction */
  
  else {
    
    for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB / 2; ViLine++ ) {
      
      for ( ViCol=0; ViCol < (FSBB0__REG_DISCRI_BIT_SZ / 2); ViCol++ ) {

        
        while (1) {

          VPixHitCnt = PtSrc->AALineCol[ViLine][ViCol];
        
          // No hit
          
          if ( VPixHitCnt == 0  ) {
            VPixColor = clWhite;
            break;
          }
          
          // Count only one hit => Set color of plane
          
          if ( VPixHitCnt <= MAPS__TCDigTelMon_MAX_PLANE_NB) {
            VPixColor = AColorOneHit[VPixHitCnt - 1];
            break;
          }
          
          // More than one hit & plot ONLY state, not count
          
          if ( PlotHitOrHitCnt == 0 ) {
            VPixColor = VHitStateColor;
            break;
          }
          
          // More than one hit & ovf
          // This test MUST be done BEFORE gay / blue levels plot
          
          if ( VPixHitCnt > 255 ) {
            VPixColor = clRed;
            break;
          }
          
          // More than one hit & plot count in gray levels
          
          if ( GrayOrBlueLevels == 0 ) {
            VFFMinusPixHitCnt = 255 - VPixHitCnt;
            VPixColor         = VFFMinusPixHitCnt + (VFFMinusPixHitCnt << 8) + (VFFMinusPixHitCnt << 16);
            break;
          }
          
          // More than one hit & plot count in blue levels
          
          VPixColor = 0x00FF0000 + ((255-VPixHitCnt) << 8); // Blue = 255 + Green = 255 - VPixHitCnt
          break;
          
        } // En while (1)
        
        
        PtDest->AALineCol[ViLine][ViCol] = VPixColor;
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
  
  err_error (( ERR_OUT, "==============================================" ));
  
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 24/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FPrintMatDiscriCumul ( FSBB0__TMatDiscriCumul* PtSrc ) {
  
  SInt32  ViLine;
  SInt32  ViCol;
  UInt16  VPixHitCnt;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  
  err_error (( ERR_OUT, "===============================" ));
  err_error (( ERR_OUT, "= Print FSBB0__TMatDiscriCumul =" ));
  err_error (( ERR_OUT, "===============================" ));
  

  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB; ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ; ViCol++ ) {
      
      if ( PtSrc->AALineCol[ViLine][ViCol] != 0 ) {
        err_error (( ERR_OUT, "Hit cnt [L:%4d][C:%4d] = %4d", ViLine, ViCol, PtSrc->AALineCol[ViLine][ViCol] ));
      }
      
    }
    
  }

  err_error (( ERR_OUT, "===============================" ));
  

}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 24/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FPrintMatDiscriCumulHalfScale ( FSBB0__TMatDiscriCumulHalfScale* PtSrc ) {
  
  SInt32  ViLine;
  SInt32  ViCol;
  UInt16  VPixHitCnt;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  
  err_error (( ERR_OUT, "========================================" ));
  err_error (( ERR_OUT, "= Print FSBB0__TMatDiscriCumulHalfScale =" ));
  err_error (( ERR_OUT, "========================================" ));
  
  
  for ( ViLine=0; ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB / 2; ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ / 2; ViCol++ ) {
      
      if ( PtSrc->AALineCol[ViLine][ViCol] != 0 ) {
        err_error (( ERR_OUT, "Hit cnt [L:%4d][C:%4d] = %4d", ViLine, ViCol, PtSrc->AALineCol[ViLine][ViCol] ));
      }
      
    }
    
  }
  
  err_error (( ERR_OUT, "========================================" ));
  
  
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 29/01/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FDiscriSubMatConvCumulToColVal ( FSBB0__TSubMatDiscriPerCent* PtSrc, FSBB0__TSubMatDiscriColor* PtDest, SInt8 RevertLineDirection ) {
  
  SInt32 ViLine;
  SInt32 ViCol;
  UInt8  VPerCent;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc  = NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest = NULL") );
  
  
  
  /* Revert line direction */
  
  if ( RevertLineDirection == 1 ) {
    
    for ( ViLine=0; ViLine < (FSBB0__MAT_DISCRI_USEFUL_LINES_NB / FSBB0__SUB_MAT_NB); ViLine++ ) {
      
      for ( ViCol=0; ViCol < (FSBB0__REG_DISCRI_BIT_SZ ); ViCol++ ) {
        
        if ( PtSrc->AALineCol[ViLine][ViCol] == 0  ) {
          PtDest->AALineCol[ViLine][(FSBB0__REG_DISCRI_BIT_SZ ) - 1 - ViCol] = clWhite;
        }
        
        else {
          VPerCent = 2 * ((UInt8) PtSrc->AALineCol[ViLine][ViCol]);
          PtDest->AALineCol[ViLine][(FSBB0__REG_DISCRI_BIT_SZ ) - 1 - ViCol] = (VPerCent << 8) + (VPerCent << 16);
        }
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End if RevertLineDirection */
  
  /* Don't revert line direction */
  
  else {
    
    for ( ViLine=0; ViLine < (FSBB0__MAT_DISCRI_USEFUL_LINES_NB / FSBB0__SUB_MAT_NB); ViLine++ ) {
      
      for ( ViCol=0; ViCol < (FSBB0__REG_DISCRI_BIT_SZ ); ViCol++ ) {
        
        if ( PtSrc->AALineCol[ViLine][ViCol] == 0  ) {
          PtDest->AALineCol[ViLine][ViCol] = clWhite;
        }
        
        else {
          VPerCent = 2 * ((UInt8) PtSrc->AALineCol[ViLine][ViCol]);
          PtDest->AALineCol[ViLine][ViCol] = (VPerCent << 8) + (VPerCent << 16);;
        }
        
        
      } /* End for ViCol */
      
    } /* End for ViLine */
    
  } /* End else */
  
  
  
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :      convert 32 word of 8 bits to a word of 32 bits
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    :
:
Level     :
Date      : 24/11/2008
Doc date  : //2004
Author    : Mathieu GOFFE
E-mail    : mathieu.goffe@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */

#ifdef FSBB0__MG_DEV

SInt32 FSBB0__FnameDiscriConvBitToW32 ( UInt8* PtDest, UInt32 word ) {


 SInt32  ViDiscri;
 UInt32  VMask;
 SInt8   ViBitInW32;

 err_retnull ( word, (ERR_OUT,"word == NULL") );
 err_retnull ( PtDest   , (ERR_OUT,"PtDest    == NULL") );


 ViDiscri = 0;
 VMask = 1;
     for ( ViBitInW32=0; ViBitInW32 < 32; ViBitInW32++ ) {
     PtDest[ViDiscri] = ( (word & VMask) != 0 );
     VMask = VMask << 1;
     ++ViDiscri;
   }
 msg (( MSG_OUT, "valeur du mot de 32 bit = %d", word ));
 return (0);
}

#else

SInt32 FSBB0__FnameDiscriConvBitToW32 ( UInt8* PtDest, UInt32 word ) {
  return (0);
}

#endif








/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    : PrintLvl = 5 => Print states 
Level     :
Date      : 17/03/2009
Doc date  : 17/03/2009
Rev       : 04/05/2009
          : - Add a check of data length, if > 1140, force 1140, done to avoid bad
          :   data length due to transmission errors.
          :
          : 05/05/2009
          : - Add handling of odd number of W16 ( FSBB0 add one bad W16 in this case )
          :   Not done at beginning because FSBB0 documentation was not clear enough
          :   ( bad translation of " impair " in even ! ) and it was not needed for 
          :   tests done with emulated patterns.
          :          :
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__FConvZsFFrameRawToZsFFrame ( FSBB0__TZsFFrameRaw* Src, FSBB0__TZsFFrame* Dest, SInt8 PrintLvl ) {
  
  SInt32 VRetW16Length;
  SInt32 ViData;
  UInt16 VDataW16LengthLow;
  UInt16 VDataW16LengthHigh;
  UInt16 VDataW16Length;
  UInt16 VLastW16;
  SInt16 ViSrcW16;
  
  FSBB0__TStatesLine VStatesLine;
  SInt16  ViStatesLine;
  SInt8   ViState;
  SInt8   VStatesNbPerLine;
  SInt16  VPrevLine;
  
  
  err_retnull ( Src , (ERR_OUT,"Src == NULL") );
  err_retnull ( Dest, (ERR_OUT,"Dest == NULL") );
  
  // Get useful data length
  //VDataW16LengthLow  = Src->DataLength & 0x0000FFFF;
  //VDataW16LengthHigh = (Src->DataLength & 0xFFFF0000) >> 16;
  VDataW16Length     = ((Src->DataLengthRemFrCnt.F.DataLength) * 4) + Src->DataLengthRemFrCnt.F.Rem;

  VRetW16Length = VDataW16Length;
  
  if ( (PrintLvl == 5) || (PrintLvl == 6) || (PrintLvl == 7) ) {
    msg (( MSG_OUT, "TOTAL frame length : %d W16", VDataW16Length ));
    msg (( MSG_OUT, "" ));
  }
  
  // Add a check of data length, if > FSBB0__ZS_FFRAME_RAW_MAX_W16, force 0 and continue processing ( no exit on error )
  
  if ( VDataW16Length > FSBB0__ZS_FFRAME_RAW_MAX_W16 /* 1140 */ ) {
    err_error (( ERR_OUT, "Bad data length get from FSBB0 = %d W16 => Force 0 W16", VDataW16Length ));
    VDataW16Length = 0;
    Src->CalcDataLength = 0;
    // VRetW16Length = -1;
  }
  
  // Copy information fields
  
  Dest->SStatus        = Src->SStatus;
  
  Dest->Header         = Src->Header;
  Dest->FrameCnt       = Src->DataLengthRemFrCnt.F.FrameCnt;
  Dest->DataLength     = Src->CalcDataLength;
  Dest->Trailer        = Src->Trailer;
  //Dest->Zero           = Src->Zero;
  //Dest->Zero2          = Src->Zero2;
//#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
  Dest->TrigSignalLine = Src->SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE];
  Dest->TrigSignalClk  = Src->SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_CLK];
  Dest->TrigLine       = Src->SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__LINE];
//#endif
  
  // Process frame
  
  ViSrcW16      = 0;
  ViStatesLine  = 0;
  VPrevLine     = -1;
  
  if ( PrintLvl == 4 ) {
    msg (( MSG_OUT, "Frame data length = %d [W16]", VDataW16Length ));
    msg (( MSG_OUT, "" ));
  }
  
    
  
  if ( VDataW16Length != 0 ) {
    
    // -------------------------------------------------------------------------------------------------
    // Odd W16 nb handling !
    //
    // It can seem strange that this can be done by processing one W16 less than total data length in all
    // cases, this is due to data processing method used in loop, read explanation below if needed.
    // -------------------------------------------------------------------------------------------------
    // If the total W16 number is odd, FSBB0 add one more bad W16 to get an even W16 number.
    // This bad W16 will be seen as a StatesLine field followed by NO state because it is the last W16.
    // Therefore if at the beginning of the while loop there is only one W16 to process, this W16 is the
    // bad one, because it is a StateLines field followed by no states. In others words, if the index of
    // the W16 at the beginning of loop is the index of last W16 this W16 is the bad one which must be
    // rejected, we must not enter the loop. In normal case, even W16 number, after processing of last
    // state of last line the index of W16 equal W16 number, therefore is > of index of last W16, and
    // we don't enter the loop.
    
    VLastW16 = VDataW16Length - 1;
    
    while ( ViSrcW16 < VLastW16 ) { // Odd W16 nb handling => Don't process last W16
            
      // Copy StatesLine field
      // 22/05/14 - MS GCMODIF
      VStatesLine.W32 = Src->ADataW32[ViSrcW16];
      Dest->AStatesRec[ViStatesLine].StatesLine = VStatesLine;
     // VStatesNbPerLine = VStatesLine.F.StateNb;
      
      if ( (PrintLvl == 5) || (PrintLvl == 7) ) {
        
        msg (( MSG_OUT, "Line %4d - %d HitNbG0 - %d HitNbG1 ", VStatesLine.F.SLineAddr, VStatesLine.F.HitNbG0, VStatesLine.F.HitNbG1 ));
        
        /* Print to show missing handling of odd W16 nb
        
        if (  VStatesLine.F.LineAddr <= VPrevLine ) {
          msg (( MSG_OUT, "Line %4d - %d states - %d Ovf ===============> ERROR odd W16 nb NOT HANDLED ! ", VStatesLine.F.LineAddr, VStatesLine.F.StateNb, VStatesLine.F.Ovf ));
        }
        
        else {
          msg (( MSG_OUT, "Line %4d - %d states - %d Ovf ", VStatesLine.F.LineAddr, VStatesLine.F.StateNb, VStatesLine.F.Ovf ));
          VPrevLine = VStatesLine.F.LineAddr;
        }
        
        */
        
      }
      
      ++ViSrcW16;
      
      // Copy states
      
      for ( ViState=0; ViState < VStatesNbPerLine; ViState++ ) {
            // 22/05/14 - MS GCMODIF

        Dest->AStatesRec[ViStatesLine].AStates[ViState].W32 = Src->ADataW32[ViSrcW16];
        if ( (PrintLvl == 5) || (PrintLvl == 7) ) msg (( MSG_OUT, "--> State %d : Col %4d - %2d pixels", ViState, Dest->AStatesRec[ViStatesLine].AStates[ViState].F.ColAddr, Dest->AStatesRec[ViStatesLine].AStates[ViState].F.Code + 1 ));
        ++ViSrcW16;
      }
      
      ++ViStatesLine;
      
      
      // Add on 25/03/2011 during test with random frame size + with all data = 0
      
      if ( ViStatesLine >= FSBB0__ZS_FFRAME_MAX_STATES_REC ) {
        err_warning (( ERR_OUT, "Max number of states reached = %d => Abort => Corrupted data !", FSBB0__ZS_FFRAME_MAX_STATES_REC ));
        break;
      }
      
    } // End while
    
  } // End if ( VDataW16Length != 0 )
    
  Dest->StatesRecNb = ViStatesLine;
  
  if ( (PrintLvl == 5) || (PrintLvl == 6) || (PrintLvl == 7) ) {
    msg (( MSG_OUT, "Conv : %d StatesLines", Dest->StatesRecNb ));
    msg (( MSG_OUT, "" ));
  }

  return (VRetW16Length);
}


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    : 
Level     :
Date      : 14/08/2009
Doc date  : 
:
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__FConvZsFFrameRawToZsFFrameHandleTrigger ( SInt8 MapsNb, SInt32 EvNo, SInt32 TotEvNb, FSBB0__TZsFFrameRaw* Src, FSBB0__TZsFFrame* Dest, SInt8 PrintLvl ) {

  FSBB0__TZsFFrameRaw* VPtSrcEv;
  SInt32 VTrigPosFromDaq;
  SInt32 VTrigLine;
  SInt8  VFirstEvent;
  static FSBB0__TZsFFrame VASrcZsFFrameEv[2];
  SInt32 VLine;
  SInt32 ViSrcStateRec;
  SInt32 ViDestStateRec;
  
  // Check parameters

  err_retnull ( Src , (ERR_OUT,"Src == NULL") );
  err_retnull ( Dest, (ERR_OUT,"Dest == NULL") );
  
  // Four events after this one are required => Abort if it's not the case
  
  if ( EvNo + 4 >= TotEvNb ) {
    err_retfail ( -1, (ERR_OUT,"Processing stop on event %d => Less than 4 events after it !" ,EvNo) );
  }
  

  // Trigger position ?
//#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
  VTrigPosFromDaq = Src->SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE];
//#endif


  if ( (VTrigPosFromDaq < 0) || (VTrigPosFromDaq > 575) ) {
    err_retfail ( -1, (ERR_OUT,"Bad trigger pos from DAQ = %d <> [0..575] !", VTrigPosFromDaq) );
  }
 

  // Set VPtEv on the first event to process
  // - Pos  < 572 => Pos correspond to current event + 1 ( next event )
  // - Pos >= 572 => Pos correspond to current event + 2

/* ORIGINAL => 1 plane

  if ( VTrigPosFromDaq < 572 ) {
    VPtSrcEv = Src + 1;
  }
  
  else {
    VPtSrcEv = Src + 2;
  }
  
*/

/* 6 planes

  if ( VTrigPosFromDaq < 572 ) {
    VPtSrcEv = Src + 7;
  }
  
  else {
    VPtSrcEv = Src + 8;
  }
  
*/

  // N planes

  if ( VTrigPosFromDaq < 572 ) {
    VPtSrcEv = Src + 1 + MapsNb;
  }
  
  else {
    VPtSrcEv = Src + 2 + MapsNb;
  }
  

  // Real trigger line = trigger position + 4 modulo 576
  
  VTrigLine = (VTrigPosFromDaq + 4) % 576;
  
  // Debug print
  
  if ( PrintLvl == 1 ) {
    // msg (( MSG_OUT, "=> Trig on Ev=%4d P=%4d L=%4d => Proc Ev=%4d - Ev=%4d", EvNo, VTrigPosFromDaq, VTrigLine, VPtSrcEv[0].SStatus.FrameNoInRun, VPtSrcEv[1].SStatus.FrameNoInRun ));
    err_error (( ERR_OUT, "=> Trig on Ev=%4d - P=%4d - L=%4d => Proc Ev=%4d - Ev=%4d", EvNo, VTrigPosFromDaq, VTrigLine, VPtSrcEv[0].SStatus.FrameNoInRun, VPtSrcEv[1].SStatus.FrameNoInRun ));
  }

  // Convert each event from ZsFFrameRaw to ZsFFrame

  FSBB0__FConvZsFFrameRawToZsFFrame ( VPtSrcEv    , VASrcZsFFrameEv    , 0 /* PrintLvl */ );
  FSBB0__FConvZsFFrameRawToZsFFrame ( VPtSrcEv + 1, VASrcZsFFrameEv + 1, 0 /* PrintLvl */ );
    
  // -------------------------  
  // Build destination event
  // -------------------------
  
  // Reset record 
  
  memset ( Dest, 0, sizeof (FSBB0__TZsFFrame) );
  
  // Copy information fields
  
  Dest->SStatus        = Src->SStatus;
  
  Dest->Header         = Src->Header;
  Dest->FrameCnt       = Src->DataLengthRemFrCnt.F.FrameCnt;
  Dest->DataLength     = Src->CalcDataLength;
  Dest->Trailer        = Src->Trailer;
  //Dest->Zero           = Src->Zero;
  //Dest->Zero2          = Src->Zero2;
//#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
  Dest->TrigSignalLine = Src->SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE];
  Dest->TrigSignalClk  = Src->SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_CLK];
  Dest->TrigLine       = Src->SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__LINE];
//#endif
  
  // Extract lines
  
  ViDestStateRec = 0;

  // First event => Copy lines >= trigger pos to dest
  
  for ( ViSrcStateRec=0; ViSrcStateRec < VASrcZsFFrameEv->StatesRecNb; ViSrcStateRec++ ) {
    
    VLine = VASrcZsFFrameEv->AStatesRec[ViSrcStateRec].StatesLine.F.SLineAddr;
    
    if ( VLine >= VTrigLine ) {
      Dest->AStatesRec[ViDestStateRec] = VASrcZsFFrameEv->AStatesRec[ViSrcStateRec];
      ++ViDestStateRec;
    }
    
  }
  
  if ( VTrigLine == 0 ) {
    Dest->StatesRecNb = ViDestStateRec;
    return (0);
  }

  // Second event => Copy lines < trigger pos to dest
  
  for ( ViSrcStateRec=0; ViSrcStateRec < VASrcZsFFrameEv[1].StatesRecNb; ViSrcStateRec++ ) {
    
    VLine = VASrcZsFFrameEv[1].AStatesRec[ViSrcStateRec].StatesLine.F.SLineAddr;
    
    if ( VLine < VTrigLine ) {
      Dest->AStatesRec[ViDestStateRec] = VASrcZsFFrameEv[1].AStatesRec[ViSrcStateRec];
      ++ViDestStateRec;
    }
    
  }
  
  // Update nb of StateRec
  
  Dest->StatesRecNb = ViDestStateRec;

  return (0);
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 17/03/2009
Rev       : 22/07/2009
          : - Return number of hits found
Doc date  : 17/03/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__FConvZsFFrameToMatDiscriBit ( FSBB0__TZsFFrame* PtSrc, FSBB0__TMatDiscriBit* PtDest, SInt32* PtOvfCnt, SInt8 PrintLvl ) {

  UInt16 ViLine;
  UInt16 VFirstCol;
  UInt16 VLastCol;
  SInt16 ViCol;
  SInt16 ViStatesRec;
  SInt8  ViState;
  UInt8  VStatesNb;
  SInt32 VHitCnt;
  SInt32 VOfvCnt;

  err_retnull ( PtSrc , (ERR_OUT,"PtSrc == NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  
  
  // --------------------------------------------
  // Reset destination matrix
  // --------------------------------------------
  
  memset ( PtDest, 0, sizeof (FSBB0__TMatDiscriBit) );
  
  // --------------------------------------------
  // Copy hits from ZsFFRame -> MatDiscriBit
  // --------------------------------------------

  // StatesRec loop

  VHitCnt = 0;
  VOfvCnt = 0;

  if ( PtSrc->StatesRecNb > FSBB0__ZS_FFRAME_MAX_STATES_REC ) {
    err_warning (( ERR_OUT, "StatesRecNb=%d > FSBB0__ZS_FFRAME_MAX_STATES_REC=%d => Force %d", PtSrc->StatesRecNb, FSBB0__ZS_FFRAME_MAX_STATES_REC, FSBB0__ZS_FFRAME_MAX_STATES_REC ));
    err_error   (( ERR_OUT, "StatesRecNb=%d > FSBB0__ZS_FFRAME_MAX_STATES_REC=%d => Force %d", PtSrc->StatesRecNb, FSBB0__ZS_FFRAME_MAX_STATES_REC, FSBB0__ZS_FFRAME_MAX_STATES_REC ));
    PtSrc->StatesRecNb = FSBB0__ZS_FFRAME_MAX_STATES_REC;
  }

  for ( ViStatesRec=0; ViStatesRec < PtSrc->StatesRecNb; ViStatesRec++ ) {
    
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
    VStatesNb = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.StateNb;
#endif
    ViLine    = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.SLineAddr;

    if (( PtSrc->AStatesRec[ViStatesRec].StatesLine.F.HitNbG0 > 9 )||( PtSrc->AStatesRec[ViStatesRec].StatesLine.F.HitNbG1 > 9 )) {
      ++VOfvCnt;
      // err_error (( ERR_OUT, "Ovf ! Count=%d", VOfvCnt ));
    }
    // States in one StateRec loop
    
    // WARNING => Will slow down execution
    
    if ( VStatesNb > FSBB0__ZS_FFRAME_MAX_STATES_NB_PER_STATES_REC ) {
      err_warning (( ERR_OUT, "StatesNb=%d > FSBB0__ZS_FFRAME_MAX_STATES_NB_PER_STATES_REC=%d => Force %d", VStatesNb, FSBB0__ZS_FFRAME_MAX_STATES_NB_PER_STATES_REC, FSBB0__ZS_FFRAME_MAX_STATES_NB_PER_STATES_REC ));
      VStatesNb = FSBB0__ZS_FFRAME_MAX_STATES_NB_PER_STATES_REC;
    }

    // WARNING => Will slow down execution
    
    if ( ViLine >= FSBB0__MAT_DISCRI_LINES_NB) {
      err_warning (( ERR_OUT, "ViLine=%d >= FSBB0__MAT_DISCRI_LINES_NB=%d => Force %d", ViLine, FSBB0__MAT_DISCRI_LINES_NB, FSBB0__MAT_DISCRI_LINES_NB - 1 ));
      ViLine = FSBB0__MAT_DISCRI_LINES_NB - 1;
    }
    
    for ( ViState=0; ViState < VStatesNb; ViState++ ) {
            
      VFirstCol = PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.ColAddr;
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
      VLastCol  = VFirstCol + PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.HitNb; // HitNb = 0 => 1 hit, 1 => 2 hits etc ...
#endif
      // WARNING => Will slow down execution
    
      if ( VFirstCol >= FSBB0__REG_DISCRI_BIT_SZ ) {
        err_warning (( ERR_OUT, "FirstCol=%d >= FSBB0__REG_DISCRI_BIT_SZ=%d => Force 0", VFirstCol, FSBB0__REG_DISCRI_BIT_SZ ));
        VFirstCol = 0;
      }

      // WARNING => Will slow down execution
    
      if ( VLastCol >= FSBB0__REG_DISCRI_BIT_SZ ) {
        err_warning (( ERR_OUT, "VLastCol=%d >= FSBB0__REG_DISCRI_BIT_SZ=%d => Force 0", VLastCol, FSBB0__REG_DISCRI_BIT_SZ ));
        VLastCol = 0;
      }

      // Hits in one State loop
      
      for ( ViCol=VFirstCol; ViCol <= VLastCol; ViCol++ ) {
                
        PtDest->AALineCol[ViLine][ViCol] = 1;
        ++VHitCnt;
        
      } // End hits in one State loop
      
    } // End States in one StateRec loop
    
  } // End StatesRec loop

  if ( PtOvfCnt != NULL ) {
    *PtOvfCnt = VOfvCnt;
  }


  // err_error (( ERR_OUT, "TRACE - VHitCnt=%d", VHitCnt )); // 13/02/2013
  

  return (VHitCnt);
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    : If UpdMatCumul = 0
: - Don't update cumul matrix
: - BUT count hits => function return Hit nb
Level     :
Date      : 17/03/2009
Rev       : 22/07/2009
: - Return number of hits found
Doc date  : 17/03/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 OLD___FSBB0__FConvZsFFrameToMatDiscriBitAndCumul ( FSBB0__TZsFFrame* PtSrc, FSBB0__TMatDiscriBit* PtDest, SInt8 UpdMatCumul, FSBB0__TMatDiscriCumul* PtDestCum, SInt8 PrintLvl ) {
  
  SInt16 ViLine;
  SInt16 VFirstCol;
  SInt16 VLastCol;
  SInt16 ViCol;
  SInt16 ViStatesRec;
  SInt8  ViState;
  SInt8  VStatesNb;
  SInt32 VHitCnt;
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc == NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  if ( UpdMatCumul ) {
    err_retnull ( PtDestCum, (ERR_OUT,"PtDestCum == NULL") );
  }
  
  
  // --------------------------------------------
  // Reset destination matrix
  // --------------------------------------------
  
  memset ( PtDest, 0, sizeof (FSBB0__TMatDiscriBit) );
  
  // --------------------------------------------
  // Copy hits from ZsFFRame -> MatDiscriBit
  // --------------------------------------------
  
  
  if ( PrintLvl ) {
    err_error (( ERR_OUT, "---------------------------------" ));
    err_error (( ERR_OUT, "  Print cumul" ));
    err_error (( ERR_OUT, "---------------------------------" ));
  }
  
  // StatesRec loop
  
  VHitCnt = 0;
  
  for ( ViStatesRec=0; ViStatesRec < PtSrc->StatesRecNb; ViStatesRec++ ) {

#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
    VStatesNb = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.StateNb;
#endif
    ViLine    = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.SLineAddr;

    // States in one StateRec loop
    
    for ( ViState=0; ViState < VStatesNb; ViState++ ) {
      
      VFirstCol = PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.ColAddr;
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
      VLastCol  = VFirstCol + PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.HitNb; // HitNb = 0 => 1 hit, 1 => 2 hits etc ...
#endif
      // Hits in one State loop
      
      for ( ViCol=VFirstCol; ViCol <= VLastCol; ViCol++ ) {
        
        PtDest->AALineCol[ViLine][ViCol] = 1;
        
        if ( UpdMatCumul ) {
          ++ PtDestCum->AALineCol[ViLine][ViCol];
          
          if ( PrintLvl ) {
            err_error (( ERR_OUT, "AALineCol[L:%4d][C:%4d] = %4d", ViLine, ViCol, PtDestCum->AALineCol[ViLine][ViCol] ));
          }
          
        }
        
        ++VHitCnt;
        
      } // End hits in one State loop
      
    } // End States in one StateRec loop
    
  } // End StatesRec loop
  
  
  if ( PrintLvl ) {
    err_error (( ERR_OUT, "-------------------------------" ));
  }
  
  
  
  return (VHitCnt);
}





/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    : - PtDestFrameBit -> Bit matrix of source frame
          : - PtDestCoinBit  -> Coin matrix of ONE frame of ALL selected planes
          : - PtDestFrameCum -> Cumul matrix of ALL frames of CURRENT plane
          : - PtDestCoinCum  -> Cumul matrix of ALL frames of ALL selected planes
          :
Globals   :
Remark    : This function is written in a strange way ... code duplication and
          : something which looks like a " goto ". This is to avoid to have
          : tests excuted in loop and therefore save execution time.
          :
          :
          :
Level     :
Date      : 17/03/2009
Rev       : 22/07/2009
          : - Return number of hits found
          : 25/07/2009
          : - Add Mode parameter => Handling of coincidence modes
          : 02/08/2009
          : - Moved in class FSBB0__TCTelMon
Doc date  : 17/03/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

#ifndef ROOT_ROOT

SInt32 FSBB0__TCTelMon::PrivFConvZsFFrameToMatDiscriBitAndCumul ( SInt32 DbgEvNo, SInt8 Mode, SInt8 PlaneNo, SInt8 PlaneSelForCoin, SInt8 EvNo, SInt8 EvSelForPlot, FSBB0__TZsFFrame* PtSrc, FSBB0__TMatDiscriBit* PtDestFrameBit, FSBB0__TMatDiscriBit* PtDestCoinBit,  FSBB0__TMatDiscriCumul* PtDestFrameCum, FSBB0__TMatDiscriCumul* PtDestCoinCum, SInt8 PrintLvl ) {
  
  SInt16 ViLine;
  SInt16 VFirstCol;
  SInt16 VLastCol;
  SInt16 ViCol;
  SInt16 ViStatesRec;
  SInt8  ViState;
  SInt8  VStatesNb;
  SInt32 VHitCnt;
  SInt8  VPlaneNoP1;
  SInt8  VFlagRevertColDir;
  SInt16 VDirRevCol;
  SInt32 VEvNoInRun;



  err_retnull ( PtSrc         , (ERR_OUT,"PtSrc           == NULL") );
  err_retnull ( PtDestFrameBit, (ERR_OUT,"PtDestFrameBit  == NULL") );
  err_retnull ( PtDestCoinBit , (ERR_OUT,"PtDestCoinBit   == NULL") );
  err_retnull ( PtDestFrameCum, (ERR_OUT,"PtDestFrameCum  == NULL") );
  err_retnull ( PtDestCoinCum , (ERR_OUT,"PtDestCoinCum   == NULL") );
  
  // Init intermediate variables
  
  // ---------------------------------------------------------------
  // Revert or not X Dir ( columns ) depending of plane parameters
  // ---------------------------------------------------------------
  
  VFlagRevertColDir = ProAPlanePar[PlaneNo].RevertXDir;  

  VPlaneNoP1 = PlaneNo + 1;
  
  VEvNoInRun = PtSrc->SStatus.FrameNoInRun;
  
  // --------------------------------------------
  // Reset frame bit destination matrix
  // --------------------------------------------
  
  memset ( PtDestFrameBit, 0, sizeof (FSBB0__TMatDiscriBit) );
   
      
  VHitCnt = 0;
  
  while (1) {
    
    //---------------------------------------------------------------
    // Cumul all frames
    //---------------------------------------------------------------
    
    if ( Mode == MAPS__TCDigTelMon_MODE_PLOT_PLANE_CUMUL ) {
    
      
      for ( ViStatesRec=0; ViStatesRec < PtSrc->StatesRecNb; ViStatesRec++ ) {
        
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
        VStatesNb = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.StateNb;
#endif
        ViLine    = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.SLineAddr;

        // States in one StateRec loop
        
        for ( ViState=0; ViState < VStatesNb; ViState++ ) {
          
          VFirstCol = PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.ColAddr;
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
          VLastCol  = VFirstCol + PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.HitNb; // HitNb = 0 => 1 hit, 1 => 2 hits etc ...
#endif
          // Hits in one State loop
          
          for ( ViCol=VFirstCol; ViCol <= VLastCol; ViCol++ ) {
            
            if ( VFlagRevertColDir == 1 ) {
              VDirRevCol = FSBB0__MAT_DISCRI_COL_NB - 1 - ViCol;
            }
            
            else {
              VDirRevCol = ViCol;
            }            

            PtDestFrameBit->AALineCol[ViLine][VDirRevCol] = 1;
            ++PtDestFrameCum->AALineCol[ViLine][VDirRevCol];
            
              //  err_error (( ERR_OUT, "AALineCol[L:%4d][C:%4d] = %4d", ViLine, VDirRevCol, PtDestFrameCum->AALineCol[ViLine][VDirRevCol] ));
            
            ++VHitCnt;
          } // End hits in one State loop
          
        } // End States in one StateRec loop
        
      } // End StatesRec loop
      
      break;
    
    } // End MAPS__TCDigTelMon_MODE_PLOT_PLANE_CUMUL
  
    //---------------------------------------------------------------
    // Plot coincidence of selected planeS of ONE frame ( 6 colors )
    //---------------------------------------------------------------
    
    if ( Mode == MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_PER_FRAME_6_COLORS ) {
      
      if ( (PlaneSelForCoin == 1) && (EvNo == EvSelForPlot) ) {
      
        for ( ViStatesRec=0; ViStatesRec < PtSrc->StatesRecNb; ViStatesRec++ ) {

#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
          VStatesNb = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.StateNb;
#endif
          ViLine    = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.SLineAddr;
          
          // States in one StateRec loop
          
          for ( ViState=0; ViState < VStatesNb; ViState++ ) {
            
            VFirstCol = PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.ColAddr;
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
            VLastCol  = VFirstCol + PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.HitNb; // HitNb = 0 => 1 hit, 1 => 2 hits etc ...
#endif
            // Hits in one State loop
            
            for ( ViCol=VFirstCol; ViCol <= VLastCol; ViCol++ ) {

              if ( VFlagRevertColDir == 1 ) {
                VDirRevCol = FSBB0__MAT_DISCRI_COL_NB - 1 - ViCol;
              }
              
              else {
                VDirRevCol = ViCol;
              }
              
              PtDestFrameBit->AALineCol[ViLine][VDirRevCol] = 1;
              ++VHitCnt;
  
              while (1) {
                
                // If no hit from other plane => Set Plane Id + 1 (1..6)
                
                if ( PtDestCoinBit->AALineCol[ViLine][VDirRevCol] == 0 ) {
                  PtDestCoinBit->AALineCol[ViLine][VDirRevCol] = VPlaneNoP1;
                  break;
                }
              
                // If already ONE hit from other plane => Set Base + hit count = 10 + 2 = 12
                
                if ( PtDestCoinBit->AALineCol[ViLine][VDirRevCol] <= MAPS__TCDigTelMon_MAX_PLANE_NB ) {
                  PtDestCoinBit->AALineCol[ViLine][VDirRevCol] = 12;
                  break;
                }
                
                // If already > ONE hit from other plane => Increment ( Rq : Hit count = value - 10 )
                
                ++PtDestCoinBit->AALineCol[ViLine][VDirRevCol];
                break;
                
              } // End while (1)
                        
              
            } // End hits in one State loop
            
          } // End States in one StateRec loop
          
        } // End StatesRec loop
        
        break;
      } // End if (PlaneSelForCoin)

      else {
        Mode = MAPS__TCDigTelMon_MODE_PLOT_PLANE_FRAME; // GOTO minimal processing (don't break) => For GUI result fields
      }
    
    } // MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_PER_FRAME_6_COLORS
  
    //---------------------------------------------------------------
    // Plot coincidence cumul of selected planeS of all frames ( 1 color )
    //---------------------------------------------------------------
    
    if ( Mode == MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_CUMUL_1_COLOR ) {

      if ( PlaneSelForCoin ) {
        
        for ( ViStatesRec=0; ViStatesRec < PtSrc->StatesRecNb; ViStatesRec++ ) {
          
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
          VStatesNb = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.StateNb;
#endif
          ViLine    = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.SLineAddr;
          
          // States in one StateRec loop
          
          for ( ViState=0; ViState < VStatesNb; ViState++ ) {
            
            VFirstCol = PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.ColAddr;
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
            VLastCol  = VFirstCol + PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.HitNb; // HitNb = 0 => 1 hit, 1 => 2 hits etc ...
#endif
            // Hits in one State loop
            
            for ( ViCol=VFirstCol; ViCol <= VLastCol; ViCol++ ) {

              if ( VFlagRevertColDir == 1 ) {
                VDirRevCol = FSBB0__MAT_DISCRI_COL_NB - 1 - ViCol;
              }
              
              else {
                VDirRevCol = ViCol;
              }
              
              PtDestFrameBit->AALineCol[ViLine][VDirRevCol] = 1;
              ++PtDestFrameCum->AALineCol[ViLine][VDirRevCol];   // Not useful => But keep processing of per plane cumul
              //  err_error (( ERR_OUT, "AALineCol[L:%4d][C:%4d] = %4d", ViLine, VDirRevCol, PtDestFrameCum->AALineCol[ViLine][VDirRevCol] ));
              ++VHitCnt;
              ++PtDestCoinCum->AALineCol[ViLine][VDirRevCol];
              
            } // End hits in one State loop
            
          } // End States in one StateRec loop
          
        } // End StatesRec loop
        
        break;
      } // End if (PlaneSelForCoin)
      
      else {
        Mode = MAPS__TCDigTelMon_MODE_PLOT_PLANE_FRAME; // GOTO  minimal processing (don't break) => For GUI result fields
      }
      
    } // MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_CUMUL_1_COLOR

    //---------------------------------------------------------------
    // Plot coincidence cumul of selected planes of all frames ( 6 colors )
    //---------------------------------------------------------------
    
    if ( Mode == MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_CUMUL_6_COLORS ) {

      if ( PlaneSelForCoin ) {
        
        for ( ViStatesRec=0; ViStatesRec < PtSrc->StatesRecNb; ViStatesRec++ ) {
          
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
          VStatesNb = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.StateNb;
#endif
          ViLine    = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.SLineAddr;
          
          // States in one StateRec loop
          
          for ( ViState=0; ViState < VStatesNb; ViState++ ) {
            
            VFirstCol = PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.ColAddr;
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
            VLastCol  = VFirstCol + PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.HitNb; // HitNb = 0 => 1 hit, 1 => 2 hits etc ...
#endif
            // Hits in one State loop
            
            for ( ViCol=VFirstCol; ViCol <= VLastCol; ViCol++ ) {

              if ( VFlagRevertColDir == 1 ) {
                VDirRevCol = FSBB0__MAT_DISCRI_COL_NB - 1 - ViCol;
              }
               
              else {
                VDirRevCol = ViCol;
              }
              
              PtDestFrameBit->AALineCol[ViLine][VDirRevCol] = 1;
              ++VHitCnt;
  
              // Res run update
                            
              // err_error (( ERR_OUT, "ProcOnlyFrWithHitOnAllPlanes = %d", ProPar.ProcOnlyFrWithHitOnAllPlanes ));
              
              if ( (ProPar.ProcOnlyFrWithHitOnAllPlanes == 1) && (PrivPtResRun != NULL) ) {
                                
                if ( PrivPtResRun->EvNb < MAPS__TCDigTelMon_MAX_RES_RUN_EV_NB) {
                  
                  SInt32 VBHitIndex = PrivPtResRun->ATracks[PrivPtResRun->EvNb].AHitsNbPerPlane[PlaneNo];
                
                  err_error (( ERR_OUT, "TRACE : Coin - Ev %4d - Fr %4d - Plane %d - StatesNb %d", DbgEvNo, PtSrc->FrameCnt, PlaneNo, VStatesNb ));
                  
                  if ( VBHitIndex < MAPS__TCDigTelMon_MAX_RES_RUN_HIT_NB_PER_PLANE ) {
                    PrivPtResRun->ATracks[PrivPtResRun->EvNb].AAHits[PlaneNo][VBHitIndex].x = VDirRevCol;
                    PrivPtResRun->ATracks[PrivPtResRun->EvNb].AAHits[PlaneNo][VBHitIndex].y = ViLine;
                    ++VBHitIndex;
                    PrivPtResRun->ATracks[PrivPtResRun->EvNb].AHitsNbPerPlane[PlaneNo] = VBHitIndex;
                    PrivPtResRun->ATracks[PrivPtResRun->EvNb].EvNoInRun = VEvNoInRun;
                  }
                  
                  
                }
                
                else {
                  PrivPtResRun->Full = 1;
                }
                
              }
  
  
              // Res run update END
  
              while (1) {
                
                // If no hit from other plane => Set Plane Id + 1 (1..6)
                
                if ( (PtDestCoinCum->AALineCol[ViLine][VDirRevCol] == 0) || (PtDestCoinCum->AALineCol[ViLine][VDirRevCol] == VPlaneNoP1) ) {
                  PtDestCoinCum->AALineCol[ViLine][VDirRevCol] = VPlaneNoP1;
                  break;
                }
                
                // If already ONE hit from other plane / other frame => Set Base + hit count = 10 + 2 = 12
                
                if ( PtDestCoinCum->AALineCol[ViLine][VDirRevCol] <= MAPS__TCDigTelMon_MAX_PLANE_NB ) {
                  PtDestCoinCum->AALineCol[ViLine][VDirRevCol] = 12;
                  break;
                }
                
                // If already > ONE hit from other plane / other frame => Increment ( Rq : Hit count = value - 10 )
                
                ++PtDestCoinCum->AALineCol[ViLine][VDirRevCol];
                break;
                
              } // End while (1)
              
              
            } // End hits in one State loop
            
          } // End States in one StateRec loop
          
        } // End StatesRec loop
        
        
        // If this is last plane selected for coincidence => Update Res run event counter
        // Rq : If no plane is selected for coin => ProInf.LastPlaneSelForCoin == -1 therefore above condition is never true
        
        if ( (ProPar.ProcOnlyFrWithHitOnAllPlanes == 1) && (PrivPtResRun != NULL) && (PlaneNo == ProInf.LastPlaneSelForCoin) ) {
          ++PrivPtResRun->EvNb;
          err_error (( ERR_OUT, "TRACE : Inc Res Run EvNb done => EvNb=%4d - EvNo=%4d - PlaneNo=%d", PrivPtResRun->EvNb, DbgEvNo, PlaneNo ));
        }
        
        
        break;
      } // End if (PlaneSelForCoin)
      
      else {
        Mode = MAPS__TCDigTelMon_MODE_PLOT_PLANE_FRAME; // GOTO  minimal processing (don't break) => For GUI result fields
      }
      
    } // MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_CUMUL_6_COLORS


    //---------------------------------------------------------------
    // Plot only frame
    //---------------------------------------------------------------
    // MUST BE LAST ONE OF While (1)
    //---------------------------------------------------------------
    
    if ( Mode == MAPS__TCDigTelMon_MODE_PLOT_PLANE_FRAME ) {
      
      for ( ViStatesRec=0; ViStatesRec < PtSrc->StatesRecNb; ViStatesRec++ ) {
        
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
        VStatesNb = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.StateNb;
#endif
        ViLine    = PtSrc->AStatesRec[ViStatesRec].StatesLine.F.SLineAddr;
        
        // States in one StateRec loop
        
        for ( ViState=0; ViState < VStatesNb; ViState++ ) {
          
          VFirstCol = PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.ColAddr;
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
          VLastCol  = VFirstCol + PtSrc->AStatesRec[ViStatesRec].AStates[ViState].F.HitNb; // HitNb = 0 => 1 hit, 1 => 2 hits etc ...
#endif          
          // Hits in one State loop
          
          for ( ViCol=VFirstCol; ViCol <= VLastCol; ViCol++ ) {
            
            
            
            if (EvNo == EvSelForPlot) {
              
              if ( VFlagRevertColDir == 1 ) {
                VDirRevCol = FSBB0__MAT_DISCRI_COL_NB - 1 - ViCol;
              }
              
              else {
                VDirRevCol = ViCol;                
              }
              
              PtDestFrameBit->AALineCol[ViLine][VDirRevCol] = 1;
            }
            
            ++VHitCnt;
          } // End hits in one State loop
          
        } // End States in one StateRec loop
        
      } // End StatesRec loop
      
      break;
    } // End MAPS__TCDigTelMon_MODE_PLOT_PLANE_FRAME


  } // End while (1)


  if ( PrintLvl ) {
    err_error (( ERR_OUT, "-------------------------------" ));
  }
  

  
  return (VHitCnt);
}


#endif

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 23/07/2009
Doc date  : 
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__FConvMatDiscriBitToMatDiscriBitHalfScale ( FSBB0__TMatDiscriBit* PtSrc, FSBB0__TMatDiscriBitHalfScale* PtDest ) {

  SInt32 VxDest;
  SInt32 VyDest;
  SInt32 VxDestMax;
  SInt32 VyDestMax;
  SInt32 V2xDest;
  SInt32 V2xDestP1;
  SInt32 V2yDest;
  SInt32 V2yDestP1;
  

  err_retnull ( PtSrc , (ERR_OUT,"PtSrc == NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  VxDestMax = FSBB0__REG_DISCRI_BIT_SZ   / 2;
  VyDestMax = FSBB0__MAT_DISCRI_USEFUL_LINES_NB / 2;
  
  for ( VyDest=0; VyDest < VyDestMax; VyDest++ ) {
    
    for ( VxDest=0; VxDest < VxDestMax; VxDest++ ) {
      
      V2xDest   = 2 * VxDest;
      V2xDestP1 = V2xDest + 1;
      V2yDest   = 2 * VyDest;
      V2yDestP1 = V2yDest + 1;
      
      PtDest->AALineCol[VyDest][VxDest] = PtSrc->AALineCol[V2yDest][V2xDest] || PtSrc->AALineCol[V2yDest][V2xDestP1] || PtSrc->AALineCol[V2yDestP1][V2xDest] || PtSrc->AALineCol[V2yDestP1][V2xDestP1];
    }
    
  }

  err_retok (( ERR_OUT, "" ));
}


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 26/07/2009
Doc date  :
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__FConvMatDiscriBitCoinToMatDiscriBitCoinHalfScale ( FSBB0__TMatDiscriBit* PtSrc, FSBB0__TMatDiscriBitHalfScale* PtDest ) {
  
  SInt32 VxDest;
  SInt32 VyDest;
  SInt32 VxDestMax;
  SInt32 VyDestMax;
  SInt32 V2xDest;
  SInt32 V2xDestP1;
  SInt32 V2yDest;
  SInt32 V2yDestP1;
  UInt8  VPixState0;
  UInt8  VPixState1;
  UInt8  VPixState2;
  UInt8  VPixState3;
  
  
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc == NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  VxDestMax = FSBB0__REG_DISCRI_BIT_SZ   / 2;
  VyDestMax = FSBB0__MAT_DISCRI_USEFUL_LINES_NB / 2;
    
  for ( VyDest=0; VyDest < VyDestMax; VyDest++ ) {
    
    for ( VxDest=0; VxDest < VxDestMax; VxDest++ ) {
      
      V2xDest   = 2 * VxDest;
      V2xDestP1 = V2xDest + 1;
      V2yDest   = 2 * VyDest;
      V2yDestP1 = V2yDest + 1;
      
      VPixState0 = (PtSrc->AALineCol[V2yDest  ][V2xDest  ] != 0);
      VPixState1 = (PtSrc->AALineCol[V2yDest  ][V2xDestP1] != 0);
      VPixState2 = (PtSrc->AALineCol[V2yDestP1][V2xDest  ] != 0);
      VPixState3 = (PtSrc->AALineCol[V2yDestP1][V2xDestP1] != 0);
      
      
      while (1) {

        // If no pixel at 1 => set 0
        
        if ( (VPixState0 | VPixState1 | VPixState2 | VPixState3) == 0 ) {
          PtDest->AALineCol[VyDest][VxDest] = 0;
          break;
        }
        
        // If one pixel at 1 and ONLY one => Make or of values = or of PlaneID + 1
      
        if ( (VPixState0 ^ VPixState1 ^ VPixState2 ^ VPixState3) == 1 ) {
          PtDest->AALineCol[VyDest][VxDest] = PtSrc->AALineCol[V2yDest][V2xDest] | PtSrc->AALineCol[V2yDest][V2xDestP1] | PtSrc->AALineCol[V2yDestP1][V2xDest] | PtSrc->AALineCol[V2yDestP1][V2xDestP1];
          break;
        }
      
        // If more than one pixel at 1 => Base + Sum pixels states = 10 + Sum  
      
        PtDest->AALineCol[VyDest][VxDest] = 10 + (VPixState0 + VPixState1 + VPixState2 + VPixState3);
        break;
        
      } // End while (1)
      
    } // End for ( VxDest ... )
    
  } // End for ( VyDest ... )
  
  err_retok (( ERR_OUT, "" ));
}




/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 23/07/2009
Doc date  :
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__FConvMatDiscriCumToMatDiscriCumHalfScale ( FSBB0__TMatDiscriCumul* PtSrc, FSBB0__TMatDiscriCumulHalfScale* PtDest ) {
  
  SInt32 VxDest;
  SInt32 VyDest;
  SInt32 VxDestMax;
  SInt32 VyDestMax;
  SInt32 V2xDest;
  SInt32 V2xDestP1;
  SInt32 V2yDest;
  SInt32 V2yDestP1;
  
  
  err_retnull ( PtSrc , (ERR_OUT,"PtSrc == NULL") );
  err_retnull ( PtDest, (ERR_OUT,"PtDest == NULL") );
  
  VxDestMax = FSBB0__REG_DISCRI_BIT_SZ   / 2;
  VyDestMax = FSBB0__MAT_DISCRI_USEFUL_LINES_NB / 2;
  
  for ( VyDest=0; VyDest < VyDestMax; VyDest++ ) {
    
    for ( VxDest=0; VxDest < VxDestMax; VxDest++ ) {
      
      V2xDest   = 2 * VxDest;
      V2xDestP1 = V2xDest + 1;
      V2yDest   = 2 * VyDest;
      V2yDestP1 = V2yDest + 1;
      
      PtDest->AALineCol[VyDest][VxDest] = PtSrc->AALineCol[V2yDest][V2xDest] + PtSrc->AALineCol[V2yDest][V2xDestP1] + PtSrc->AALineCol[V2yDestP1][V2xDest] + PtSrc->AALineCol[V2yDestP1][V2xDestP1];
    }
    
  }
  
  err_retok (( ERR_OUT, "" ));
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 30/04/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */


SInt32 FSBB0__FBuildMatDiscriW32FromLinePatReg ( FSBB0__TRegDiscriW32* PtLinePatReg0, FSBB0__TRegDiscriW32* PtLinePatReg1, FSBB0__TMatDiscriW32* PtDest ) {
  
  SInt16 ViLine;
  
  err_retnull ( PtLinePatReg0, (ERR_OUT,"PtLinePatReg0 == NULL !") );
  err_retnull ( PtLinePatReg1, (ERR_OUT,"PtLinePatReg1 == NULL !") );
  err_retnull ( PtDest       , (ERR_OUT,"PtDest        == NULL !") );
  
  ViLine= 0;
  
  do {
    
    memcpy ( PtDest->AALineW32[ViLine], PtLinePatReg0, FSBB0__REG_DISCRI_W32_SZ * 4 );
    ++ViLine;
    memcpy ( PtDest->AALineW32[ViLine], PtLinePatReg1, FSBB0__REG_DISCRI_W32_SZ * 4 );
    ++ViLine;
    
  } while ( ViLine < FSBB0__MAT_DISCRI_USEFUL_LINES_NB);
  
  err_retok (( ERR_OUT, "" ));
}
  

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 04/05/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FCompareMatDiscriBit ( SInt16 LineNbToCompare, FSBB0__TMatDiscriBit* PtMat, FSBB0__TMatDiscriBit* PtMatRef, SInt8 PrintLvl, SInt8 PrintMimosaId, SInt32 PrintAcqId, SInt16 PrintFrameId ) {
  
  SInt32 ViLine;
  SInt32 ViCol;
  SInt8  VPixState;
  SInt8  VRefPixState;
  SInt32 VErrCnt;
  

  if ( (LineNbToCompare <= 0) || (LineNbToCompare > FSBB0__MAT_DISCRI_USEFUL_LINES_NB) ) {
    err_error (( ERR_OUT, "Bad line nb to compare = %d MUST be 1..%d", LineNbToCompare, FSBB0__MAT_DISCRI_USEFUL_LINES_NB ));
    return (0);
  }
        
  VErrCnt = 0;
  
  for ( ViLine=0; ViLine < LineNbToCompare; ViLine++ ) {
    
    for ( ViCol=0; ViCol < FSBB0__REG_DISCRI_BIT_SZ /* 580 for Test LP003 */; ViCol++ ) {
      VPixState    = PtMat->AALineCol[ViLine][ViCol];
      VRefPixState = PtMatRef->AALineCol[ViLine][ViCol];
      
      if ( VPixState != VRefPixState ) {
        ++VErrCnt;
        if ( PrintLvl == 2 ) msg (( MSG_OUT, "Error => FSBB0[%d] Line %4d - Col %4d : Pixel = %d <> Expected = %d", PrintMimosaId, ViLine, ViCol, VPixState, VRefPixState ));
      }
      
    } // End for ViCol
    
  } // End for ViLine
  
  if ( (PrintLvl >= 1) && (VErrCnt != 0) ) msg (( MSG_OUT, "For this event Acq[%3d] Frame [%6d] %d errors on Mimosa [%d]", PrintAcqId, PrintFrameId, VErrCnt, PrintMimosaId ));
  
  return ( VErrCnt );
}


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

FSBB0__TCDiscriFile :: FSBB0__TCDiscriFile ( char* ErrLogFile, SInt8 EnableErrLog, SInt8 ErrLogLvl ) : FIL__TCBinFile ( ErrLogFile, EnableErrLog, ErrLogLvl ) {
  
  
}


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFSetFileName ( char* DataFile ) {
  
  return ( FIL__TCBinFile :: PubFSetFileName (DataFile) );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 03/02/2009
Doc date  : 03/02/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFSetFlushMode ( SInt8 FlushAfterWrite ) {
  
  return ( FIL__TCBinFile :: PubFSetFlushMode (FlushAfterWrite) );
}



/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

FSBB0__TCDiscriFile :: ~FSBB0__TCDiscriFile () {
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFConf  ( char* DataFile, SInt8 WriteRead, SInt8 FlushAfterWrite, SInt8 MeasTime ) {
  
  SInt32 VRet;
  SInt32 VRWBMode;
  SInt32 VMaxBlocSz;
  SInt32 VBlocSz;
  
  switch ( WriteRead ) {
    
    case 0 : {
      VRWBMode = FIL__TCBinFile_RWB_MODE_WRITE;
      break; }
    
    case 1 : {
      VRWBMode = FIL__TCBinFile_RWB_MODE_READ;
      break; }
    
    default : {
      err_retfail ( -1, (ERR_OUT,"Bad WriteRead param = %d <> 0..1", WriteRead ) );
      break; }
    
  }
  
  VMaxBlocSz = VBlocSz = sizeof (FSBB0__TMatDiscriW32);
  
  VRet = FIL__TCBinFile::PubFConf  ( DataFile, VRWBMode, VMaxBlocSz, VBlocSz, FlushAfterWrite, MeasTime );
  
  // msg (( MSG_OUT, "PubFConf => FlushAfterWrite=%d", FlushAfterWrite ));
  
  return (VRet);
}


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFGetFileSz () {
  return ( FIL__TCBinFile::PubFGetFileSz () );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFGetEvNb () {
  return ( FIL__TCBinFile::PubFGetBlocNb () );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFCreate () {
  return ( FIL__TCBinFile::PubFCreate () );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFOpen () {
  return ( FIL__TCBinFile::PubFOpen () );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFWriteEv ( FSBB0__TMatDiscriW32* PtSrcMat  ) {
  
  SInt32 VRet;
//  SInt32 VRet; // modif 2009_03_04 MG
  
  VRet = PubFSeqWrite ( (void*) PtSrcMat, ProParBlocSz );
  
  err_retfail ( VRet, (ERR_OUT,"Write event failed !") );
  err_retok (( ERR_OUT, "" ));
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFReadNextEv ( FSBB0__TMatDiscriW32* PtDestMat, SInt32 MaxDestSz ) {
  
  SInt32 VRet;
  
  VRet = PubFSeqRead   ( (void*) PtDestMat, MaxDestSz, ProParBlocSz );
  
  err_retfail ( VRet, (ERR_OUT,"Read event failed !") );
  err_retok (( ERR_OUT, "" ));
  
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

FSBB0__TMatDiscriW32* FSBB0__TCDiscriFile :: PubFReadNextEv () {
  
  FSBB0__TMatDiscriW32* VPtEv;
  
  VPtEv = (FSBB0__TMatDiscriW32*) PubFSeqRead   ( ProParBlocSz );
  
  if ( VPtEv == NULL ) {
    err_error (( ERR_OUT, "Read event failed !" ));
  }
  
  err_retval ( VPtEv, ( ERR_OUT, "" ) );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFGotoEv ( SInt32 EvNo ) {
  
  SInt32 VRet;
  
  VRet = PubFGotoBloc ( EvNo );
  
  err_retfail ( VRet, (ERR_OUT,"Goto event [%d] failed !", EvNo ) );
  err_retok (( ERR_OUT, "" ));
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFReadEv ( SInt32 EvNo, FSBB0__TMatDiscriW32* PtDestMat, SInt32 MaxDestSz ) {
  
  SInt32 VRet;
  
  VRet = PubFBlocRead  ( EvNo, PtDestMat, MaxDestSz );
  
  err_retfail ( VRet, (ERR_OUT,"Read event [%d] failed !", EvNo ) );
  err_retok (( ERR_OUT, "" ));
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

FSBB0__TMatDiscriW32* FSBB0__TCDiscriFile :: PubFReadEv ( SInt32 EvNo ) {
  
  FSBB0__TMatDiscriW32* VPtEv;
  
  
  VPtEv = (FSBB0__TMatDiscriW32*) PubFBlocRead  ( EvNo );
  
  if ( VPtEv == NULL ) {
    err_error (( ERR_OUT, "Read event [%d] failed !", EvNo ));
  }
  
  err_retval ( VPtEv, ( ERR_OUT, "" ) );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFFlush () {
  return ( FIL__TCBinFile::PubFFlush () );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 31/01/2009
Doc date  : 31/01/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCDiscriFile :: PubFClose () {
  return ( FIL__TCBinFile::PubFClose () );
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    :
:
Level     :
Date      : 08/07/2009
Doc date  : 08/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FWriteZSRunCnf ( char* FileName, FSBB0__TZSRunCnf* PtSrc ) {
  
  SInt32         VRecSz;

  err_retnull ( PtSrc, (ERR_OUT,"PtSrc == NULL") );

  VRecSz = sizeof (FSBB0__TZSRunCnf);  
  
  err_retfail ( FIL_FWriteRecord ( FileName, PtSrc, VRecSz ), (ERR_OUT,"Write failed !") );
  
  err_retok (( ERR_OUT, "" ));
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    :
:
Level     :
Date      : 08/07/2009
Doc date  : 08/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FReadZSRunCnf ( char* FileName, FSBB0__TZSRunCnf* PtDest ) {
  
  SInt32         VRecSz;
  
  err_retnull ( PtDest, (ERR_OUT,"PtSrc == NULL") );
  
  VRecSz = sizeof (FSBB0__TZSRunCnf);
  
  err_retfail ( FIL_FReadRecord ( FileName, PtDest, VRecSz ) , (ERR_OUT,"Read failed !") );
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    :
:
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FPrintZSRunCnf ( FSBB0__TZSRunCnf* PtSrc ) {
    
  err_retnull ( PtSrc, (ERR_OUT,"PtSrc == NULL") );
  
  msg (( MSG_OUT, "================================================" ));
  msg (( MSG_OUT, "RunNo                                %6d", PtSrc->RunNo ));
  msg (( MSG_OUT, "RunSave                              %6d", PtSrc->RunSave ));
  msg (( MSG_OUT, "RunSaveMode                          %6d", PtSrc->RunSaveMode ));
  msg (( MSG_OUT, "RunEvNb                              %6d", PtSrc->RunEvNb ));
  msg (( MSG_OUT, "RunFileEvNb                          %6d", PtSrc->RunFileEvNb ));
  msg (( MSG_OUT, "------------------------------------------------" ));
  msg (( MSG_OUT, "StartDate                            %s", TIME__FDateS2Str ( PtSrc->StartDate, NULL, 0 )  ));
  msg (( MSG_OUT, "StartTime                            %s", TIME__FTime2Str  ( PtSrc->StartTime, NULL, 0 )  ));
  msg (( MSG_OUT, "------------------------------------------------" ));
  msg (( MSG_OUT, "AsicName                             %6d", PtSrc->AsicName ));
  msg (( MSG_OUT, "AsicNb                               %6d", PtSrc->AsicNb ));
  msg (( MSG_OUT, "------------------------------------------------" ));
  msg (( MSG_OUT, "SwTrigEnabled                        %6d", PtSrc->SwTrigEnabled ));
  msg (( MSG_OUT, "HwTrigModeSavedData                  %6d", PtSrc->HwTrigModeSavedData ));
  msg (( MSG_OUT, "HwTrigPar[DPXI__HW_TRIG_PAR__OFFSET] %6d", PtSrc->HwTrigPar[DPXI__HW_TRIG_PAR__OFFSET] ));
  msg (( MSG_OUT, "HwTrigPar[DPXI__HW_TRIG_PAR__WINDOW] %6d", PtSrc->HwTrigPar[DPXI__HW_TRIG_PAR__WINDOW] ));
  msg (( MSG_OUT, "================================================" ));
  
  err_retok (( ERR_OUT, "" ));
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    :
:
Level     :
Date      : 08/07/2009
Doc date  : 08/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FWriteZSRunRes ( char* FileName, FSBB0__TZSRunRes* PtSrc ) {
  
  SInt32         VRecSz;
  
  err_retnull ( PtSrc, (ERR_OUT,"PtSrc == NULL") );
  
  VRecSz = sizeof (FSBB0__TZSRunRes);
  
  err_retfail ( FIL_FWriteRecord ( FileName, PtSrc, VRecSz ), (ERR_OUT,"Write failed !") );
  
  err_retok (( ERR_OUT, "" ));
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    :
:
Level     :
Date      : 08/07/2009
Doc date  : 08/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__FReadZSRunRes ( char* FileName, FSBB0__TZSRunRes* PtDest ) {
  
  SInt32         VRecSz;
  
  err_retnull ( PtDest, (ERR_OUT,"PtSrc == NULL") );
  
  VRecSz = sizeof (FSBB0__TZSRunRes);
  
  err_retfail ( FIL_FReadRecord ( FileName, PtDest, VRecSz ) , (ERR_OUT,"Read failed !") );
  
  err_retok (( ERR_OUT, "" ));
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Prototype :
:
Goal      :
:
Inputs    :
:
Ouputs    :
:
Globals   :
:
Remark    :
:
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : LEPSI */
/* =================================================================================== */
/* DOC_FUNC_END */
 
SInt32 FSBB0__FPrintZSRunRes ( FSBB0__TZSRunRes* PtSrc ) {
  
  SInt32 Vi;
  
  err_retnull ( PtSrc, (ERR_OUT,"PtSrc == NULL") );
  

  msg (( MSG_OUT, "================================================" ));
  msg (( MSG_OUT, "StopDate   %s", TIME__FDateS2Str ( PtSrc->StopDate, NULL, 0 )  ));
  msg (( MSG_OUT, "StopTime   %s", TIME__FTime2Str  ( PtSrc->StopTime, NULL, 0 )  ));
  msg (( MSG_OUT, "EvNbTaken  %6d", PtSrc->EvNbTaken ));
  msg (( MSG_OUT, "RejAcqNb   %6d", PtSrc->RejAcqNb  ));
  msg (( MSG_OUT, "================================================" ));
  
  for ( Vi=0; Vi < PtSrc->RejAcqNb; Vi++ ) {
    msg (( MSG_OUT, "Acq [%6d] rejected !", PtSrc->ARejAcqList[Vi] ));
  }
  
  msg (( MSG_OUT, "================================================" ));
  

  err_retok (( ERR_OUT, "" ));
}



/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

FSBB0__TCZsRunRW :: FSBB0__TCZsRunRW () {
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

FSBB0__TCZsRunRW :: ~FSBB0__TCZsRunRW () {
  
  delete ProPtBinFile;
  
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    : All fields BUT NOT
          : - errors handling and log file
          : - messages and event header print flags
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PrivFInitForNewRunLoading () {
  
  // --------------------------------------
  // Init all variables / parameters
  // --------------------------------------
  
  
  // Parameters from conf
  
  sprintf ( ProParRunDir, "" );
  ProParRunNo            = 0;
  ProParCurFSBB0No        = 0;
  ProParCurEvNo          = 0;
    
  // Informations
  
  ProInfRunFSBB0Nb        = 0;
  ProInfRunEvNb          = 0;
  ProInfRunFileSz        = 0;
  ProInfRunEvNbPerFile   = 0;
  ProInfRunBlocNbPerFile = 0;
    
  // Variables for internal processing
  
  ProLastEvAccessDoneInOneFSBB0Mode = 1;
  
  ProCurBlocNoInRun      = 0;
  ProCurFileNo           = 0;
  ProCurBlocNoInFile     = 0;
  sprintf ( ProCurFileName, "" );
  
  ProPtFFrameRaw = NULL;
  

  err_retok (( ERR_OUT, "" ));
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFBegin ( char* ErrLogFile, SInt8 EnableErrLog, SInt8 ErrLogLvl ) {
  
    
  // Conf done & errors log
  // Parameters from constructor
  
  ProConfDone            = -1;
  ProParEnableErrLog     = EnableErrLog;
  ProParErrLogLvl        = ErrLogLvl;
  
  sprintf ( ProParErrLogFile, "%s", ErrLogFile );

  // Frame size
  
  ProInfZsFFrameRawSz = sizeof (FSBB0__TZsFFrameRaw);

  // Print ctrl fields
  
  ProParMeasTime       = 0;
  ProParPrintMsg       = 0;
  ProParPrintEvHeader  = 0;


  PrivFInitForNewRunLoading ();

  // Res
  
  // TCBinFile
    
  ProPtBinFile = new FIL__TCBinFile ( "x:\\log\\err_TCBinFile.txt", 0 /* EnableErrLog */, ERR_LOG_LVL_NONE );
  
  err_retnull ( ProPtBinFile, (ERR_OUT,"Allocation of ProPtBinFile failed !!! => Abort") );
    
  ProPtBinFile->PubFConf ( "", FIL__TCBinFile_RWB_MODE_READ, ProInfZsFFrameRawSz /* Max bloc sz */ , ProInfZsFFrameRawSz /* Bloc sz */ , 0 /* FlushAfterWrite */, 0 /* MeasTime */ );


  ProConfDone            = 1;

  err_retok (( ERR_OUT, "" ));
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFSetMeasTime ( SInt8 Yes   ) {
  ProParMeasTime = Yes;
  err_retok (( ERR_OUT, "" ));
}
    

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFSetPrintMsg      ( SInt8 Print ) {
  ProParPrintMsg = Print;
  err_retok (( ERR_OUT, "" ));
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFSetPrintEvHeader ( SInt8 Print ) {
  ProParPrintEvHeader = Print;
  err_retok (( ERR_OUT, "" ));
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFGetMeasTime () {
  return (ProParMeasTime);
}


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFGetPrintMsg      () {
  return ( ProParPrintMsg );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFGetPrintEvHeader () {
  return ( ProParPrintEvHeader );
}
  
/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 29/07/2009
Doc date  : 29/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFGetFSBB0Nb () {
  return ( ProInfRunFSBB0Nb );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 29/07/2009
Doc date  : 29/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFGetEvNb () {
  return ( ProInfRunEvNb );
}

/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 29/07/2009
Doc date  : 29/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFGetEvNbPerFile () {
  return ( ProInfRunEvNbPerFile );
}


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Rev       : 29/07/2009
          : - Two kinds of events handling : OneFSBB0 / AllFSBB0
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFLoadRun ( char* RunDir, UInt32 RunNo ) {
  
  SInt32 VRet;
  
  FSBB0__TCZsRunRW__CHK_INIT ();
  
  err_retnull ( RunDir, (ERR_OUT,"RunDir == NULL !") );
  
  
  // Set run dir and run no
  
  sprintf ( ProParRunDir, "%s", RunDir );
  
  ProParRunNo = RunNo;
  
  // Load and print run conf
  // Must be loaded here because fiels of VRunCnfFile are used later
  
  sprintf ( ProRunCnfFile, "%s\\run_%.4d_cnf.bin", ProParRunDir, ProParRunNo );
  
  FSBB0__FReadZSRunCnf  ( ProRunCnfFile, &ProRecZSRunCnf );
  FSBB0__FPrintZSRunCnf ( &ProRecZSRunCnf );
  
  // Load and print run res
  
  sprintf ( ProRunResFile, "%s\\run_%.4d_res.bin", ProParRunDir, ProParRunNo );
  
  FSBB0__FReadZSRunRes  ( ProRunResFile, &ProRecZSRunRes );
  FSBB0__FPrintZSRunRes ( &ProRecZSRunRes );
  
  // Update information fields
  
  ProInfRunFSBB0Nb         = ProRecZSRunCnf.AsicNb;
  ProInfRunEvNb           = ProRecZSRunCnf.RunEvNb;
  ProInfRunEvNbPerFile    = ProRecZSRunCnf.RunFileEvNb;
  
  // ----------------------------------
  // WARNING - Upgrade on 29/07/2009
  // ----------------------------------  
  // - Now class can provide two kinds of events pointer via PubFGotoEvOneFSBB0 / PubFGotoEvAllFSBB0
  // -> PubFGotoEvOneFSBB0 : Pointer to ONE plane of FSBB0 telescope
  // -> PubFGotoEvAllFSBB0 : Pointer to ALL planes of FSBB0 telescope
  //
  // => ProInfRunBlocNbPerFile depend on which kind off event we want to access
  //    Therefore ProInfRunBlocNbPerFile is ovewritten in PubFGotoEvOneFSBB0 / PubFGotoEvAllFSBB0
  //    By default it is set HERE for "PubFGotoEvOneFSBB0" kind of events
  //
  // The first call to ProPtBinFile->PubFConf done at the end of this function also configure
  // buffer size for "PubFGotoEvOneFSBB0" kind of events.
  
  ProInfRunBlocNbPerFile  = ProInfRunFSBB0Nb * ProInfRunEvNbPerFile;
  
  // Set flag to memorize last ev access mode
  
  ProLastEvAccessDoneInOneFSBB0Mode = 1;
  
  // Set cur event to first one, first FSBB0
  
  ProParCurFSBB0No = 0;
  ProParCurEvNo   = 0;
  
  // Open file for first event
  
  ProCurBlocNoInRun   = 0;
  ProCurFileNo        = 0;
  ProCurBlocNoInFile  = 0;
  
  sprintf ( ProCurFileName, "%srun_%.4d_%.4d", ProParRunDir, ProParRunNo, ProCurFileNo );
  
  msg (( MSG_OUT, "-------------------------------------------------" ));
  msg (( MSG_OUT, "Load run try to open first file = %s", ProCurFileName ));
  msg (( MSG_OUT, "-------------------------------------------------" ));
  
  // Try to open file
  
  ProPtBinFile->PubFConf       ( ProCurFileName, FIL__TCBinFile_RWB_MODE_READ, ProInfZsFFrameRawSz /* Max bloc sz */ , ProInfZsFFrameRawSz /* Bloc sz */ , 0 /* FlushAfterWrite */, ProParMeasTime /* MeasTime */ );
  VRet = ProPtBinFile->PubFOpen ();
  
  
  if ( VRet < 0 ) {
    ProInfRunFileSz = 0;
    err_retfail ( -1, (ERR_OUT,"Open file %s for event %d failed !", ProCurFileName, ProParCurEvNo ) );
  }
  
  ProInfRunFileSz  = ProPtBinFile->PubFGetFileSz ();
  
  
  err_retok (( ERR_OUT, "Open file %s done :-)", ProCurFileName ));
}


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

FSBB0__TZsFFrameRaw* FSBB0__TCZsRunRW :: PubFGotoEvOneFSBB0  ( SInt8 FSBB0No, SInt32 EvNo ) {

  SInt32 VRet = 0;
  SInt32 VNewFileNo;
  
  ProParCurFSBB0No = FSBB0No;
  ProParCurEvNo   = EvNo;

  // Calculate Nb of bloc per file ( Rq :  value is different for PubFGotoEvAllFSBB0 )

  ProInfRunBlocNbPerFile  = ProInfRunFSBB0Nb * ProInfRunEvNbPerFile;
  
  // Calculate bloc no and file to access
  
  ProCurBlocNoInRun   = ( ProParCurEvNo * ProInfRunFSBB0Nb ) + ProParCurFSBB0No;
  VNewFileNo          = ProCurBlocNoInRun / ProInfRunBlocNbPerFile;
  ProCurBlocNoInFile  = ProCurBlocNoInRun % ProInfRunBlocNbPerFile;

  // If last ev acces done in AllFSBB0 mode ( -> TCBin file MUST be reconfigured ) 
  // If event is not in current file
  // => close current file & open new one

  if ( (ProLastEvAccessDoneInOneFSBB0Mode == 0) || (VNewFileNo != ProCurFileNo) ) {
    
    ProLastEvAccessDoneInOneFSBB0Mode = 1;
    
    // Close current file
    
    ProPtBinFile->PubFClose ();
    
    // Open new file
    
    ProCurFileNo = VNewFileNo;
    
    sprintf ( ProCurFileName, "%srun_%.4d_%.4d", ProParRunDir, ProParRunNo, ProCurFileNo );
    
    if ( ProParPrintMsg ) {
      msg (( MSG_OUT, "-------------------------------------------------" ));
      msg (( MSG_OUT, "Read event=%d - FSBB0No=%d => BlocNoInRun=%d - FileNo=%d - BlocNoInFile=%d", ProParCurEvNo,  ProParCurFSBB0No, ProCurBlocNoInRun, ProCurFileNo, ProCurBlocNoInFile ));
      msg (( MSG_OUT, "Try to open file = %s", ProCurFileName ));
      msg (( MSG_OUT, "-------------------------------------------------" ));
    }
    
    ProPtBinFile->PubFConf       ( ProCurFileName, FIL__TCBinFile_RWB_MODE_READ, ProInfZsFFrameRawSz /* Max bloc sz */ , ProInfZsFFrameRawSz /* Bloc sz */ , 0 /* FlushAfterWrite */, ProParMeasTime /* MeasTime */ );
    VRet = ProPtBinFile->PubFOpen ();
    err_retfailnull ( VRet, (ERR_OUT,"Open file %s failed !", ProCurFileName) );
  }
  
  else {
    
    if ( ProParPrintMsg ) {
      msg (( MSG_OUT, "-------------------------------------------------" ));
      msg (( MSG_OUT, "Read event=%d - FSBB0No=%d => BlocNoInRun=%d - FileNo=%d - BlocNoInFile=%d", ProParCurEvNo,  ProParCurFSBB0No, ProCurBlocNoInRun, ProCurFileNo, ProCurBlocNoInFile ));
      msg (( MSG_OUT, "-------------------------------------------------" ));
    }
    
  }
  
  // Try to read event
  
  ProPtFFrameRaw = (FSBB0__TZsFFrameRaw*) ProPtBinFile->PubFBlocRead ( ProCurBlocNoInFile );
  
  if ( ProParPrintEvHeader ) {
    FSBB0_FPrintZsFFrameRawHeader ( ProPtFFrameRaw );
  }
    
  return ( ProPtFFrameRaw );
}




/*******************************************************************************
Prototype :
Goal      : Retun pointeur to first plane of Telescope => size = Nb plane * ProInfZsFFrameRawSz
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 28/07/2009
Doc date  : 28/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

FSBB0__TZsFFrameRaw* FSBB0__TCZsRunRW :: PubFGotoEvAllFSBB0 ( SInt32 EvNo ) {
  
  SInt32 VRet = 0;
  SInt32 VNewFileNo;
  SInt32 VEventSz;
  SInt32 Vi;
  
  
  ProParCurEvNo   = EvNo;
  VEventSz        = ProInfRunFSBB0Nb * ProInfZsFFrameRawSz;

  // Calculate Nb of bloc per file ( Rq :  value is different for PubFGotoEvOneFSBB0 )
  
  ProInfRunBlocNbPerFile  = ProInfRunEvNbPerFile;
  
  // Calculate bloc no and file to access
  
  ProCurBlocNoInRun   = ProParCurEvNo; // * ProInfRunFSBB0Nb;
  VNewFileNo          = ProCurBlocNoInRun / ProInfRunBlocNbPerFile;
  ProCurBlocNoInFile  = ProCurBlocNoInRun % ProInfRunBlocNbPerFile;
  
  // If last ev acces done in OneFSBB0 mode ( -> TCBin file MUST be reconfigured )
  // If event is not in current file
  // => close current file & open new one
  
  if ( (ProLastEvAccessDoneInOneFSBB0Mode == 1) || (VNewFileNo != ProCurFileNo) ) {
    
    ProLastEvAccessDoneInOneFSBB0Mode = 0;
    
    // Close current file
    
    ProPtBinFile->PubFClose ();
    
    // Open new file
    
    ProCurFileNo = VNewFileNo;
    
    sprintf ( ProCurFileName, "%srun_%.4d_%.4d", ProParRunDir, ProParRunNo, ProCurFileNo );
    
    if ( ProParPrintMsg ) {
      msg (( MSG_OUT, "-------------------------------------------------" ));
      msg (( MSG_OUT, "Read event=%d => BlocNoInRun=%d - FileNo=%d - BlocNoInFile=%d", ProParCurEvNo,  ProCurBlocNoInRun, ProCurFileNo, ProCurBlocNoInFile ));
      msg (( MSG_OUT, "Try to open file = %s", ProCurFileName ));
      msg (( MSG_OUT, "-------------------------------------------------" ));
    }
    
    ProPtBinFile->PubFConf       ( ProCurFileName, FIL__TCBinFile_RWB_MODE_READ, VEventSz /* Max bloc sz */ , VEventSz /* Bloc sz */ , 0 /* FlushAfterWrite */, ProParMeasTime /* MeasTime */ );
    VRet = ProPtBinFile->PubFOpen ();
    
    err_retfailnull ( VRet, (ERR_OUT,"Open file %s failed !", ProCurFileName) );
  }
  
  else {
    
    if ( ProParPrintMsg ) {
      msg (( MSG_OUT, "-------------------------------------------------" ));
      msg (( MSG_OUT, "Read event=%d => BlocNoInRun=%d - FileNo=%d - BlocNoInFile=%d", ProParCurEvNo, ProCurBlocNoInRun, ProCurFileNo, ProCurBlocNoInFile ));
      msg (( MSG_OUT, "-------------------------------------------------" ));
    }
    
  }
  
  // Try to read event
  
  ProPtFFrameRaw = (FSBB0__TZsFFrameRaw*) ProPtBinFile->PubFBlocRead ( ProCurBlocNoInFile );
      
  if ( ProParPrintEvHeader ) {
    
    for ( Vi=0; Vi < ProInfRunFSBB0Nb; Vi++ ) {
      FSBB0_FPrintZsFFrameRawHeader ( &ProPtFFrameRaw[Vi] );
    }
    
  }
  
  return ( ProPtFFrameRaw );
}


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/

SInt32 FSBB0__TCZsRunRW :: PubFCloseRun () {

  ProPtBinFile->PubFClose ();
  PrivFInitForNewRunLoading ();
  err_retok (( ERR_OUT, "" ));
}


/*******************************************************************************
Prototype :
Goal      :
Inputs    :
Ouputs    :
Globals   :
Remark    :
Level     :
Date      : 09/07/2009
Doc date  : 09/07/2009
Author    : Gilles CLAUS
E-mail    : gilles.claus@ires.in2p3.fr
Labo      : IPHC */
/******************************************************************************/





// *************************************
// *************************************
//           FSBB0__TCTelMon
// *************************************
// *************************************


#ifndef ROOT_ROOT

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 17/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PrivFInit () {
  
  SInt32 Vi;
  
  
  // Plane & MAPS settings for FSBB0
  
  ProPar.PlaneNb = 6;
  
  MAPS__TCDigTelMon_CHK_PLANE_NB (ProPar.PlaneNb);


  ProPar.MapsName = ASIC__FSBB0;
  ProPar.MapsNb   = 6;
  
  // Planes conf
  // - Id = Index of plane : seem's to be strange and redundant => can be useful later
  // - plot color
  // - revert or not X direction
  
  ProAPlanePar[0].MapsId     = 0;     
  ProAPlanePar[0].PlotColor  = FSBB0__TCTelMon__COL_PLANE_0;
  ProAPlanePar[0].RevertXDir = 1;
    
  ProAPlanePar[1].MapsId     = 1;
  ProAPlanePar[1].PlotColor  = FSBB0__TCTelMon__COL_PLANE_1;
  ProAPlanePar[1].RevertXDir = 0;
  
  ProAPlanePar[2].MapsId     = 2;
  ProAPlanePar[2].PlotColor  = FSBB0__TCTelMon__COL_PLANE_2;
  ProAPlanePar[2].RevertXDir = 1;
  
  ProAPlanePar[3].MapsId     = 3;
  ProAPlanePar[3].PlotColor  = FSBB0__TCTelMon__COL_PLANE_3;
  ProAPlanePar[3].RevertXDir = 0;
  
  ProAPlanePar[4].MapsId     = 4;
  ProAPlanePar[4].PlotColor  = FSBB0__TCTelMon__COL_PLANE_4;
  ProAPlanePar[4].RevertXDir = 1;
  
  ProAPlanePar[5].MapsId     = 5;
  ProAPlanePar[5].PlotColor  = FSBB0__TCTelMon__COL_PLANE_5;
  ProAPlanePar[5].RevertXDir = 0;
  
  
  for ( Vi=0; Vi < MAPS__TCDigTelMon_MAX_PLANE_NB; Vi++ ) {
    PrivAPlanePlotColor[Vi] = ProAPlanePar[Vi].PlotColor;
  }
  
  


  // Frames record reset
    
  memset ( &PrivZsFFrame             , 0, sizeof (FSBB0__TZsFFrame) );
  
  memset ( &PrivMatDiscriCoin        , 0, sizeof (FSBB0__TMatDiscriBit) );
  memset ( &PrivMatDiscriCoinCum     , 0, sizeof (FSBB0__TMatDiscriCumul) );
  memset ( &PrivMatDispColor         , 0, sizeof (FSBB0__TMatDiscriColor) );
  
  memset ( &PrivMatDiscriBitHalfScale, 0, sizeof (FSBB0__TMatDiscriBitHalfScale) );
  memset ( &PrivMatDiscriCumHalfScale, 0, sizeof (FSBB0__TMatDiscriCumulHalfScale) );
  memset ( &PrivMatDispColorHalfScale, 0, sizeof (FSBB0__TMatDiscriColorHalfScale) );
  
  
  // Events list allocation & reset

  PriEnListEvWitHitUpdate   = 1;
  PriEnListEvWithTrigUpdate = 1;

  // Allocation & reset
  
  for ( Vi=0; Vi < FSBB0__TCTelMon__EV_LIST_MAX_CHAN_NB; Vi++ ) {
    
    PrivAAListEvWithTrig[Vi] = (ASIC__TFrameStatus*) malloc ( FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB * sizeof (ASIC__TFrameStatus) );
    err_retnull ( PrivAAListEvWithTrig[Vi], (ERR_OUT,"Allocation of trigger list elt=%d failed !", Vi) );

    memset ( PrivAAListEvWithTrig[Vi], 0, FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB * sizeof (ASIC__TFrameStatus) );
 

    PrivAAListEvWithHit[Vi] = (ASIC__TFrameStatus*) malloc ( FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB * sizeof (ASIC__TFrameStatus) );
    err_retnull ( PrivAAListEvWithHit[Vi], (ERR_OUT,"Allocation of hit list elt=%d failed !", Vi) );
    
    memset ( PrivAAListEvWithHit[Vi], 0, FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB * sizeof (ASIC__TFrameStatus) );
    
  }
  
  PrivAListEvWithHitAllPlanes = (FSBB0__TCTelMon_TEltListEvWithHitAllPlanes*) malloc ( FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB * sizeof (FSBB0__TCTelMon_TEltListEvWithHitAllPlanes) );

  err_retnull ( PrivAListEvWithHitAllPlanes, (ERR_OUT,"Allocation of hit all planes failed !") );
    
  memset ( PrivAListEvWithHitAllPlanes, 0, FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB * sizeof (FSBB0__TCTelMon_TEltListEvWithHitAllPlanes) );
    
  
  // Reset

  PrivListEvWithTrigIndex = 0;
  PrivListEvWithTrigFull  = 0;
      
  PrivListEvWithHitIndex  = 0;
  PrivListEvWithHitFull   = 0;
  
  PrivListEvWithHitAllPlanesIndex = 0;
  PrivListEvWithHitAllPlanesFull  = 0;
  
  // Variables reset
  
  PrivPtAcqData = NULL;
  PrivAcqEvNb   =    0;

  PrivPtResRun  = NULL;
  
  PubAcqOffLineProcOrRunOffLineProc = 0;

  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 26/07/2009
Rev       : 31/07/2009
          : - Add multi planes handling
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PrivFAddEvInListEvWithTrig ( SInt8 PlaneNo, ASIC__TFrameStatus* PtFrStatus, SInt32 HitCnt ) {

  err_retnull ( PtFrStatus, (ERR_OUT,"PtFrStatus == NULL") );

  if ( PriEnListEvWithTrigUpdate == 0 ) {
    return (0);
  }

  if ( PrivListEvWithTrigIndex < FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB ) {
    PtFrStatus->HitCnt = HitCnt;
    PrivAAListEvWithTrig[PlaneNo][PrivListEvWithTrigIndex] = *PtFrStatus;
    ++PrivListEvWithTrigIndex;
  }
  
  else {
    PrivListEvWithTrigFull = 1;
    err_retfail (-1, (ERR_OUT,"List full %d elt", PrivListEvWithTrigIndex ) );
  }

  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    : This function MUST always be called one time / ev with PlaneNo = FSBB0__TCTelMon__EV_LIST_CHAN_ID_CUMUL
          : because list index is ONLY updated when PlaneNo = FSBB0__TCTelMon__EV_LIST_CHAN_ID_CUMUL
          :
Date      : 26/07/2009
Rev       : 31/07/2009
          : - Add multi planes handling
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PrivFAddEvInListEvWithHit  ( SInt8 PlaneNo, ASIC__TFrameStatus* PtFrStatus, SInt32 HitCnt, SInt8 HitOnAllPlanes, SInt8 SingleHitOnEachPlane ) {
  
  err_retnull ( PtFrStatus, (ERR_OUT,"PtFrStatus == NULL") );

  if ( PriEnListEvWitHitUpdate == 0 ) {
    return (0);
  }
  
  // Check PlaneNo
  
  if ( (PlaneNo < 0) || (PlaneNo > FSBB0__TCTelMon__EV_LIST_MAX_CHAN_NB) ) {
    err_retfail ( -1, (ERR_OUT,"Bad Plane No = %d MUST be [0..%d]", PlaneNo, FSBB0__TCTelMon__EV_LIST_CHAN_ID_CUMUL ) );
  }

  // Update hit count field of FrStatus which already contains information about acq no, ev no, FSBB0 no etc ...

  PtFrStatus->HitCnt      = HitCnt;
  
  // Copy FrStatus in plane array
  
  PrivAAListEvWithHit[PlaneNo][PrivListEvWithHitIndex] = *PtFrStatus;
    
  // Update list index ONLY if PlaneNo == FSBB0__TCTelMon__EV_LIST_CHAN_ID_CUMUL
    
  if ( PlaneNo == FSBB0__TCTelMon__EV_LIST_CHAN_ID_CUMUL ) {

    // Update hit on all planes list
    
    // Rq : Decision to add event in list or not is done in two steps ( two tests ) and not by a single test in order to save execution time
    // -> First test ( HitOnAllPlanes == 1 ) cost less => Is there hits on all planes ? Yes / No ?
    // -> Second test cost much and therefore is only done if first one has passed

    if ( HitOnAllPlanes == 1 ) {
      
      // Add or not event in list depending of list mode
      // -> List events with hit(s) ( at least one per plane ) on all planes => Yes
      // -> List events with single hit in each plane => Yes if SingleHitOnEachPlane parameter is set / otherwise No
      
      if ( (ProPar.ListHitAllPlanesMode == MAPS__TCDigTelMon_LIST_HIT_ALL_PLANES_MODE__HIT_ALL_PLANES ) || ( (ProPar.ListHitAllPlanesMode == MAPS__TCDigTelMon_LIST_HIT_ALL_PLANES_MODE__SINGLE_EACH_PLANE) && (SingleHitOnEachPlane == 1) ) ) {
        
        PrivAListEvWithHitAllPlanes[PrivListEvWithHitAllPlanesIndex].FrStatus             = *PtFrStatus;
        PrivAListEvWithHitAllPlanes[PrivListEvWithHitAllPlanesIndex].IndexInEvWithHitList = PrivListEvWithHitIndex; // Store ev with trig list index
      
        if ( PrivListEvWithHitAllPlanesIndex < FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB ) {
          ++PrivListEvWithHitAllPlanesIndex;
        }
      
        else {
          PrivListEvWithHitAllPlanesFull = 1;
        }
      }
      
      
    } // End if ( HitOnAllPlanes == 1 )
    
    // Update PrivListEvWithHitIndex

    if ( PrivListEvWithHitIndex < FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB ) {
      ++PrivListEvWithHitIndex;
    }
    
    else {
      PrivListEvWithHitFull = 1;
      err_retfail (-1, (ERR_OUT,"List full %d elt", PrivListEvWithHitIndex ) );
    }
    
    
    
  }
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    : Hit count
Remark    :
Date      : 22/07/2009
Rev       : 20/05/2010
          : - Add CumTotTrigNb & CumFrameTrigNb handling
          :
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::ProFProcessPlane ( SInt32 DbgEvNo, SInt8 Id, FSBB0__TZsFFrameRaw* PtSrc ) {
  
  FSBB0__TMatDiscriBit*   VPtFrMatDiscriBit;
  FSBB0__TMatDiscriCumul* VPtFrMatCumTotHitCnt;
  SInt32                 VHitCnt;
  SInt8                  VUpdateMatCumul;
  SInt8                  VRequestPlot;
  SInt8                  VGoodFrame;
 
  // Check plane id
  
  MAPS__TCDigTelMon_CHK_PLANE_ID (Id);
  

  VRequestPlot = 0; // Used to store plot request and move it at END of function AFTER ALL processings

  // Init pointers
  
  VPtFrMatDiscriBit    = (FSBB0__TMatDiscriBit*)   ProAPlaneRes[Id].PtMatDiscriBit;
  VPtFrMatCumTotHitCnt = (FSBB0__TMatDiscriCumul*) ProAPlaneRes[Id].PtMatCumTotHitCnt;
   
  // If first event of analysis
  // -> Reset all results of plane
  
  if ( ProInf.CurEvToProc == 0 ) {    
    ProAPlaneRes[Id].FrameNbWithTrig     = 0;
    ProAPlaneRes[Id].FramePCentWithTrig  = 0;
    ProAPlaneRes[Id].CumTotTrigNb        = 0;
    ProAPlaneRes[Id].CumFrameTrigNb      = 0;
    
    ProAPlaneRes[Id].FrameNbWithHit     = 0;
    ProAPlaneRes[Id].FramePCentWithHit  = 0;
    ProAPlaneRes[Id].CumTotHitNb        = 0;
    ProAPlaneRes[Id].CumFrHitNb         = 0;
    FSBB0__FMatDiscriCumulResetHit ( VPtFrMatCumTotHitCnt );
    
    msg (( MSG_OUT, "----------> ProFProcessPlane => Reset - Plane %d", Id ));
  }
  
  VGoodFrame = 1;
  
  // Convert ZsFFrameRaw to ZsFFrame and store result in class tmp var PrivZsFFrame
  
  if ( ProPar.HandleTrigPos  == 0 ) {
    FSBB0__FConvZsFFrameRawToZsFFrame  ( PtSrc, &PrivZsFFrame, 0 /* DbgPrintLvl */ );
  }

  // Trigger pos handling
  
  else {
    if ( FSBB0__FConvZsFFrameRawToZsFFrameHandleTrigger ( ProPar.MapsNb, DbgEvNo, PrivAcqEvNb, PtSrc, &PrivZsFFrame, 1 /* DbgPrintLvl */ ) < 0 ) {
//      msg (( MSG_OUT, "***********************************************************************************" ));
//      msg (( MSG_OUT, "=> Event %4d has no trigger => Abort ! Plot may be false ! ( it's previous event ) ", DbgEvNo ));
//      msg (( MSG_OUT, "**********************************************************************************" ));

//      return (0);

      VGoodFrame = 0;
    }
  }
  
  // Convert ZsFFrameRaw to Pixels matrix AND Process cumul AT THE SAME TIME
  
  VUpdateMatCumul = ProAPlanePar[Id].PlotCum || ProAPlanePar[Id].PlotCoin;
  
  // ******************************************************************************************************
  // WARNING !!! TODAY 25/07/2009 Update matrix cumul is ALWAYS done => flag VUpdateMatCumul IS NOT used
  //             => Use flag later AND check !
  // ******************************************************************************************************
  
if ( VGoodFrame == 1 ) {

  VHitCnt = PrivFConvZsFFrameToMatDiscriBitAndCumul (
              DbgEvNo,
              ProPar.ProcMode             /* Mode            */,
              Id                          /* PlaneNo         */,
              ProAPlanePar[Id].PlotCoin   /* PlaneSelForCoin */,
              ProInf.CurEvToProc          /* EvNo            */,
              ProPar.GotoRawFrNo          /* EvSelForPlot    */,
              &PrivZsFFrame               /* PtSrc           */,
              VPtFrMatDiscriBit           /* PtDestFrameBit  */,   // Plane pixel matrix as "bit = state"
              &PrivMatDiscriCoin          /* PtDestCoinBit   */,   // Common coincidence pixel matrix as "bit = state"
              VPtFrMatCumTotHitCnt        /* PtDestFrameCum  */,   // Plane pixel cumul matrix as "count"
              &PrivMatDiscriCoinCum       /* PtDestCoinCum   */,   // Common coincidence cumul matrix as "count"
              0                           /* PrintLvl        */ );
  
  // Increment counter of frames with trigger
  
  if ( PrivZsFFrame.TrigSignalLine >= 0 ) {
    ++ProAPlaneRes[Id].FrameNbWithTrig;
  }

  // Increment counter of triggers
//#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
  if ( PrivZsFFrame.SStatus.ATrigRes[ASIC__FSBB0_TRIG_TOT_NB] > 0 ) {
    ProAPlaneRes[Id].CumTotTrigNb += PrivZsFFrame.SStatus.ATrigRes[ASIC__FSBB0_TRIG_TOT_NB];
  }
//#endif  

  // Increment counter of frames with hits
  
  if ( VHitCnt > 0 ) {
    ++ProAPlaneRes[Id].FrameNbWithHit;
    ProAPlaneRes[Id].CumTotHitNb += VHitCnt;
  }
  
  
} // End if ( VGoodFrame == 1 )


  // ------------------------------------------------
  // Plot frame
  // ------------------------------------------------
  
  if ( (ProAPlanePar[Id].PlotFrame ) && (ProPar.GotoRawFrNo >= 0) && (ProPar.GotoRawFrNo == ProInf.CurEvToProc) ) {
      
    if ( ProPar.DispFullMatrix ) {
      FSBB0__FDiscriMatConvBitToColState     ( VPtFrMatDiscriBit, &PrivMatDispColor, clWhite /* ColorStateZero */, ProAPlanePar[Id].PlotColor, 0 /* RevertLineDirection */ );
    }
    
    else {
      FSBB0__FConvMatDiscriBitToMatDiscriBitHalfScale ( VPtFrMatDiscriBit, &PrivMatDiscriBitHalfScale );
      FSBB0__FDiscriMatConvBitToColStateHalfScale     ( &PrivMatDiscriBitHalfScale, &PrivMatDispColorHalfScale, clWhite /* ColorStateZero */, ProAPlanePar[Id].PlotColor, 0 /* RevertLineDirection */ );
      
      FSBB0_FPrintZsFFrameRawHeader ( PtSrc );
      FSBB0__FMatDiscriPrintHit ( "Plane", Id, VPtFrMatDiscriBit );
      
      // err_error (( ERR_OUT, "---> ---> Plot frame request 1/2 matrix - Plane %d", Id ));
    }
    
    VRequestPlot = 1; // PLot request will be done at end of function
    
  } // End if Plot frame
  
    
  
  // Copy to buffer if required
  
  if ( ProPar.StoreEvents == 1 ) {
    
    err_error (( ERR_OUT, "Copy of event to buffer NOT IMPLEMENTED" ));
    
  } // Enf if copy to buffer
    
  
  // ================================================
  // Last event => calculate results & display
  // ================================================
  
  if ( (PrivStopProc == 1) || (ProInf.CurEvToProc >= (ProInf.LastEvToProc) ) ) {

    msg (( MSG_OUT, "----------> ProFProcessPlane => Last event => Calc" ));
    
    err_error (( ERR_OUT, "----------> ProFProcessPlane => Last event => Calc" ));
    
    ProAPlaneRes[Id].FramePCentWithTrig = ( (float) ProAPlaneRes[Id].FrameNbWithTrig / (float) ProInf.EvNbToProc ) * 100;
     
    ProAPlaneRes[Id].FramePCentWithHit = ( (float) ProAPlaneRes[Id].FrameNbWithHit / (float) ProInf.EvNbToProc ) * 100;
    
    if ( ProAPlaneRes[Id].FrameNbWithTrig != 0 ) {
      ProAPlaneRes[Id].CumFrameTrigNb = (float) ProAPlaneRes[Id].CumTotTrigNb / (float) ProAPlaneRes[Id].FrameNbWithTrig;
    }
    
    else {
      ProAPlaneRes[Id].CumFrameTrigNb = 0;      
    }
    
    
    if ( ProAPlaneRes[Id].FrameNbWithHit != 0 ) {
      ProAPlaneRes[Id].CumFrHitNb        = ( (float) ProAPlaneRes[Id].CumTotHitNb / (float) ProAPlaneRes[Id].FrameNbWithHit );
    }
    
    else {
      ProAPlaneRes[Id].CumFrHitNb = 0;
    }
    
    
    PubFPrintPlaneRes (Id);
    
    while (1) {
    
      // ------------------------------------------------
      // Plot cumul
      // ------------------------------------------------
      
      if ( ProAPlanePar[Id].PlotCum ) {
        
        // FSBB0__FPrintMatDiscriCumul ( VPtFrMatCumTotHitCnt );
        
        if ( ProPar.DispFullMatrix ) {
          FSBB0__FDiscriMatConvCumulToColVal ( VPtFrMatCumTotHitCnt, &PrivMatDispColor, ProPar.CumPlotGrayOrBlueLevels, ProPar.CumPlotHitOrHitCnt, 0 /* RevertLineDirection */ );
          err_error (( ERR_OUT, "---> Plot cumul request FULL matrix - Plane %d", Id ));
        }
        
        else {
          FSBB0__FConvMatDiscriCumToMatDiscriCumHalfScale ( VPtFrMatCumTotHitCnt, &PrivMatDiscriCumHalfScale );
          
          // FSBB0__FPrintMatDiscriCumulHalfScale ( &PrivMatDiscriCumHalfScale );
                  
          FSBB0__FDiscriMatConvCumulToColValHalfScale ( &PrivMatDiscriCumHalfScale, &PrivMatDispColorHalfScale, ProPar.CumPlotGrayOrBlueLevels, ProPar.CumPlotHitOrHitCnt, 0 /* RevertLineDirection */, 0 /* PrintLvl */ );
          err_error (( ERR_OUT, "---> Plot cumul request 1/2 matrix - Plane %d", Id ));
        }
        
        VRequestPlot = 1; // PLot request will be done at end of function
        break;
        
      } // End if (PlotCum)
  
      // -----------------------------------------------------------------------------------
      // Plot coincidence & Mode MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_PER_FRAME_6_COLORS
      // -----------------------------------------------------------------------------------
      
      if ( ProAPlanePar[Id].PlotCoin && (ProPar.ProcMode == MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_PER_FRAME_6_COLORS) ) {
              
        if ( ProPar.DispFullMatrix ) {
          FSBB0__FDiscriMatFullScaleConvCoinBitToColState ( &PrivMatDiscriCoin, &PrivMatDispColor, clWhite /* ColorZeroHit */, PrivAPlanePlotColor /* AColorOneHit */, clBlack /* ColorMultiHit */, 0 /* RevertLineDirection */ );
        }
        
        else {
          FSBB0__FConvMatDiscriBitCoinToMatDiscriBitCoinHalfScale ( &PrivMatDiscriCoin, &PrivMatDiscriBitHalfScale );
          FSBB0__FDiscriMatConvCoinBitToColStateHalfScale ( &PrivMatDiscriBitHalfScale, &PrivMatDispColorHalfScale, clWhite /* ColorZeroHit */, PrivAPlanePlotColor /* AColorOneHit */, clBlack /* ColorMultiHit */, 0 /* RevertLineDirection */ );
        }
        
        VRequestPlot = 1; // PLot request will be done at end of function
        break;
        
      } // End if (PlotCoin && MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_PER_FRAME_6_COLORS)
  
      // -----------------------------------------------------------------------------------
      // Plot coincidence & Mode MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_CUMUL_1_COLOR
      // -----------------------------------------------------------------------------------
      
      if ( ProAPlanePar[Id].PlotCoin && (ProPar.ProcMode == MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_CUMUL_1_COLOR) ) {
        
        if ( ProPar.DispFullMatrix ) {
          FSBB0__FDiscriMatConvCumulToColVal ( &PrivMatDiscriCoinCum, &PrivMatDispColor, ProPar.CumPlotGrayOrBlueLevels, ProPar.CumPlotHitOrHitCnt, 0 /* RevertLineDirection */ );
        }
        
        else {
          FSBB0__FConvMatDiscriCumToMatDiscriCumHalfScale ( &PrivMatDiscriCoinCum, &PrivMatDiscriCumHalfScale );
          FSBB0__FDiscriMatConvCumulToColValHalfScale     ( &PrivMatDiscriCumHalfScale, &PrivMatDispColorHalfScale, ProPar.CumPlotGrayOrBlueLevels, ProPar.CumPlotHitOrHitCnt, 0 /* RevertLineDirection */, 0 /* PrintLvl */ );
        }

        VRequestPlot = 1; // PLot request will be done at end of function
        break;
        
      } // End if (PlotCoin && MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_CUMUL_1_COLOR)
      
      // -----------------------------------------------------------------------------------
      // Plot coincidence & Mode MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_CUMUL_6_COLORS
      // -----------------------------------------------------------------------------------
      
      if ( ProAPlanePar[Id].PlotCoin && (ProPar.ProcMode == MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_CUMUL_6_COLORS ) ) {
        
        if ( ProPar.DispFullMatrix ) {
          FSBB0__FDiscriMatConvCumulCoinOrToColVal ( &PrivMatDiscriCoinCum, &PrivMatDispColor, PrivAPlanePlotColor /* AColorOneHit */, ProPar.CumPlotGrayOrBlueLevels, ProPar.CumPlotHitOrHitCnt, 0 /* RevertLineDirection */ );
        }
        
        else {
          FSBB0__FConvMatDiscriCumToMatDiscriCumHalfScale   ( &PrivMatDiscriCoinCum, &PrivMatDiscriCumHalfScale );
          FSBB0__FDiscriMatConvCumulCoinOrToColValHalfScale ( &PrivMatDiscriCumHalfScale, &PrivMatDispColorHalfScale, PrivAPlanePlotColor /* AColorOneHit */, ProPar.CumPlotGrayOrBlueLevels, ProPar.CumPlotHitOrHitCnt, 0 /* RevertLineDirection */, 0 /* PrintLvl */ );
        }
        
        VRequestPlot = 1; // PLot request will be done at end of function
        break;
        
      } // End if (PlotCoin && MAPS__TCDigTelMon_MODE_PLOT_PLANE_COIN_CUMUL_6_COLORS )
      

      break;
    } // End while (1)
    

  } // End if Last event 
  
  
  // ------------------
  // Plot request  
  // ------------------
  
  if ( VRequestPlot ) {
    
    if ( ProRequestPlot == 0  ) {
      ProRequestPlot = 1;
    }
    
  }
  
    
  return (VHitCnt);
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 17/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

FSBB0__TCTelMon::FSBB0__TCTelMon () : MAPS__TCDigTelMon () {

  err_error (( ERR_OUT, "TRACE - ProPar.PlaneNb=%d", ProPar.PlaneNb ));
  
  PrivFInit ();

  err_error (( ERR_OUT, "TRACE - ProPar.PlaneNb=%d", ProPar.PlaneNb ));
  
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 17/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

FSBB0__TCTelMon::~FSBB0__TCTelMon () {

  SInt32 Vi;

  // Free
  
  for ( Vi=0; Vi < FSBB0__TCTelMon__EV_LIST_MAX_CHAN_NB; Vi++ ) {
    free ( PrivAAListEvWithTrig[Vi] );
    free ( PrivAAListEvWithHit[Vi] );
  }
  
  free ( PrivAListEvWithHitAllPlanes );
  
  
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 17/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFBegin ( char* ErrLogFile, SInt8 EnableErrLog, SInt8 ErrLogLvl, SInt32 MaxBuffEvNb ) {
  
  if ( MaxBuffEvNb > MAPS__TCDigTelMon_MAX_EV_NB ) {
    err_retfail ( -1, (ERR_OUT,"MaxBuffEvNb=%d > MAPS__TCDigTelMon_MAX_EV_NB=%d", MaxBuffEvNb, MAPS__TCDigTelMon_MAX_EV_NB ) );
  }
  
  ProPar.MaxBuffEvNb = MaxBuffEvNb;
  
  err_retok (( ERR_OUT, "" ));
}
  
/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 23/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFConnectGui () {
  
  MAPS__TCDigTelMon::PubFConnectGui ();
  
  PubPt_ALbPlane[0]->Font->Color = FSBB0__TCTelMon__COL_PLANE_0;
  PubPt_ALbPlane[1]->Font->Color = FSBB0__TCTelMon__COL_PLANE_1;
  PubPt_ALbPlane[2]->Font->Color = FSBB0__TCTelMon__COL_PLANE_2;
  PubPt_ALbPlane[3]->Font->Color = FSBB0__TCTelMon__COL_PLANE_3;
  PubPt_ALbPlane[4]->Font->Color = FSBB0__TCTelMon__COL_PLANE_4;
  PubPt_ALbPlane[5]->Font->Color = FSBB0__TCTelMon__COL_PLANE_5;

  PubPt_GrpTelMon->Color = clSilver;
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 22/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFGetGuiPar () {    
  
  // --------------------------
  // Get parameters from GUI
  // --------------------------
  
  MAPS__TCDigTelMon::PubFGetGuiPar ();

  err_retok (( ERR_OUT, "" ));
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 22/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */



SInt32 FSBB0__TCTelMon::PubFStartRun ( SInt8 MapsNb)  {
  
  SInt8  ViPlane;
  SInt32 ViEv;
  void*  VPtMat;
  

  // ---------------------
  // Run in progress
  // ---------------------

  ProInf.RunInProgress = 1;

  // ---------------------
  // Set MAPS nb
  // ---------------------
  
  ProPar.MapsNb = MapsNb;
  
  // ---------------------
  // Reset Ev No to process
  // ---------------------
  
  ProInf.CurEvToProc = 0;

  // ---------------------
  // Allocate memory
  // ---------------------
  
  for ( ViPlane=0; ViPlane < ProPar.PlaneNb; ViPlane++) {
        
    // Intermediate buffers
    
    ProAPlaneRes[ViPlane].PtMatDiscriBit       = malloc ( sizeof (FSBB0__TMatDiscriBit) );
    err_retnull ( ProAPlaneRes[ViPlane].PtMatDiscriBit, (ERR_OUT,"Allocation of PtMatDiscriBit plane [%d] failed !", ViPlane) );
    
    ProAPlaneRes[ViPlane].PtMatCumTotHitCnt    = malloc ( sizeof (FSBB0__TMatDiscriCumul));
    err_retnull ( ProAPlaneRes[ViPlane].PtMatCumTotHitCnt, (ERR_OUT,"Allocation of PtMatCumTotHitCnt plane [%d] failed !", ViPlane) );
    
    // Events
    
    if ( ProPar.StoreEvents == 1 ) {
      
      for ( ViEv=0; ViEv < ProPar.MaxBuffEvNb; ViEv++ ) {
        VPtMat = malloc ( sizeof (FSBB0__TMatDiscriBit) );
        
        if ( VPtMat = NULL) {
          err_retfail ( -1, (ERR_OUT,"Allocation of plane[%d] event[%d] failed !",ViPlane, ViEv) );
        }
                
        ProAPlaneData[ViPlane].AEvPt[ViEv] = VPtMat;
        
      } // End for ViEv
      
    } // End if StoreEvents
    
  } // End for
  
  
  err_retok (( ERR_OUT, "" ));
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 22/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFStopRun () {

  SInt8  ViPlane;
  SInt32 ViEv;
  
  // ---------------------
  // Run stopped
  // ---------------------
  
  ProInf.RunInProgress = 0;

  // ---------------------
  // DeAllocate memory
  // ---------------------
  
  for ( ViPlane=0; ViPlane < ProPar.PlaneNb; ViPlane++) {
    
    // Intermediate buffers
    
    if ( ProAPlaneRes[ViPlane].PtMatDiscriBit    != NULL ) free ( ProAPlaneRes[ViPlane].PtMatDiscriBit    );
    if ( ProAPlaneRes[ViPlane].PtMatCumTotHitCnt != NULL ) free ( ProAPlaneRes[ViPlane].PtMatCumTotHitCnt );
    
    // Events
    
    for ( ViEv=0; ViEv < MAPS__TCDigTelMon_MAX_EV_NB; ViEv++ ) {
      if ( ProAPlaneData[ViPlane].AEvPt != NULL ) {
        free ( ProAPlaneData[ViPlane].AEvPt );
      }
    }
    
  } // End for
  
  

  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 24/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFStartMon () {
  
  ProPar.MonEnabled = 1;

  PubFSetGuiPar ();

  PubPt_GrpTelMon->Color = clBtnFace;
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 24/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFStopMon () {
  
  ProPar.MonEnabled = 0;

  PubFSetGuiPar ();
  
  PubPt_GrpTelMon->Color = clSilver;
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 01/08/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFProcOnlyEvWithHitOnAllPlanes ( SInt8 Yes ) {
  
  ProPar.ProcOnlyFrWithHitOnAllPlanes = Yes;
  PriEnListEvWitHitUpdate             = !Yes;
  PriEnListEvWithTrigUpdate           = !Yes;
  
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 22/07/2009 - 06/08/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFAddEvents ( SInt8 MapsName, SInt8 MapsNb, SInt32 EvNb, FSBB0__TZsFFrameRaw* PtSrc, SInt8 MakeLocalCpy, SInt8 OffLineCall ) {
  
  SInt8               ViPlane;
  SInt32              ViFramePlane0ofEvent;
  SInt32              ViFrame;
  SInt32              ViEvInAcq;
  SInt32              VTrigSigLine;
  SInt32              VEvHitCnt;
  SInt32              VPlaneHitCnt;
  SInt8               VFlgHitOnAllPlane;
  SInt8               VFlgSingleHitOnEachPlane;
  SInt32              VLocalCpySz;
  ASIC__TFrameStatus* VPtEvStatus;
  static UInt32       VTimeBeg;
  static UInt32       VTimeEnd;
  
  SInt8               ViDbgMaps;
  UInt16              VDbgTrigNb;
  UInt16              VADbgTrigVal[3];
  UInt16              VADbgTrigLine[3];
  UInt16              VADbgTrigClock[3];
  
  err_error (( ERR_OUT, "MapsName=%d - MapsNb=%d - EvNb=%d", MapsName, MapsNb, EvNb ));
  err_error (( ERR_OUT, "" ));
  
  for ( ViDbgMaps=0; ViDbgMaps < MapsNb; ViDbgMaps++ ) {
#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
    VDbgTrigNb         = (PtSrc[ViDbgMaps].Zero  & 0xFFFF0000) >> 16;
    VADbgTrigVal[0]    = (PtSrc[ViDbgMaps].Zero  & 0x0000FFFF);
    VADbgTrigVal[1]    = (PtSrc[ViDbgMaps].Zero2 & 0xFFFF0000) >> 16;
    VADbgTrigVal[2]    = (PtSrc[ViDbgMaps].Zero2 & 0x0000FFFF);
#endif
    
    VADbgTrigLine[0]   = VADbgTrigVal[0] / 16;
    VADbgTrigLine[1]   = VADbgTrigVal[1] / 16;
    VADbgTrigLine[2]   = VADbgTrigVal[2] / 16;
    
    VADbgTrigClock[0]  = VADbgTrigVal[0] % 16;
    VADbgTrigClock[1]  = VADbgTrigVal[1] % 16;
    VADbgTrigClock[2]  = VADbgTrigVal[2] % 16;
    
    err_error (( ERR_OUT, "=======================================================================================" ));
    err_error (( ERR_OUT, "ViDbgMaps=%d : AsicNo=%d - AcqNo=%d - Header=%x", ViDbgMaps, PtSrc[ViDbgMaps].SStatus.AsicNo, PtSrc[ViDbgMaps].SStatus.AcqNo, PtSrc[ViDbgMaps].Header ));
//    err_error (( ERR_OUT, "--> Trailer=%x", PtSrc[ViDbgMaps].Trailer ));
//    err_error (( ERR_OUT, "--> Zero  H=%d - Zero  L=%d", (PtSrc[ViDbgMaps].Zero  & 0xFFFF0000) >> 16, (PtSrc[ViDbgMaps].Zero  & 0x0000FFFF) ));
//    err_error (( ERR_OUT, "--> Zero2 H=%d - Zero2 L=%d", (PtSrc[ViDbgMaps].Zero2 & 0xFFFF0000) >> 16, (PtSrc[ViDbgMaps].Zero2 & 0x0000FFFF) ));
    err_error (( ERR_OUT, "---------------------------------------------------------------------------------------" ));
    err_error (( ERR_OUT, "--> Trig Nb = %d", VDbgTrigNb ));
    err_error (( ERR_OUT, "--> Trig [0] : Line %4d - clock %4d", VADbgTrigLine[0], VADbgTrigClock[0] ));
    err_error (( ERR_OUT, "--> Trig [1] : Line %4d - clock %4d", VADbgTrigLine[1], VADbgTrigClock[1] ));
    err_error (( ERR_OUT, "--> Trig [2] : Line %4d - clock %4d", VADbgTrigLine[2], VADbgTrigClock[2] ));
    err_error (( ERR_OUT, "---------------------------------------------------------------------------------------" ));
//#ifndef FSBB0__APP_IGNORE_GC_MOD_220514
    err_error (( ERR_OUT, "Info Trigger : Line %4d - clock %4d", PtSrc[ViDbgMaps].SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE], PtSrc[ViDbgMaps].SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_CLK] ));
//#endif
    err_error (( ERR_OUT, "---------------------------------------------------------------------------------------" ));    
        
  }

  err_error (( ERR_OUT, "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" ));
  
  if ( (ProPar.MonEnabled == 0) && (OffLineCall == 0) ) {
    return (0);
  }

  // Check parameters

  err_retnull ( PtSrc, (ERR_OUT,"PtSrc = NULL") );
  
  if ( MapsName != ProPar.MapsName ) {
    err_retfail ( -1, (ERR_OUT,"Bad MapsName=%d <> ProPar.MapsName=%d", MapsName, ProPar.MapsName ) );
  }
  
  if ( MapsNb != ProPar.MapsNb ) {
    err_retfail ( -1, (ERR_OUT,"Bad MapsNb=%d <> ProPar.MapsNb=%d", MapsNb, ProPar.MapsNb ) );
  }

  // make a copy of Acq event nb, for off-line processing call of this function
  
  PrivAcqEvNb = EvNb;

  // Make a local copy if required
  
  if ( MakeLocalCpy ) {
        
    if ( PrivPtAcqData != NULL ) {
      free ( PrivPtAcqData );
    }
    
    VLocalCpySz = MapsNb * EvNb * sizeof (FSBB0__TZsFFrameRaw);
    
    PrivPtAcqData = (FSBB0__TZsFFrameRaw*) malloc ( VLocalCpySz );
    
    if ( PrivPtAcqData == NULL ) {
      err_error (( ERR_OUT, "Allocation of buffer for local copy of %d bytes ... failed !", VLocalCpySz ));
    }
    
    else {
      memcpy ( PrivPtAcqData, PtSrc, VLocalCpySz );
      msg (( MSG_OUT, "Allocation of buffer AND local copy of %d Kbytes done :-)", VLocalCpySz / 1024 ));
      err_error (( ERR_OUT, "Allocation of buffer for local copy of %d Kbytes done :-)", VLocalCpySz / 1024 ));
    }
    
  }
    
  // Read GUI parameters
  
  PubFGetGuiPar ();


  // Update processing mode flags
  
  PrivListEvWithHitAllPlanesCurProcMode = ProPar.ListHitAllPlanesMode; 

  // ----------------------------------------
  // If beginning of processing
  // ----------------------------------------
  
  
  if ( ProInf.CurEvToProc == 0 ) {
    
    PrivStopProc = 0;
    
    VTimeBeg = GetTickCount (); // Get time of beginning of processing
    
    msg (( MSG_OUT, "----------> PubFAddEvents => Reset all results" ));
    
    // Reset all coin destination matrices ( common for all planes )
    
    memset ( &PrivMatDiscriCoin   , 0, sizeof (FSBB0__TMatDiscriBit) );
    memset ( &PrivMatDiscriCoinCum, 0, sizeof (FSBB0__TMatDiscriCumul) );

    // Reset list & list index & full flag
    //
    // -> Must be done HERE
    // -> MUST NOT be done at end of this function when ProInf.EvNbToProc is reached
    //    because user will want to plot theses results at end of processing

    if ( PriEnListEvWithTrigUpdate == 1 ) {

      for ( ViPlane=0; ViPlane < FSBB0__TCTelMon__EV_LIST_MAX_CHAN_NB; ViPlane++ ) {
        memset ( PrivAAListEvWithTrig[ViPlane], 0, FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB * sizeof (ASIC__TFrameStatus) );
      }

      PrivListEvWithTrigIndex = 0;
      PrivListEvWithTrigFull  = 0;
    } // End if ( PriEnListUpdate == 1 )

    if ( PriEnListEvWitHitUpdate == 1 ) {

      for ( ViPlane=0; ViPlane < FSBB0__TCTelMon__EV_LIST_MAX_CHAN_NB; ViPlane++ ) {
        memset ( PrivAAListEvWithHit[ViPlane], 0, FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB * sizeof (ASIC__TFrameStatus) );
      }

      memset ( PrivAListEvWithHitAllPlanes, 0, FSBB0__TCTelMon__EV_LIST_MAX_ELT_NB * sizeof (FSBB0__TCTelMon_TEltListEvWithHitAllPlanes) );

      PrivListEvWithHitIndex  = 0;
      PrivListEvWithHitFull   = 0;

      PrivListEvWithHitAllPlanesIndex = 0;
      PrivListEvWithHitAllPlanesFull  = 0;

    } // End if ( PriEnListUpdate == 1 )


  }
  
  // Results set
  
  ProRes.AcqFrNb = EvNb;

  // Processing mode selection
  // - One acq                => number of events received by server
  // - Events number from GUI => can be less or more than one Acq
  
  if ( ProPar.ProcOneAcq ) {
    ProInf.EvNbToProc = EvNb;
  }
  
  else {
    ProInf.EvNbToProc = ProPar.ProcEvNb;
  }
    
  ProInf.LastEvToProc = ProInf.EvNbToProc - 1;
    
  msg (( MSG_OUT, "PubFAddEvents => MapsName=%d - MapsNb=%d - EvNb=%d (DAQ) - ProcOneAcq=%d - EvNbToProc=%d", MapsName, MapsNb, EvNb, ProPar.ProcOneAcq, ProInf.EvNbToProc ));
  
  // Process events


  for ( ViEvInAcq=0; ViEvInAcq < EvNb; ViEvInAcq++ ) {
    
    if ( ProPar.ProcOnlyFrWithHitOnAllPlanes == 1) {
      PrivStopProc = PubFIsEvLastOfListEvWithHitOnAllPlanes ( ViEvInAcq );
    }
    
    else {
      PrivStopProc = 0;
    }

    
    VFlgHitOnAllPlane        = 1;
    VFlgSingleHitOnEachPlane = 1;
  
    if ( ProInf.CurEvToProc < ProInf.EvNbToProc ) {
    
      if ( ViEvInAcq % 100 == 0 ) {
        FDecInt2Edit ( ViEvInAcq, PubPt_DispCurProcFr );
        Application->ProcessMessages ();
      }
  
      ViFramePlane0ofEvent = MapsNb * ViEvInAcq;
      VTrigSigLine         = PtSrc[ViFramePlane0ofEvent].SStatus.ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE];
      VPtEvStatus          = &PtSrc[ViFramePlane0ofEvent].SStatus;
      
      // If Process all frames OR Process frame with trigger AND there is a Trigger on this frame

      // if ( (ProPar.ProcOnlyFrWithTrig == 0) || (VTrigSigLine >= 0) ) {
      // if ( (ProPar.ProcOnlyFrWithHitOnAllPlanes == 0) || (PubFIsEvInListEvWithHitOnAllPlanes (ViEvInAcq) == 1) ) {

      if ( ((ProPar.ProcOnlyFrWithTrig == 0) || (VTrigSigLine >= 0)) && ((ProPar.ProcOnlyFrWithHitOnAllPlanes == 0) || (PubFIsEvInListEvWithHitOnAllPlanes (ViEvInAcq) == 1)) ) {
        
        // Reset event hits counter
        
        VEvHitCnt = 0;
        
        // Loop on all selected planes
        
        for ( ViPlane=0; ViPlane < ProPar.PlaneNb; ViPlane++) {
          
          if ( ProAPlanePar[ViPlane].Process == 1 ) {
            
            ViFrame = ViFramePlane0ofEvent + ViPlane;
            VPlaneHitCnt = ProFProcessPlane ( ViEvInAcq, ViPlane, &PtSrc[ViFrame] );
            VEvHitCnt    += VPlaneHitCnt;
            
            if ( VPlaneHitCnt != 1 ) {
              VFlgSingleHitOnEachPlane = 0;
            }
            
            if ( VPlaneHitCnt > 0 ) {
              PrivFAddEvInListEvWithHit ( ViPlane, VPtEvStatus, VPlaneHitCnt, 0 /* HitOnAllPlanes */, 0 /* SingleHitOnEachPlane */ );
            }
            
            else {
              VFlgHitOnAllPlane = 0; // Reset flag in at least one plane is without hit
            }
             
          }
        }
                
        // If trigger ( -1 => no trigger ) => store in list

        if ( VTrigSigLine >= 0 ) {
          PrivFAddEvInListEvWithTrig ( FSBB0__TCTelMon__EV_LIST_CHAN_ID_CUMUL, VPtEvStatus, VEvHitCnt );
        }
        
        // If hits => store in list
        
        if ( VEvHitCnt > 0 ) {
          PrivFAddEvInListEvWithHit ( FSBB0__TCTelMon__EV_LIST_CHAN_ID_CUMUL, VPtEvStatus, VEvHitCnt, VFlgHitOnAllPlane, VFlgSingleHitOnEachPlane );
        }
        
        // Results 
        
        ProRes.ProFrNo = ProInf.CurEvToProc;
        
        ++ProInf.CurEvToProc;
        
      }
      

    }
    
    else {
      break; // End of processing => We can reach ProInf.EvNbToProc while all events of current Acq are not needed for processing
    }
    
  } // End for
  
  // If end of processing => Reset event index 
  
  if ( ProInf.CurEvToProc >= ProInf.EvNbToProc ) {

    msg (( MSG_OUT, "----------> PubFAddEvents => Print results" ));
    
    ProInf.CurEvToProc = 0;
    
    // Get time of end of processing
    
    VTimeEnd = GetTickCount ();
    ProRes.ProTimeMs = VTimeEnd - VTimeBeg;
    
    // Display results
    
    PubFSetGuiRes ();
    
    // Stop monitoring if required
    
    if ( ProPar.StopAtEndOfProc ) {
      PubFStopMon ();
    }
    
  }    

  // Display status

  PubFSetGuiStatus ();
      

  err_retok (( ERR_OUT, "" ));
}



/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 26/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFProcessOffLineCurAcq () {
  
  
  // Stop on-line monitoring
  
  PubFStopMon ();
  
  // Get GUI parameters => In order to get user choices
  
  PubFGetGuiPar ();
  
  // Force mode to "Process one Acq" AND update GUI fields
  
  ProPar.ProcOneAcq = 1;
  
  PubFSetGuiPar ();

  // Don't update list if processing of ONLY events with trigger
  
  if ( ProPar.ProcOnlyFrWithTrig == 1 ) {
    PriEnListEvWithTrigUpdate = 0;
  }
  
  else {
    PriEnListEvWithTrigUpdate = 1;
  }

  // Check buffer of current acq data
  
  err_retnull ( PrivPtAcqData, (ERR_OUT,"No data in buffer => PrivPtAcqData == NULL !") );
    
  // ----------------------------------------------------------------------------------------------------------------------
  // Reset Ev No to process
  // ----------------------------------------------------------------------------------------------------------------------
  // Because on some processing it may not be reset at end of processing, in case event nb to process has not been reached
  // for example : processing of only events with trigger
  // ----------------------------------------------------------------------------------------------------------------------
  //
  // WARNING => IT MUST BE CHECKED if this init DONE HERE IS compatible WITH ALL sw operating modes !!!
  //         => It may CAUSE BUGS in other operating modes !!!
  //
  // 15/08/09
  // ----------------------------------------------------------------------------------------------------------------------
  
  ProInf.CurEvToProc = 0;
  
    
  // Execute PubFAddEvents (...) in off-line mode
  
  PubFAddEvents ( ProPar.MapsName, ProPar.MapsNb, PrivAcqEvNb, PrivPtAcqData/* PtSrc */, 0 /* MakeLocalCpy */, 1 /* OffLineCall */ );

  err_retok (( ERR_OUT, "" ));
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 04/08/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFProcessOffLineCurAcq2 () {

  // Stop on-line monitoring
  
  PubFStopMon ();
  
  // Force mode to "Process one Acq" AND update GUI fields
  
  ProPar.ProcOneAcq = 1;
  
  // Execute PubFAddEvents (...) in off-line mode
  
  PubFAddEvents ( ProPar.MapsName, ProPar.MapsNb, PrivAcqEvNb, PrivPtAcqData/* PtSrc */, 0 /* MakeLocalCpy */, 1 /* OffLineCall */ );
  
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 26/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFGotoFirstFrame () {
  
  ProPar.GotoRawFrNo = 0;
  
  PubFSetGuiParGotoFr ();
  
  if ( ProPar.MonEnabled == 0 ) PubFProcessOffLineCurAcq ();
  
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 26/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFGotoPrevFrame () {
  
  if ( ProPar.GotoRawFrNo > 0 ) {
    --ProPar.GotoRawFrNo;
  }

  PubFSetGuiParGotoFr ();
  
  if ( ProPar.MonEnabled == 0 ) PubFProcessOffLineCurAcq ();
  
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 26/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFGotoNextFrame () {
  
  if ( ProPar.GotoRawFrNo < PrivAcqEvNb ) {
    ++ProPar.GotoRawFrNo;
  }

  PubFSetGuiParGotoFr ();
  
  if ( ProPar.MonEnabled == 0 ) PubFProcessOffLineCurAcq ();
  
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 26/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFGotoLastFrame () {
  
  if ( PrivAcqEvNb > 0 ) {
    ProPar.GotoRawFrNo = PrivAcqEvNb-1;
  }
  
  else {
    ProPar.GotoRawFrNo = -1; // No frame available, < 0 tested when we try to access data
  }

  PubFSetGuiParGotoFr ();
  
  if ( ProPar.MonEnabled == 0 ) PubFProcessOffLineCurAcq ();
  
}
    


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 26/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubPrintListEvWithTrig ( SInt8 Verbose ) {

  SInt32              Vi;
  ASIC__TFrameStatus* VPt;
  
  
  msg (( MSG_OUT, "-----------------------------" ));
  msg (( MSG_OUT, "- Print events with trigger -" ));
  msg (( MSG_OUT, "-----------------------------" ));
  msg (( MSG_OUT, " %d events - List full ? %d  ", PrivListEvWithTrigIndex, PrivListEvWithTrigFull ));
  msg (( MSG_OUT, "-----------------------------" ));

  VPt = PrivAAListEvWithTrig[FSBB0__TCTelMon__EV_LIST_CHAN_ID_CUMUL];

  if ( Verbose ) {
    for ( Vi=0; Vi < PrivListEvWithTrigIndex; Vi++ ) {
      msg (( MSG_OUT, "[%4d] : EvInRun=%4d - Acq=%4d - EvInAcq=%4d - TSigLine=%4d - HitCnt=%4d", Vi, VPt->FrameNoInRun, VPt->AcqNo, VPt->FrameNoInAcq, VPt->ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE], VPt->HitCnt  ));
      ++VPt;
    }
  }
  
  else {
    for ( Vi=0; Vi < PrivListEvWithTrigIndex; Vi++ ) {
      msg (( MSG_OUT, "[%4d] : EvInRun=%4d - TSigLine=%4d - HitCnt=%4d", Vi, VPt->FrameNoInRun, VPt->ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE], VPt->HitCnt  ));
      ++VPt;
    }    
  }

    
  msg (( MSG_OUT, "-----------------------------" ));
    
  
  err_retok (( ERR_OUT, "" ));
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 26/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubPrintListEvWithHit  ( SInt8 Verbose ) {

  SInt32              Vi;
  ASIC__TFrameStatus* VPtPlane0;
  ASIC__TFrameStatus* VPtPlane1;
  ASIC__TFrameStatus* VPt;
  
  msg (( MSG_OUT, "-----------------------------" ));
  msg (( MSG_OUT, "- Print events with hit     -" ));
  msg (( MSG_OUT, "-----------------------------" ));
  msg (( MSG_OUT, " %d events - List full ? %d  ", PrivListEvWithHitIndex, PrivListEvWithHitFull ));
  msg (( MSG_OUT, "-----------------------------" ));


  VPtPlane0 = PrivAAListEvWithHit[0];
  VPtPlane1 = PrivAAListEvWithHit[1];
  VPt       = PrivAAListEvWithHit[FSBB0__TCTelMon__EV_LIST_CHAN_ID_CUMUL];
  
  if ( Verbose ) {
    for ( Vi=0; Vi < PrivListEvWithHitIndex; Vi++ ) {
      msg (( MSG_OUT, "[%4d] : EvInRun=%4d - Acq=%4d - EvInAcq=%4d - TSigLine=%4d - HitCnt[C]=%4d", Vi, VPt->FrameNoInRun, VPt->AcqNo, VPt->FrameNoInAcq, VPt->ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE], VPt->HitCnt  ));
      ++VPt;
      ++VPtPlane0;
      ++VPtPlane1;
    }
  }
  
  else {
    for ( Vi=0; Vi < PrivListEvWithHitIndex; Vi++ ) {
      msg (( MSG_OUT, "[%4d] : EvInRun=%4d - TSigLine=%4d - HitCnt [0]=%4d / [1]=%4d / [C]=%4d", Vi, VPt->FrameNoInRun, VPt->ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE], VPtPlane0->HitCnt, VPtPlane1->HitCnt, VPt->HitCnt  ));
      ++VPt;
      ++VPtPlane0;
      ++VPtPlane1;
    }
  }
    
  
  msg (( MSG_OUT, "-----------------------------" ));
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 01/08/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubPrintListEvWithHitOnAllPlanes  ( SInt8 Verbose ) {
  
  SInt32              Vi;
  ASIC__TFrameStatus* VPtP0;
  ASIC__TFrameStatus* VPtP1;
  ASIC__TFrameStatus* VPt;
  FSBB0__TCTelMon_TEltListEvWithHitAllPlanes* VPtRec;
  
  
  if ( ProPar.ListHitAllPlanesMode != PrivListEvWithHitAllPlanesCurProcMode ) {
    msg (( MSG_OUT, "----------------------------------------------------------" ));
    msg (( MSG_OUT, "- Please process data before with <Off-Line Proc> button -" ));
    msg (( MSG_OUT, "----------------------------------------------------------" ));
    err_retok (( ERR_OUT, "" ));
  }
  
  
  msg (( MSG_OUT, "--------------------------------------" ));
  
  
  switch ( ProPar.ListHitAllPlanesMode ) {
    
    case MAPS__TCDigTelMon_LIST_HIT_ALL_PLANES_MODE__HIT_ALL_PLANES  : {
      msg (( MSG_OUT, "- Print events with hit on ALL planes -" ));
      break; }
    
    case MAPS__TCDigTelMon_LIST_HIT_ALL_PLANES_MODE__SINGLE_EACH_PLANE : {
      msg (( MSG_OUT, "- Print events with single hit on EACH plane -" ));
      break; }
    
    default : {
      msg (( MSG_OUT, "- Error => Unknown list mode = %d -", ProPar.ListHitAllPlanesMode ));
      break; }
    
  }
    
  msg (( MSG_OUT, "------------------------------------------------------" ));
  msg (( MSG_OUT, " %d events - List full ? %d  ", PrivListEvWithHitAllPlanesIndex, PrivListEvWithHitAllPlanesFull ));
  msg (( MSG_OUT, "------------------------------------------------------" ));
  
  
  VPtRec       = PrivAListEvWithHitAllPlanes;
  
  if ( Verbose ) {
    for ( Vi=0; Vi < PrivListEvWithHitAllPlanesIndex; Vi++ ) {
      VPt = &VPtRec->FrStatus;
      msg (( MSG_OUT, "[%4d] : EvInRun=%4d - Acq=%4d - EvInAcq=%4d - TSigLine=%4d - HitCnt[C]=%4d", Vi, VPt->FrameNoInRun, VPt->AcqNo, VPt->FrameNoInAcq, VPt->ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE], VPt->HitCnt  ));
      ++VPtRec;
    }
  }
  
  else {
    for ( Vi=0; Vi < PrivListEvWithHitAllPlanesIndex; Vi++ ) {

      VPt = &VPtRec->FrStatus;

      if ( (VPtRec->IndexInEvWithHitList >=0) && (VPtRec->IndexInEvWithHitList < PrivListEvWithHitIndex) ) {
        VPtP0 = &PrivAAListEvWithHit[0][VPtRec->IndexInEvWithHitList];
        VPtP1 = &PrivAAListEvWithHit[1][VPtRec->IndexInEvWithHitList];
        msg (( MSG_OUT, "[%4d] : EvInAcq=%4d - TSigLine=%4d - HitCnt [0]=%4d / [1]=%4d / [C]=%4d", Vi, VPt->FrameNoInAcq, VPt->ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE], VPtP0->HitCnt, VPtP1->HitCnt, VPt->HitCnt  ));
      }
      
      else {
        msg (( MSG_OUT, "[%4d] : EvInAcq=%4d - TSigLine=%4d - HitCnt [0]=! / [1]=! / [C]=%4d", Vi, VPt->FrameNoInAcq, VPt->ATrigRes[ASIC__FSBB0_TRIG_RES__SIG_LINE], VPt->HitCnt  ));
      }
        
      ++VPtRec;
    }
  }
  
  
  msg (( MSG_OUT, "-----------------------------" ));
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 04/08/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubAllocResRun () {
  
  // Res run alloc / free handling
  
  if ( PrivPtResRun != NULL ) {
    free ( PrivPtResRun );
  }
  
    
    PrivPtResRun = (FSBB0__TCTelMon_TResRun*) malloc ( sizeof (FSBB0__TCTelMon_TResRun) );
    
    if ( PrivPtResRun == NULL ) {
      err_error (( ERR_OUT, "Allocation of result run failed !" ));
    }
    
    else {
      
      memset ( PrivPtResRun, 0, sizeof (FSBB0__TCTelMon_TResRun) );
      
      PrivPtResRun->EvNb    = 0;
      PrivPtResRun->PlaneNb = 2;
    }
    
    
  return (0);
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 06/08/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFreeResRun () {
    
  if ( PrivPtResRun != NULL ) {
    free ( PrivPtResRun );
  }
  
  
  PrivPtResRun = NULL;  
  
  return (0);
}




/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 02/08/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubPrintResRun () {
  
  SInt32                ViEv;
  SInt32                ViHit;
  FSBB0__TCTelMon_TTrack* VPt;

  if ( PrivPtResRun == NULL ) {
    msg (( MSG_OUT, "-------------------------------------" ));
    msg (( MSG_OUT, "- ERROR => Res run is NOT allocated - " ));
    msg (( MSG_OUT, "-------------------------------------" ));
    err_retfail ( -1, (ERR_OUT,"PrivPtResRun == NULL") );
  }

  msg (( MSG_OUT, "--------------------------------------" ));
  msg (( MSG_OUT, "- Result run                         -" ));
  msg (( MSG_OUT, "--------------------------------------" ));
  msg (( MSG_OUT, " %d events - List full ? %d           ", PrivPtResRun->EvNb, PrivPtResRun->Full ));
  msg (( MSG_OUT, "--------------------------------------" ));
  

  for ( ViEv=0; ViEv < PrivPtResRun->EvNb; ViEv++) {
    
    VPt = &PrivPtResRun->ATracks[ViEv];

    if ( VPt->AHitsNbPerPlane[0] != VPt->AHitsNbPerPlane[1] ) {
      msg (( MSG_OUT, "WARNING : Hit nb P0 = %d <> Hit nb P1 = %d => Use P0 for print", VPt->AHitsNbPerPlane[0], VPt->AHitsNbPerPlane[1] ));
    }

    msg (( MSG_OUT, "=================================================================" ));
    
    for ( ViHit=0; ViHit < VPt->AHitsNbPerPlane[0]; ViHit++) {
      msg (( MSG_OUT, "Ev %4d - EvInRun %4d - Hit %4d : P0 [x=%4d, y=%4d] - P1[x=%4d, y=%4d]", ViEv, VPt->EvNoInRun, ViHit, VPt->AAHits[0][ViHit].x, VPt->AAHits[0][ViHit].y, VPt->AAHits[1][ViHit].x, VPt->AAHits[1][ViHit].y ));
    }

  }


  msg (( MSG_OUT, "-----------------------------" ));
  
  
  err_retok (( ERR_OUT, "" ));
}
  
/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 02/08/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubSaveResRun  ( char* FileName ) {

  SInt32 VTotResRecordSz;

  if ( PrivPtResRun == NULL ) {
    msg (( MSG_OUT, "-------------------------------------" ));
    msg (( MSG_OUT, "- ERROR => Res run is NOT allocated - " ));
    msg (( MSG_OUT, "-------------------------------------" ));
    err_retfail ( -1, (ERR_OUT,"PrivPtResRun == NULL") );
  }
  
  FIL__TCBinFile VResFile ( "x:\\log\\err_TCBinFile.txt", 1 /* EnableErrLog */, ERR_LOG_LVL_WARNINGS_ERRORS );
  
  err_retnull ( FileName, (ERR_OUT,"FileName == NULL") );

  VTotResRecordSz = sizeof (FSBB0__TCTelMon_TResRun);

  VResFile.PubFConf   ( FileName, 0 /* WriteRead => 0=Write 1=Read */ , VTotResRecordSz /* MaxBlocSz */, VTotResRecordSz /* BlocSz */, 1 /* FlushAfterWrite */, 0 /* MeasTime */ );
  VResFile.PubFCreate ();
  VResFile.PubFSeqWrite  ( PrivPtResRun, VTotResRecordSz );
  
  VResFile.PubFClose ();
  
  err_retok (( ERR_OUT, "" ));
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 01/08/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFIsEvInListEvWithHitOnAllPlanes ( SInt32 EvNo ) {
  
  SInt8               VFound;
  SInt32              Vi;
  FSBB0__TCTelMon_TEltListEvWithHitAllPlanes* VPtRec;
    
  
  VPtRec = PrivAListEvWithHitAllPlanes;
  
  VFound = 0;
  
  // Acq processing
  
  if ( PubAcqOffLineProcOrRunOffLineProc == 0 ) {

    for ( Vi=0; Vi < PrivListEvWithHitAllPlanesIndex; Vi++ ) {
    
      if ( EvNo == VPtRec->FrStatus.FrameNoInRun ) {
        err_error (( ERR_OUT, "TRACE : EltNo %4d - EvNo %4d - FrNoInAcq %4d => Hit on all planes", Vi, VPtRec->FrStatus.FrameNoInRun, VPtRec->FrStatus.FrameNoInAcq ));
        VFound = 1;
        break;
      }
      ++VPtRec;
    }

  }
  
  // Run processing via N Acq processing
  
  else {

    for ( Vi=0; Vi < PrivListEvWithHitAllPlanesIndex; Vi++ ) {
      
      if ( EvNo == VPtRec->FrStatus.FrameNoInAcq ) {
        err_error (( ERR_OUT, "TRACE : EltNo %4d - EvNo %4d - FrNoInAcq %4d => Hit on all planes", Vi, VPtRec->FrStatus.FrameNoInRun, VPtRec->FrStatus.FrameNoInAcq ));
        VFound = 1;
        break;
      }
        ++VPtRec;
    }
      
  }
  

  return (VFound);  
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 01/08/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt32 FSBB0__TCTelMon::PubFIsEvLastOfListEvWithHitOnAllPlanes ( SInt32 EvNo ) {
  
  SInt32              Vi;
  FSBB0__TCTelMon_TEltListEvWithHitAllPlanes* VPtRec;
  
  
  VPtRec = PrivAListEvWithHitAllPlanes;
  
  if ( EvNo == VPtRec[PrivListEvWithHitAllPlanesIndex - 1].FrStatus.FrameNoInRun ) {
    return (1);
  }
  
  return (0);  
}


/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 24/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

SInt8* FSBB0__TCTelMon::PubFGetPtDispFullMatrix () {
  return ( &ProPar.DispFullMatrix );
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 24/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

FSBB0__TMatDiscriColor* FSBB0__TCTelMon::PubFGetPtFullMatCol () {
  return ( &PrivMatDispColor );
}

/* DOC_FUNC_BEGIN */
/* ===================================================================================
Class     :
Prototype :
Goal      :
Inputs    :
Ouputs    :
Remark    :
Date      : 24/07/2009
Doc date  : //2004
Author    : Gilles CLAUS - Labo IPHC - DRS - gilles.claus@ires.in2p3.fr */
/* =================================================================================== */
/* DOC_FUNC_END */

FSBB0__TMatDiscriColorHalfScale* FSBB0__TCTelMon::PubFGetPtHalfMatCol () {
  return ( &PrivMatDispColorHalfScale );
}
    
#endif


#endif


