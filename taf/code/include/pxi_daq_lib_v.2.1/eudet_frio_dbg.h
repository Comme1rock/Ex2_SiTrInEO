 
/*******************************************************************************
File      : x:\lib\win\eudet_frio\eudet_frio.h
Goal      : Functions prototypes of flex rio board library for EUDET Mimosa 26 DAQ
Prj date  : 05/08/2010
File date : 05/08/2010
Doc date  : 05/08/2010
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


#ifndef EUDET_FRIO_DBG_H

#include "func_header.def"



// 06/11/2010 -> 2

// FHEAD_DLL_IE (APP_DLL_IMPORT_EXPORT, char* DIU_FGetVersion ();)
// FHEAD ( SInt32 REF_FHello ();)

FHEAD_DLL_IE (APP_DLL_IMPORT_EXPORT, SInt32 EFRIO__FDbgMeasRamCpyTime ( SInt8 Cmd, SInt32 SzMb );)
FHEAD_DLL_IE (APP_DLL_IMPORT_EXPORT, SInt32 EFRIO__FDbgCheckTrigAlgo ( SInt8 Cmd, SInt8 TriggerNb, SInt8 AddFrameBefore, SInt8 AddFrameAfter );)
  

#ifndef APP_DLL_IMPORT_EXPORT
  #ifndef EUDET_FRIO_DBG_H
    #define EUDET_FRIO_DBG_H
    #endif
#endif


#endif