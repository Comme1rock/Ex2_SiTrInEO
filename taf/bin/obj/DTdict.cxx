// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIromaindISiTrInEO_EX2dItafdIbindIobjdIDTdict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "TNTBoardReader.h"
#include "PXIBoardReader.h"
#include "PXIeBoardReader.h"
#include "GIGBoardReader.h"
#include "IMGBoardReader.h"
#include "BoardReader.h"
#include "VMEBoardReader.h"
#include "MCBoardReader.h"
#include "BoardReaderIHEP.h"
#include "AliMIMOSA22RawStreamVASingle.h"
#include "DecoderM18.h"
#include "DecoderGeant.h"
#include "DSession.h"
#include "DSetup.h"
#include "DAcq.h"
#include "DTracker.h"
#include "DPlane.h"
#include "DStrip.h"
#include "DHit.h"
#include "DTrack.h"
#include "DLine.h"
#include "DR3.h"
#include "DCut.h"
#include "DAlign.h"
#include "DEvent.h"
#include "DEventMC.h"
#include "DParticle.h"
#include "DGlobalTools.h"
#include "DPrecAlign.h"
#include "DPixel.h"
#include "DLadder.h"
#include "DMiniVector.h"
#include "DHelix.h"
#include "DHelixFitter.h"
#include "DTrackFitter.h"
#include "DBeaster.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_DR3(void *p = 0);
   static void *newArray_DR3(Long_t size, void *p);
   static void delete_DR3(void *p);
   static void deleteArray_DR3(void *p);
   static void destruct_DR3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DR3*)
   {
      ::DR3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DR3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DR3", ::DR3::Class_Version(), "DR3.h", 23,
                  typeid(::DR3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DR3::Dictionary, isa_proxy, 4,
                  sizeof(::DR3) );
      instance.SetNew(&new_DR3);
      instance.SetNewArray(&newArray_DR3);
      instance.SetDelete(&delete_DR3);
      instance.SetDeleteArray(&deleteArray_DR3);
      instance.SetDestructor(&destruct_DR3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DR3*)
   {
      return GenerateInitInstanceLocal((::DR3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DR3*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DGlobalTools(void *p = 0);
   static void *newArray_DGlobalTools(Long_t size, void *p);
   static void delete_DGlobalTools(void *p);
   static void deleteArray_DGlobalTools(void *p);
   static void destruct_DGlobalTools(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DGlobalTools*)
   {
      ::DGlobalTools *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DGlobalTools >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DGlobalTools", ::DGlobalTools::Class_Version(), "DGlobalTools.h", 52,
                  typeid(::DGlobalTools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DGlobalTools::Dictionary, isa_proxy, 4,
                  sizeof(::DGlobalTools) );
      instance.SetNew(&new_DGlobalTools);
      instance.SetNewArray(&newArray_DGlobalTools);
      instance.SetDelete(&delete_DGlobalTools);
      instance.SetDeleteArray(&deleteArray_DGlobalTools);
      instance.SetDestructor(&destruct_DGlobalTools);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DGlobalTools*)
   {
      return GenerateInitInstanceLocal((::DGlobalTools*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DGlobalTools*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNTPixel(void *p = 0);
   static void *newArray_TNTPixel(Long_t size, void *p);
   static void delete_TNTPixel(void *p);
   static void deleteArray_TNTPixel(void *p);
   static void destruct_TNTPixel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNTPixel*)
   {
      ::TNTPixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNTPixel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNTPixel", ::TNTPixel::Class_Version(), "TNTBoardReader.h", 19,
                  typeid(::TNTPixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNTPixel::Dictionary, isa_proxy, 4,
                  sizeof(::TNTPixel) );
      instance.SetNew(&new_TNTPixel);
      instance.SetNewArray(&newArray_TNTPixel);
      instance.SetDelete(&delete_TNTPixel);
      instance.SetDeleteArray(&deleteArray_TNTPixel);
      instance.SetDestructor(&destruct_TNTPixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNTPixel*)
   {
      return GenerateInitInstanceLocal((::TNTPixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNTPixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNTEvent(void *p = 0);
   static void *newArray_TNTEvent(Long_t size, void *p);
   static void delete_TNTEvent(void *p);
   static void deleteArray_TNTEvent(void *p);
   static void destruct_TNTEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNTEvent*)
   {
      ::TNTEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNTEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNTEvent", ::TNTEvent::Class_Version(), "TNTBoardReader.h", 45,
                  typeid(::TNTEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNTEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TNTEvent) );
      instance.SetNew(&new_TNTEvent);
      instance.SetNewArray(&newArray_TNTEvent);
      instance.SetDelete(&delete_TNTEvent);
      instance.SetDeleteArray(&deleteArray_TNTEvent);
      instance.SetDestructor(&destruct_TNTEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNTEvent*)
   {
      return GenerateInitInstanceLocal((::TNTEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNTEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNTBoardReader(void *p = 0);
   static void *newArray_TNTBoardReader(Long_t size, void *p);
   static void delete_TNTBoardReader(void *p);
   static void deleteArray_TNTBoardReader(void *p);
   static void destruct_TNTBoardReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNTBoardReader*)
   {
      ::TNTBoardReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNTBoardReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNTBoardReader", ::TNTBoardReader::Class_Version(), "TNTBoardReader.h", 82,
                  typeid(::TNTBoardReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNTBoardReader::Dictionary, isa_proxy, 4,
                  sizeof(::TNTBoardReader) );
      instance.SetNew(&new_TNTBoardReader);
      instance.SetNewArray(&newArray_TNTBoardReader);
      instance.SetDelete(&delete_TNTBoardReader);
      instance.SetDeleteArray(&deleteArray_TNTBoardReader);
      instance.SetDestructor(&destruct_TNTBoardReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNTBoardReader*)
   {
      return GenerateInitInstanceLocal((::TNTBoardReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNTBoardReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PXIPixel(void *p = 0);
   static void *newArray_PXIPixel(Long_t size, void *p);
   static void delete_PXIPixel(void *p);
   static void deleteArray_PXIPixel(void *p);
   static void destruct_PXIPixel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PXIPixel*)
   {
      ::PXIPixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PXIPixel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PXIPixel", ::PXIPixel::Class_Version(), "PXIBoardReader.h", 16,
                  typeid(::PXIPixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PXIPixel::Dictionary, isa_proxy, 4,
                  sizeof(::PXIPixel) );
      instance.SetNew(&new_PXIPixel);
      instance.SetNewArray(&newArray_PXIPixel);
      instance.SetDelete(&delete_PXIPixel);
      instance.SetDeleteArray(&deleteArray_PXIPixel);
      instance.SetDestructor(&destruct_PXIPixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PXIPixel*)
   {
      return GenerateInitInstanceLocal((::PXIPixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PXIPixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PXIEvent(void *p = 0);
   static void *newArray_PXIEvent(Long_t size, void *p);
   static void delete_PXIEvent(void *p);
   static void deleteArray_PXIEvent(void *p);
   static void destruct_PXIEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PXIEvent*)
   {
      ::PXIEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PXIEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PXIEvent", ::PXIEvent::Class_Version(), "PXIBoardReader.h", 43,
                  typeid(::PXIEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PXIEvent::Dictionary, isa_proxy, 4,
                  sizeof(::PXIEvent) );
      instance.SetNew(&new_PXIEvent);
      instance.SetNewArray(&newArray_PXIEvent);
      instance.SetDelete(&delete_PXIEvent);
      instance.SetDeleteArray(&deleteArray_PXIEvent);
      instance.SetDestructor(&destruct_PXIEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PXIEvent*)
   {
      return GenerateInitInstanceLocal((::PXIEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PXIEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PXIBoardReader(void *p = 0);
   static void *newArray_PXIBoardReader(Long_t size, void *p);
   static void delete_PXIBoardReader(void *p);
   static void deleteArray_PXIBoardReader(void *p);
   static void destruct_PXIBoardReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PXIBoardReader*)
   {
      ::PXIBoardReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PXIBoardReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PXIBoardReader", ::PXIBoardReader::Class_Version(), "PXIBoardReader.h", 76,
                  typeid(::PXIBoardReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PXIBoardReader::Dictionary, isa_proxy, 4,
                  sizeof(::PXIBoardReader) );
      instance.SetNew(&new_PXIBoardReader);
      instance.SetNewArray(&newArray_PXIBoardReader);
      instance.SetDelete(&delete_PXIBoardReader);
      instance.SetDeleteArray(&deleteArray_PXIBoardReader);
      instance.SetDestructor(&destruct_PXIBoardReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PXIBoardReader*)
   {
      return GenerateInitInstanceLocal((::PXIBoardReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PXIBoardReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PXIePixel(void *p = 0);
   static void *newArray_PXIePixel(Long_t size, void *p);
   static void delete_PXIePixel(void *p);
   static void deleteArray_PXIePixel(void *p);
   static void destruct_PXIePixel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PXIePixel*)
   {
      ::PXIePixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PXIePixel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PXIePixel", ::PXIePixel::Class_Version(), "PXIeBoardReader.h", 20,
                  typeid(::PXIePixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PXIePixel::Dictionary, isa_proxy, 4,
                  sizeof(::PXIePixel) );
      instance.SetNew(&new_PXIePixel);
      instance.SetNewArray(&newArray_PXIePixel);
      instance.SetDelete(&delete_PXIePixel);
      instance.SetDeleteArray(&deleteArray_PXIePixel);
      instance.SetDestructor(&destruct_PXIePixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PXIePixel*)
   {
      return GenerateInitInstanceLocal((::PXIePixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PXIePixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PXIeEvent(void *p = 0);
   static void *newArray_PXIeEvent(Long_t size, void *p);
   static void delete_PXIeEvent(void *p);
   static void deleteArray_PXIeEvent(void *p);
   static void destruct_PXIeEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PXIeEvent*)
   {
      ::PXIeEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PXIeEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PXIeEvent", ::PXIeEvent::Class_Version(), "PXIeBoardReader.h", 47,
                  typeid(::PXIeEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PXIeEvent::Dictionary, isa_proxy, 4,
                  sizeof(::PXIeEvent) );
      instance.SetNew(&new_PXIeEvent);
      instance.SetNewArray(&newArray_PXIeEvent);
      instance.SetDelete(&delete_PXIeEvent);
      instance.SetDeleteArray(&deleteArray_PXIeEvent);
      instance.SetDestructor(&destruct_PXIeEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PXIeEvent*)
   {
      return GenerateInitInstanceLocal((::PXIeEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PXIeEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PXIeBoardReader(void *p = 0);
   static void *newArray_PXIeBoardReader(Long_t size, void *p);
   static void delete_PXIeBoardReader(void *p);
   static void deleteArray_PXIeBoardReader(void *p);
   static void destruct_PXIeBoardReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PXIeBoardReader*)
   {
      ::PXIeBoardReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PXIeBoardReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PXIeBoardReader", ::PXIeBoardReader::Class_Version(), "PXIeBoardReader.h", 88,
                  typeid(::PXIeBoardReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PXIeBoardReader::Dictionary, isa_proxy, 4,
                  sizeof(::PXIeBoardReader) );
      instance.SetNew(&new_PXIeBoardReader);
      instance.SetNewArray(&newArray_PXIeBoardReader);
      instance.SetDelete(&delete_PXIeBoardReader);
      instance.SetDeleteArray(&deleteArray_PXIeBoardReader);
      instance.SetDestructor(&destruct_PXIeBoardReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PXIeBoardReader*)
   {
      return GenerateInitInstanceLocal((::PXIeBoardReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PXIeBoardReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GIGPixel(void *p = 0);
   static void *newArray_GIGPixel(Long_t size, void *p);
   static void delete_GIGPixel(void *p);
   static void deleteArray_GIGPixel(void *p);
   static void destruct_GIGPixel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GIGPixel*)
   {
      ::GIGPixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GIGPixel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GIGPixel", ::GIGPixel::Class_Version(), "GIGBoardReader.h", 14,
                  typeid(::GIGPixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GIGPixel::Dictionary, isa_proxy, 4,
                  sizeof(::GIGPixel) );
      instance.SetNew(&new_GIGPixel);
      instance.SetNewArray(&newArray_GIGPixel);
      instance.SetDelete(&delete_GIGPixel);
      instance.SetDeleteArray(&deleteArray_GIGPixel);
      instance.SetDestructor(&destruct_GIGPixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GIGPixel*)
   {
      return GenerateInitInstanceLocal((::GIGPixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GIGPixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GIGMonteCarlo(void *p = 0);
   static void *newArray_GIGMonteCarlo(Long_t size, void *p);
   static void delete_GIGMonteCarlo(void *p);
   static void deleteArray_GIGMonteCarlo(void *p);
   static void destruct_GIGMonteCarlo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GIGMonteCarlo*)
   {
      ::GIGMonteCarlo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GIGMonteCarlo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GIGMonteCarlo", ::GIGMonteCarlo::Class_Version(), "GIGBoardReader.h", 42,
                  typeid(::GIGMonteCarlo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GIGMonteCarlo::Dictionary, isa_proxy, 4,
                  sizeof(::GIGMonteCarlo) );
      instance.SetNew(&new_GIGMonteCarlo);
      instance.SetNewArray(&newArray_GIGMonteCarlo);
      instance.SetDelete(&delete_GIGMonteCarlo);
      instance.SetDeleteArray(&deleteArray_GIGMonteCarlo);
      instance.SetDestructor(&destruct_GIGMonteCarlo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GIGMonteCarlo*)
   {
      return GenerateInitInstanceLocal((::GIGMonteCarlo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GIGMonteCarlo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GIGEvent(void *p = 0);
   static void *newArray_GIGEvent(Long_t size, void *p);
   static void delete_GIGEvent(void *p);
   static void deleteArray_GIGEvent(void *p);
   static void destruct_GIGEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GIGEvent*)
   {
      ::GIGEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GIGEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GIGEvent", ::GIGEvent::Class_Version(), "GIGBoardReader.h", 74,
                  typeid(::GIGEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GIGEvent::Dictionary, isa_proxy, 4,
                  sizeof(::GIGEvent) );
      instance.SetNew(&new_GIGEvent);
      instance.SetNewArray(&newArray_GIGEvent);
      instance.SetDelete(&delete_GIGEvent);
      instance.SetDeleteArray(&deleteArray_GIGEvent);
      instance.SetDestructor(&destruct_GIGEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GIGEvent*)
   {
      return GenerateInitInstanceLocal((::GIGEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GIGEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GIGBoardReader(void *p = 0);
   static void *newArray_GIGBoardReader(Long_t size, void *p);
   static void delete_GIGBoardReader(void *p);
   static void deleteArray_GIGBoardReader(void *p);
   static void destruct_GIGBoardReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GIGBoardReader*)
   {
      ::GIGBoardReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GIGBoardReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GIGBoardReader", ::GIGBoardReader::Class_Version(), "GIGBoardReader.h", 104,
                  typeid(::GIGBoardReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GIGBoardReader::Dictionary, isa_proxy, 4,
                  sizeof(::GIGBoardReader) );
      instance.SetNew(&new_GIGBoardReader);
      instance.SetNewArray(&newArray_GIGBoardReader);
      instance.SetDelete(&delete_GIGBoardReader);
      instance.SetDeleteArray(&deleteArray_GIGBoardReader);
      instance.SetDestructor(&destruct_GIGBoardReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GIGBoardReader*)
   {
      return GenerateInitInstanceLocal((::GIGBoardReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GIGBoardReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_IMGPixel(void *p = 0);
   static void *newArray_IMGPixel(Long_t size, void *p);
   static void delete_IMGPixel(void *p);
   static void deleteArray_IMGPixel(void *p);
   static void destruct_IMGPixel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IMGPixel*)
   {
      ::IMGPixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IMGPixel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("IMGPixel", ::IMGPixel::Class_Version(), "IMGBoardReader.h", 25,
                  typeid(::IMGPixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::IMGPixel::Dictionary, isa_proxy, 4,
                  sizeof(::IMGPixel) );
      instance.SetNew(&new_IMGPixel);
      instance.SetNewArray(&newArray_IMGPixel);
      instance.SetDelete(&delete_IMGPixel);
      instance.SetDeleteArray(&deleteArray_IMGPixel);
      instance.SetDestructor(&destruct_IMGPixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IMGPixel*)
   {
      return GenerateInitInstanceLocal((::IMGPixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IMGPixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_IMGEvent(void *p = 0);
   static void *newArray_IMGEvent(Long_t size, void *p);
   static void delete_IMGEvent(void *p);
   static void deleteArray_IMGEvent(void *p);
   static void destruct_IMGEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IMGEvent*)
   {
      ::IMGEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IMGEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("IMGEvent", ::IMGEvent::Class_Version(), "IMGBoardReader.h", 55,
                  typeid(::IMGEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::IMGEvent::Dictionary, isa_proxy, 4,
                  sizeof(::IMGEvent) );
      instance.SetNew(&new_IMGEvent);
      instance.SetNewArray(&newArray_IMGEvent);
      instance.SetDelete(&delete_IMGEvent);
      instance.SetDeleteArray(&deleteArray_IMGEvent);
      instance.SetDestructor(&destruct_IMGEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IMGEvent*)
   {
      return GenerateInitInstanceLocal((::IMGEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IMGEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_IMGBoardReader(void *p = 0);
   static void *newArray_IMGBoardReader(Long_t size, void *p);
   static void delete_IMGBoardReader(void *p);
   static void deleteArray_IMGBoardReader(void *p);
   static void destruct_IMGBoardReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IMGBoardReader*)
   {
      ::IMGBoardReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IMGBoardReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("IMGBoardReader", ::IMGBoardReader::Class_Version(), "IMGBoardReader.h", 95,
                  typeid(::IMGBoardReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::IMGBoardReader::Dictionary, isa_proxy, 4,
                  sizeof(::IMGBoardReader) );
      instance.SetNew(&new_IMGBoardReader);
      instance.SetNewArray(&newArray_IMGBoardReader);
      instance.SetDelete(&delete_IMGBoardReader);
      instance.SetDeleteArray(&deleteArray_IMGBoardReader);
      instance.SetDestructor(&destruct_IMGBoardReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IMGBoardReader*)
   {
      return GenerateInitInstanceLocal((::IMGBoardReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IMGBoardReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BoardReaderPixel(void *p = 0);
   static void *newArray_BoardReaderPixel(Long_t size, void *p);
   static void delete_BoardReaderPixel(void *p);
   static void deleteArray_BoardReaderPixel(void *p);
   static void destruct_BoardReaderPixel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BoardReaderPixel*)
   {
      ::BoardReaderPixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BoardReaderPixel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BoardReaderPixel", ::BoardReaderPixel::Class_Version(), "BoardReader.h", 12,
                  typeid(::BoardReaderPixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BoardReaderPixel::Dictionary, isa_proxy, 4,
                  sizeof(::BoardReaderPixel) );
      instance.SetNew(&new_BoardReaderPixel);
      instance.SetNewArray(&newArray_BoardReaderPixel);
      instance.SetDelete(&delete_BoardReaderPixel);
      instance.SetDeleteArray(&deleteArray_BoardReaderPixel);
      instance.SetDestructor(&destruct_BoardReaderPixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BoardReaderPixel*)
   {
      return GenerateInitInstanceLocal((::BoardReaderPixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BoardReaderPixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BoardReaderEvent(void *p = 0);
   static void *newArray_BoardReaderEvent(Long_t size, void *p);
   static void delete_BoardReaderEvent(void *p);
   static void deleteArray_BoardReaderEvent(void *p);
   static void destruct_BoardReaderEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BoardReaderEvent*)
   {
      ::BoardReaderEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BoardReaderEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BoardReaderEvent", ::BoardReaderEvent::Class_Version(), "BoardReader.h", 45,
                  typeid(::BoardReaderEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BoardReaderEvent::Dictionary, isa_proxy, 4,
                  sizeof(::BoardReaderEvent) );
      instance.SetNew(&new_BoardReaderEvent);
      instance.SetNewArray(&newArray_BoardReaderEvent);
      instance.SetDelete(&delete_BoardReaderEvent);
      instance.SetDeleteArray(&deleteArray_BoardReaderEvent);
      instance.SetDestructor(&destruct_BoardReaderEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BoardReaderEvent*)
   {
      return GenerateInitInstanceLocal((::BoardReaderEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BoardReaderEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_VMEBoardReader(void *p);
   static void deleteArray_VMEBoardReader(void *p);
   static void destruct_VMEBoardReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::VMEBoardReader*)
   {
      ::VMEBoardReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::VMEBoardReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("VMEBoardReader", ::VMEBoardReader::Class_Version(), "VMEBoardReader.h", 27,
                  typeid(::VMEBoardReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::VMEBoardReader::Dictionary, isa_proxy, 4,
                  sizeof(::VMEBoardReader) );
      instance.SetDelete(&delete_VMEBoardReader);
      instance.SetDeleteArray(&deleteArray_VMEBoardReader);
      instance.SetDestructor(&destruct_VMEBoardReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::VMEBoardReader*)
   {
      return GenerateInitInstanceLocal((::VMEBoardReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::VMEBoardReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DPixel(void *p = 0);
   static void *newArray_DPixel(Long_t size, void *p);
   static void delete_DPixel(void *p);
   static void deleteArray_DPixel(void *p);
   static void destruct_DPixel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DPixel*)
   {
      ::DPixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DPixel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DPixel", ::DPixel::Class_Version(), "DPixel.h", 14,
                  typeid(::DPixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DPixel::Dictionary, isa_proxy, 4,
                  sizeof(::DPixel) );
      instance.SetNew(&new_DPixel);
      instance.SetNewArray(&newArray_DPixel);
      instance.SetDelete(&delete_DPixel);
      instance.SetDeleteArray(&deleteArray_DPixel);
      instance.SetDestructor(&destruct_DPixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DPixel*)
   {
      return GenerateInitInstanceLocal((::DPixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DPixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DHit(void *p = 0);
   static void *newArray_DHit(Long_t size, void *p);
   static void delete_DHit(void *p);
   static void deleteArray_DHit(void *p);
   static void destruct_DHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DHit*)
   {
      ::DHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DHit", ::DHit::Class_Version(), "DHit.h", 30,
                  typeid(::DHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DHit::Dictionary, isa_proxy, 4,
                  sizeof(::DHit) );
      instance.SetNew(&new_DHit);
      instance.SetNewArray(&newArray_DHit);
      instance.SetDelete(&delete_DHit);
      instance.SetDeleteArray(&deleteArray_DHit);
      instance.SetDestructor(&destruct_DHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DHit*)
   {
      return GenerateInitInstanceLocal((::DHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DTrack(void *p = 0);
   static void *newArray_DTrack(Long_t size, void *p);
   static void delete_DTrack(void *p);
   static void deleteArray_DTrack(void *p);
   static void destruct_DTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DTrack*)
   {
      ::DTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DTrack", ::DTrack::Class_Version(), "DTrack.h", 31,
                  typeid(::DTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DTrack::Dictionary, isa_proxy, 4,
                  sizeof(::DTrack) );
      instance.SetNew(&new_DTrack);
      instance.SetNewArray(&newArray_DTrack);
      instance.SetDelete(&delete_DTrack);
      instance.SetDeleteArray(&deleteArray_DTrack);
      instance.SetDestructor(&destruct_DTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DTrack*)
   {
      return GenerateInitInstanceLocal((::DTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DEventMC(void *p = 0);
   static void *newArray_DEventMC(Long_t size, void *p);
   static void delete_DEventMC(void *p);
   static void deleteArray_DEventMC(void *p);
   static void destruct_DEventMC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DEventMC*)
   {
      ::DEventMC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DEventMC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DEventMC", ::DEventMC::Class_Version(), "DEventMC.h", 109,
                  typeid(::DEventMC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DEventMC::Dictionary, isa_proxy, 4,
                  sizeof(::DEventMC) );
      instance.SetNew(&new_DEventMC);
      instance.SetNewArray(&newArray_DEventMC);
      instance.SetDelete(&delete_DEventMC);
      instance.SetDeleteArray(&deleteArray_DEventMC);
      instance.SetDestructor(&destruct_DEventMC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DEventMC*)
   {
      return GenerateInitInstanceLocal((::DEventMC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DEventMC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DEventHeader(void *p = 0);
   static void *newArray_DEventHeader(Long_t size, void *p);
   static void delete_DEventHeader(void *p);
   static void deleteArray_DEventHeader(void *p);
   static void destruct_DEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DEventHeader*)
   {
      ::DEventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DEventHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DEventHeader", ::DEventHeader::Class_Version(), "DEvent.h", 38,
                  typeid(::DEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::DEventHeader) );
      instance.SetNew(&new_DEventHeader);
      instance.SetNewArray(&newArray_DEventHeader);
      instance.SetDelete(&delete_DEventHeader);
      instance.SetDeleteArray(&deleteArray_DEventHeader);
      instance.SetDestructor(&destruct_DEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DEventHeader*)
   {
      return GenerateInitInstanceLocal((::DEventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DEventHeader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DEvent(void *p = 0);
   static void *newArray_DEvent(Long_t size, void *p);
   static void delete_DEvent(void *p);
   static void deleteArray_DEvent(void *p);
   static void destruct_DEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DEvent*)
   {
      ::DEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DEvent", ::DEvent::Class_Version(), "DEvent.h", 90,
                  typeid(::DEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DEvent::Dictionary, isa_proxy, 4,
                  sizeof(::DEvent) );
      instance.SetNew(&new_DEvent);
      instance.SetNewArray(&newArray_DEvent);
      instance.SetDelete(&delete_DEvent);
      instance.SetDeleteArray(&deleteArray_DEvent);
      instance.SetDestructor(&destruct_DEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DEvent*)
   {
      return GenerateInitInstanceLocal((::DEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DAuthenticHit(void *p = 0);
   static void *newArray_DAuthenticHit(Long_t size, void *p);
   static void delete_DAuthenticHit(void *p);
   static void deleteArray_DAuthenticHit(void *p);
   static void destruct_DAuthenticHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DAuthenticHit*)
   {
      ::DAuthenticHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DAuthenticHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DAuthenticHit", ::DAuthenticHit::Class_Version(), "DEvent.h", 139,
                  typeid(::DAuthenticHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DAuthenticHit::Dictionary, isa_proxy, 4,
                  sizeof(::DAuthenticHit) );
      instance.SetNew(&new_DAuthenticHit);
      instance.SetNewArray(&newArray_DAuthenticHit);
      instance.SetDelete(&delete_DAuthenticHit);
      instance.SetDeleteArray(&deleteArray_DAuthenticHit);
      instance.SetDestructor(&destruct_DAuthenticHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DAuthenticHit*)
   {
      return GenerateInitInstanceLocal((::DAuthenticHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DAuthenticHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DAuthenticPlane(void *p = 0);
   static void *newArray_DAuthenticPlane(Long_t size, void *p);
   static void delete_DAuthenticPlane(void *p);
   static void deleteArray_DAuthenticPlane(void *p);
   static void destruct_DAuthenticPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DAuthenticPlane*)
   {
      ::DAuthenticPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DAuthenticPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DAuthenticPlane", ::DAuthenticPlane::Class_Version(), "DEvent.h", 241,
                  typeid(::DAuthenticPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DAuthenticPlane::Dictionary, isa_proxy, 4,
                  sizeof(::DAuthenticPlane) );
      instance.SetNew(&new_DAuthenticPlane);
      instance.SetNewArray(&newArray_DAuthenticPlane);
      instance.SetDelete(&delete_DAuthenticPlane);
      instance.SetDeleteArray(&deleteArray_DAuthenticPlane);
      instance.SetDestructor(&destruct_DAuthenticPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DAuthenticPlane*)
   {
      return GenerateInitInstanceLocal((::DAuthenticPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DAuthenticPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DTransparentPlane(void *p = 0);
   static void *newArray_DTransparentPlane(Long_t size, void *p);
   static void delete_DTransparentPlane(void *p);
   static void deleteArray_DTransparentPlane(void *p);
   static void destruct_DTransparentPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DTransparentPlane*)
   {
      ::DTransparentPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DTransparentPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DTransparentPlane", ::DTransparentPlane::Class_Version(), "DEvent.h", 288,
                  typeid(::DTransparentPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DTransparentPlane::Dictionary, isa_proxy, 4,
                  sizeof(::DTransparentPlane) );
      instance.SetNew(&new_DTransparentPlane);
      instance.SetNewArray(&newArray_DTransparentPlane);
      instance.SetDelete(&delete_DTransparentPlane);
      instance.SetDeleteArray(&deleteArray_DTransparentPlane);
      instance.SetDestructor(&destruct_DTransparentPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DTransparentPlane*)
   {
      return GenerateInitInstanceLocal((::DTransparentPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DTransparentPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DSession(void *p = 0);
   static void *newArray_DSession(Long_t size, void *p);
   static void delete_DSession(void *p);
   static void deleteArray_DSession(void *p);
   static void destruct_DSession(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DSession*)
   {
      ::DSession *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DSession >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DSession", ::DSession::Class_Version(), "DSession.h", 36,
                  typeid(::DSession), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DSession::Dictionary, isa_proxy, 4,
                  sizeof(::DSession) );
      instance.SetNew(&new_DSession);
      instance.SetNewArray(&newArray_DSession);
      instance.SetDelete(&delete_DSession);
      instance.SetDeleteArray(&deleteArray_DSession);
      instance.SetDestructor(&destruct_DSession);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DSession*)
   {
      return GenerateInitInstanceLocal((::DSession*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DSession*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DSetup(void *p = 0);
   static void *newArray_DSetup(Long_t size, void *p);
   static void delete_DSetup(void *p);
   static void deleteArray_DSetup(void *p);
   static void destruct_DSetup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DSetup*)
   {
      ::DSetup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DSetup >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DSetup", ::DSetup::Class_Version(), "DSetup.h", 38,
                  typeid(::DSetup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DSetup::Dictionary, isa_proxy, 4,
                  sizeof(::DSetup) );
      instance.SetNew(&new_DSetup);
      instance.SetNewArray(&newArray_DSetup);
      instance.SetDelete(&delete_DSetup);
      instance.SetDeleteArray(&deleteArray_DSetup);
      instance.SetDestructor(&destruct_DSetup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DSetup*)
   {
      return GenerateInitInstanceLocal((::DSetup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DSetup*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MCBoardReader(void *p);
   static void deleteArray_MCBoardReader(void *p);
   static void destruct_MCBoardReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MCBoardReader*)
   {
      ::MCBoardReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MCBoardReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MCBoardReader", ::MCBoardReader::Class_Version(), "MCBoardReader.h", 98,
                  typeid(::MCBoardReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MCBoardReader::Dictionary, isa_proxy, 4,
                  sizeof(::MCBoardReader) );
      instance.SetDelete(&delete_MCBoardReader);
      instance.SetDeleteArray(&deleteArray_MCBoardReader);
      instance.SetDestructor(&destruct_MCBoardReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MCBoardReader*)
   {
      return GenerateInitInstanceLocal((::MCBoardReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MCBoardReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BoardReaderIHEP(void *p);
   static void deleteArray_BoardReaderIHEP(void *p);
   static void destruct_BoardReaderIHEP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BoardReaderIHEP*)
   {
      ::BoardReaderIHEP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BoardReaderIHEP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BoardReaderIHEP", ::BoardReaderIHEP::Class_Version(), "BoardReaderIHEP.h", 26,
                  typeid(::BoardReaderIHEP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BoardReaderIHEP::Dictionary, isa_proxy, 4,
                  sizeof(::BoardReaderIHEP) );
      instance.SetDelete(&delete_BoardReaderIHEP);
      instance.SetDeleteArray(&deleteArray_BoardReaderIHEP);
      instance.SetDestructor(&destruct_BoardReaderIHEP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BoardReaderIHEP*)
   {
      return GenerateInitInstanceLocal((::BoardReaderIHEP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BoardReaderIHEP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliMIMOSA22RawStreamVASingle(void *p = 0);
   static void *newArray_AliMIMOSA22RawStreamVASingle(Long_t size, void *p);
   static void delete_AliMIMOSA22RawStreamVASingle(void *p);
   static void deleteArray_AliMIMOSA22RawStreamVASingle(void *p);
   static void destruct_AliMIMOSA22RawStreamVASingle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliMIMOSA22RawStreamVASingle*)
   {
      ::AliMIMOSA22RawStreamVASingle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliMIMOSA22RawStreamVASingle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliMIMOSA22RawStreamVASingle", ::AliMIMOSA22RawStreamVASingle::Class_Version(), "AliMIMOSA22RawStreamVASingle.h", 19,
                  typeid(::AliMIMOSA22RawStreamVASingle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliMIMOSA22RawStreamVASingle::Dictionary, isa_proxy, 4,
                  sizeof(::AliMIMOSA22RawStreamVASingle) );
      instance.SetNew(&new_AliMIMOSA22RawStreamVASingle);
      instance.SetNewArray(&newArray_AliMIMOSA22RawStreamVASingle);
      instance.SetDelete(&delete_AliMIMOSA22RawStreamVASingle);
      instance.SetDeleteArray(&deleteArray_AliMIMOSA22RawStreamVASingle);
      instance.SetDestructor(&destruct_AliMIMOSA22RawStreamVASingle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliMIMOSA22RawStreamVASingle*)
   {
      return GenerateInitInstanceLocal((::AliMIMOSA22RawStreamVASingle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliMIMOSA22RawStreamVASingle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecoderM18(void *p);
   static void deleteArray_DecoderM18(void *p);
   static void destruct_DecoderM18(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecoderM18*)
   {
      ::DecoderM18 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecoderM18 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecoderM18", ::DecoderM18::Class_Version(), "DecoderM18.h", 19,
                  typeid(::DecoderM18), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecoderM18::Dictionary, isa_proxy, 4,
                  sizeof(::DecoderM18) );
      instance.SetDelete(&delete_DecoderM18);
      instance.SetDeleteArray(&deleteArray_DecoderM18);
      instance.SetDestructor(&destruct_DecoderM18);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecoderM18*)
   {
      return GenerateInitInstanceLocal((::DecoderM18*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecoderM18*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecoderGeant(void *p);
   static void deleteArray_DecoderGeant(void *p);
   static void destruct_DecoderGeant(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecoderGeant*)
   {
      ::DecoderGeant *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecoderGeant >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecoderGeant", ::DecoderGeant::Class_Version(), "DecoderGeant.h", 19,
                  typeid(::DecoderGeant), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecoderGeant::Dictionary, isa_proxy, 4,
                  sizeof(::DecoderGeant) );
      instance.SetDelete(&delete_DecoderGeant);
      instance.SetDeleteArray(&deleteArray_DecoderGeant);
      instance.SetDestructor(&destruct_DecoderGeant);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecoderGeant*)
   {
      return GenerateInitInstanceLocal((::DecoderGeant*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecoderGeant*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DAcq(void *p = 0);
   static void *newArray_DAcq(Long_t size, void *p);
   static void delete_DAcq(void *p);
   static void deleteArray_DAcq(void *p);
   static void destruct_DAcq(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DAcq*)
   {
      ::DAcq *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DAcq >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DAcq", ::DAcq::Class_Version(), "DAcq.h", 48,
                  typeid(::DAcq), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DAcq::Dictionary, isa_proxy, 4,
                  sizeof(::DAcq) );
      instance.SetNew(&new_DAcq);
      instance.SetNewArray(&newArray_DAcq);
      instance.SetDelete(&delete_DAcq);
      instance.SetDeleteArray(&deleteArray_DAcq);
      instance.SetDestructor(&destruct_DAcq);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DAcq*)
   {
      return GenerateInitInstanceLocal((::DAcq*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DAcq*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DataPoints(void *p = 0);
   static void *newArray_DataPoints(Long_t size, void *p);
   static void delete_DataPoints(void *p);
   static void deleteArray_DataPoints(void *p);
   static void destruct_DataPoints(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DataPoints*)
   {
      ::DataPoints *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DataPoints >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DataPoints", ::DataPoints::Class_Version(), "DPrecAlign.h", 19,
                  typeid(::DataPoints), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DataPoints::Dictionary, isa_proxy, 4,
                  sizeof(::DataPoints) );
      instance.SetNew(&new_DataPoints);
      instance.SetNewArray(&newArray_DataPoints);
      instance.SetDelete(&delete_DataPoints);
      instance.SetDeleteArray(&deleteArray_DataPoints);
      instance.SetDestructor(&destruct_DataPoints);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DataPoints*)
   {
      return GenerateInitInstanceLocal((::DataPoints*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DataPoints*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DPrecAlign(void *p = 0);
   static void *newArray_DPrecAlign(Long_t size, void *p);
   static void delete_DPrecAlign(void *p);
   static void deleteArray_DPrecAlign(void *p);
   static void destruct_DPrecAlign(void *p);
   static void streamer_DPrecAlign(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DPrecAlign*)
   {
      ::DPrecAlign *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DPrecAlign >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DPrecAlign", ::DPrecAlign::Class_Version(), "DPrecAlign.h", 57,
                  typeid(::DPrecAlign), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DPrecAlign::Dictionary, isa_proxy, 17,
                  sizeof(::DPrecAlign) );
      instance.SetNew(&new_DPrecAlign);
      instance.SetNewArray(&newArray_DPrecAlign);
      instance.SetDelete(&delete_DPrecAlign);
      instance.SetDeleteArray(&deleteArray_DPrecAlign);
      instance.SetDestructor(&destruct_DPrecAlign);
      instance.SetStreamerFunc(&streamer_DPrecAlign);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DPrecAlign*)
   {
      return GenerateInitInstanceLocal((::DPrecAlign*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DPrecAlign*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MiniVector(void *p = 0);
   static void *newArray_MiniVector(Long_t size, void *p);
   static void delete_MiniVector(void *p);
   static void deleteArray_MiniVector(void *p);
   static void destruct_MiniVector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiniVector*)
   {
      ::MiniVector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiniVector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiniVector", ::MiniVector::Class_Version(), "DMiniVector.h", 15,
                  typeid(::MiniVector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiniVector::Dictionary, isa_proxy, 4,
                  sizeof(::MiniVector) );
      instance.SetNew(&new_MiniVector);
      instance.SetNewArray(&newArray_MiniVector);
      instance.SetDelete(&delete_MiniVector);
      instance.SetDeleteArray(&deleteArray_MiniVector);
      instance.SetDestructor(&destruct_MiniVector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiniVector*)
   {
      return GenerateInitInstanceLocal((::MiniVector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiniVector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DLadder(void *p = 0);
   static void *newArray_DLadder(Long_t size, void *p);
   static void delete_DLadder(void *p);
   static void deleteArray_DLadder(void *p);
   static void destruct_DLadder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DLadder*)
   {
      ::DLadder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DLadder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DLadder", ::DLadder::Class_Version(), "DLadder.h", 35,
                  typeid(::DLadder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DLadder::Dictionary, isa_proxy, 4,
                  sizeof(::DLadder) );
      instance.SetNew(&new_DLadder);
      instance.SetNewArray(&newArray_DLadder);
      instance.SetDelete(&delete_DLadder);
      instance.SetDeleteArray(&deleteArray_DLadder);
      instance.SetDestructor(&destruct_DLadder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DLadder*)
   {
      return GenerateInitInstanceLocal((::DLadder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DLadder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DPlane(void *p = 0);
   static void *newArray_DPlane(Long_t size, void *p);
   static void delete_DPlane(void *p);
   static void deleteArray_DPlane(void *p);
   static void destruct_DPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DPlane*)
   {
      ::DPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DPlane", ::DPlane::Class_Version(), "DPlane.h", 54,
                  typeid(::DPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DPlane::Dictionary, isa_proxy, 4,
                  sizeof(::DPlane) );
      instance.SetNew(&new_DPlane);
      instance.SetNewArray(&newArray_DPlane);
      instance.SetDelete(&delete_DPlane);
      instance.SetDeleteArray(&deleteArray_DPlane);
      instance.SetDestructor(&destruct_DPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DPlane*)
   {
      return GenerateInitInstanceLocal((::DPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DAlign(void *p = 0);
   static void *newArray_DAlign(Long_t size, void *p);
   static void delete_DAlign(void *p);
   static void deleteArray_DAlign(void *p);
   static void destruct_DAlign(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DAlign*)
   {
      ::DAlign *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DAlign >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DAlign", ::DAlign::Class_Version(), "DAlign.h", 29,
                  typeid(::DAlign), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DAlign::Dictionary, isa_proxy, 4,
                  sizeof(::DAlign) );
      instance.SetNew(&new_DAlign);
      instance.SetNewArray(&newArray_DAlign);
      instance.SetDelete(&delete_DAlign);
      instance.SetDeleteArray(&deleteArray_DAlign);
      instance.SetDestructor(&destruct_DAlign);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DAlign*)
   {
      return GenerateInitInstanceLocal((::DAlign*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DAlign*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DHelix(void *p = 0);
   static void *newArray_DHelix(Long_t size, void *p);
   static void delete_DHelix(void *p);
   static void deleteArray_DHelix(void *p);
   static void destruct_DHelix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DHelix*)
   {
      ::DHelix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DHelix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DHelix", ::DHelix::Class_Version(), "DHelix.h", 29,
                  typeid(::DHelix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DHelix::Dictionary, isa_proxy, 4,
                  sizeof(::DHelix) );
      instance.SetNew(&new_DHelix);
      instance.SetNewArray(&newArray_DHelix);
      instance.SetDelete(&delete_DHelix);
      instance.SetDeleteArray(&deleteArray_DHelix);
      instance.SetDestructor(&destruct_DHelix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DHelix*)
   {
      return GenerateInitInstanceLocal((::DHelix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DHelix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DHelixFitter(void *p);
   static void deleteArray_DHelixFitter(void *p);
   static void destruct_DHelixFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DHelixFitter*)
   {
      ::DHelixFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DHelixFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DHelixFitter", ::DHelixFitter::Class_Version(), "DHelixFitter.h", 35,
                  typeid(::DHelixFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DHelixFitter::Dictionary, isa_proxy, 4,
                  sizeof(::DHelixFitter) );
      instance.SetDelete(&delete_DHelixFitter);
      instance.SetDeleteArray(&deleteArray_DHelixFitter);
      instance.SetDestructor(&destruct_DHelixFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DHelixFitter*)
   {
      return GenerateInitInstanceLocal((::DHelixFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DHelixFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DBeaster(void *p);
   static void deleteArray_DBeaster(void *p);
   static void destruct_DBeaster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DBeaster*)
   {
      ::DBeaster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DBeaster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DBeaster", ::DBeaster::Class_Version(), "DBeaster.h", 22,
                  typeid(::DBeaster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DBeaster::Dictionary, isa_proxy, 4,
                  sizeof(::DBeaster) );
      instance.SetDelete(&delete_DBeaster);
      instance.SetDeleteArray(&deleteArray_DBeaster);
      instance.SetDestructor(&destruct_DBeaster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DBeaster*)
   {
      return GenerateInitInstanceLocal((::DBeaster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DBeaster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DTracker(void *p = 0);
   static void *newArray_DTracker(Long_t size, void *p);
   static void delete_DTracker(void *p);
   static void deleteArray_DTracker(void *p);
   static void destruct_DTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DTracker*)
   {
      ::DTracker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DTracker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DTracker", ::DTracker::Class_Version(), "DTracker.h", 40,
                  typeid(::DTracker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DTracker::Dictionary, isa_proxy, 4,
                  sizeof(::DTracker) );
      instance.SetNew(&new_DTracker);
      instance.SetNewArray(&newArray_DTracker);
      instance.SetDelete(&delete_DTracker);
      instance.SetDeleteArray(&deleteArray_DTracker);
      instance.SetDestructor(&destruct_DTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DTracker*)
   {
      return GenerateInitInstanceLocal((::DTracker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DTracker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DStrip(void *p = 0);
   static void *newArray_DStrip(Long_t size, void *p);
   static void delete_DStrip(void *p);
   static void deleteArray_DStrip(void *p);
   static void destruct_DStrip(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DStrip*)
   {
      ::DStrip *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DStrip >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DStrip", ::DStrip::Class_Version(), "DStrip.h", 17,
                  typeid(::DStrip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DStrip::Dictionary, isa_proxy, 4,
                  sizeof(::DStrip) );
      instance.SetNew(&new_DStrip);
      instance.SetNewArray(&newArray_DStrip);
      instance.SetDelete(&delete_DStrip);
      instance.SetDeleteArray(&deleteArray_DStrip);
      instance.SetDestructor(&destruct_DStrip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DStrip*)
   {
      return GenerateInitInstanceLocal((::DStrip*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DStrip*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DLine(void *p = 0);
   static void *newArray_DLine(Long_t size, void *p);
   static void delete_DLine(void *p);
   static void deleteArray_DLine(void *p);
   static void destruct_DLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DLine*)
   {
      ::DLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DLine", ::DLine::Class_Version(), "DLine.h", 41,
                  typeid(::DLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DLine::Dictionary, isa_proxy, 4,
                  sizeof(::DLine) );
      instance.SetNew(&new_DLine);
      instance.SetNewArray(&newArray_DLine);
      instance.SetDelete(&delete_DLine);
      instance.SetDeleteArray(&deleteArray_DLine);
      instance.SetDestructor(&destruct_DLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DLine*)
   {
      return GenerateInitInstanceLocal((::DLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DLine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DCut(void *p = 0);
   static void *newArray_DCut(Long_t size, void *p);
   static void delete_DCut(void *p);
   static void deleteArray_DCut(void *p);
   static void destruct_DCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DCut*)
   {
      ::DCut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DCut >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DCut", ::DCut::Class_Version(), "DCut.h", 25,
                  typeid(::DCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DCut::Dictionary, isa_proxy, 4,
                  sizeof(::DCut) );
      instance.SetNew(&new_DCut);
      instance.SetNewArray(&newArray_DCut);
      instance.SetDelete(&delete_DCut);
      instance.SetDeleteArray(&deleteArray_DCut);
      instance.SetDestructor(&destruct_DCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DCut*)
   {
      return GenerateInitInstanceLocal((::DCut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DCut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DParticle(void *p = 0);
   static void *newArray_DParticle(Long_t size, void *p);
   static void delete_DParticle(void *p);
   static void deleteArray_DParticle(void *p);
   static void destruct_DParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DParticle*)
   {
      ::DParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DParticle", ::DParticle::Class_Version(), "DParticle.h", 27,
                  typeid(::DParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DParticle::Dictionary, isa_proxy, 4,
                  sizeof(::DParticle) );
      instance.SetNew(&new_DParticle);
      instance.SetNewArray(&newArray_DParticle);
      instance.SetDelete(&delete_DParticle);
      instance.SetDeleteArray(&deleteArray_DParticle);
      instance.SetDestructor(&destruct_DParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DParticle*)
   {
      return GenerateInitInstanceLocal((::DParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr DR3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DR3::Class_Name()
{
   return "DR3";
}

//______________________________________________________________________________
const char *DR3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DR3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DR3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DR3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DR3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DR3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DR3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DR3*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DGlobalTools::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DGlobalTools::Class_Name()
{
   return "DGlobalTools";
}

//______________________________________________________________________________
const char *DGlobalTools::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DGlobalTools*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DGlobalTools::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DGlobalTools*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DGlobalTools::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DGlobalTools*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DGlobalTools::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DGlobalTools*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNTPixel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNTPixel::Class_Name()
{
   return "TNTPixel";
}

//______________________________________________________________________________
const char *TNTPixel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNTPixel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNTPixel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNTPixel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNTPixel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNTPixel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNTPixel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNTPixel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNTEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNTEvent::Class_Name()
{
   return "TNTEvent";
}

//______________________________________________________________________________
const char *TNTEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNTEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNTEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNTEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNTEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNTEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNTEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNTEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNTBoardReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNTBoardReader::Class_Name()
{
   return "TNTBoardReader";
}

//______________________________________________________________________________
const char *TNTBoardReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNTBoardReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNTBoardReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNTBoardReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNTBoardReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNTBoardReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNTBoardReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNTBoardReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PXIPixel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PXIPixel::Class_Name()
{
   return "PXIPixel";
}

//______________________________________________________________________________
const char *PXIPixel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIPixel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PXIPixel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIPixel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PXIPixel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIPixel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PXIPixel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIPixel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PXIEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PXIEvent::Class_Name()
{
   return "PXIEvent";
}

//______________________________________________________________________________
const char *PXIEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PXIEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PXIEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PXIEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PXIBoardReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PXIBoardReader::Class_Name()
{
   return "PXIBoardReader";
}

//______________________________________________________________________________
const char *PXIBoardReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIBoardReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PXIBoardReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIBoardReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PXIBoardReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIBoardReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PXIBoardReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIBoardReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PXIePixel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PXIePixel::Class_Name()
{
   return "PXIePixel";
}

//______________________________________________________________________________
const char *PXIePixel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIePixel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PXIePixel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIePixel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PXIePixel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIePixel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PXIePixel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIePixel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PXIeEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PXIeEvent::Class_Name()
{
   return "PXIeEvent";
}

//______________________________________________________________________________
const char *PXIeEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIeEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PXIeEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIeEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PXIeEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIeEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PXIeEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIeEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PXIeBoardReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PXIeBoardReader::Class_Name()
{
   return "PXIeBoardReader";
}

//______________________________________________________________________________
const char *PXIeBoardReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIeBoardReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PXIeBoardReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PXIeBoardReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PXIeBoardReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIeBoardReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PXIeBoardReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PXIeBoardReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GIGPixel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GIGPixel::Class_Name()
{
   return "GIGPixel";
}

//______________________________________________________________________________
const char *GIGPixel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GIGPixel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GIGPixel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GIGPixel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GIGPixel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GIGPixel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GIGPixel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GIGPixel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GIGMonteCarlo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GIGMonteCarlo::Class_Name()
{
   return "GIGMonteCarlo";
}

//______________________________________________________________________________
const char *GIGMonteCarlo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GIGMonteCarlo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GIGMonteCarlo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GIGMonteCarlo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GIGMonteCarlo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GIGMonteCarlo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GIGMonteCarlo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GIGMonteCarlo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GIGEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GIGEvent::Class_Name()
{
   return "GIGEvent";
}

//______________________________________________________________________________
const char *GIGEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GIGEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GIGEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GIGEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GIGEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GIGEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GIGEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GIGEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GIGBoardReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GIGBoardReader::Class_Name()
{
   return "GIGBoardReader";
}

//______________________________________________________________________________
const char *GIGBoardReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GIGBoardReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GIGBoardReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GIGBoardReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GIGBoardReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GIGBoardReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GIGBoardReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GIGBoardReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IMGPixel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IMGPixel::Class_Name()
{
   return "IMGPixel";
}

//______________________________________________________________________________
const char *IMGPixel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IMGPixel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IMGPixel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IMGPixel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IMGPixel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IMGPixel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IMGPixel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IMGPixel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IMGEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IMGEvent::Class_Name()
{
   return "IMGEvent";
}

//______________________________________________________________________________
const char *IMGEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IMGEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IMGEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IMGEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IMGEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IMGEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IMGEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IMGEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IMGBoardReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IMGBoardReader::Class_Name()
{
   return "IMGBoardReader";
}

//______________________________________________________________________________
const char *IMGBoardReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IMGBoardReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IMGBoardReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IMGBoardReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IMGBoardReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IMGBoardReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IMGBoardReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IMGBoardReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BoardReaderPixel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BoardReaderPixel::Class_Name()
{
   return "BoardReaderPixel";
}

//______________________________________________________________________________
const char *BoardReaderPixel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderPixel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BoardReaderPixel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderPixel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BoardReaderPixel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderPixel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BoardReaderPixel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderPixel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BoardReaderEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BoardReaderEvent::Class_Name()
{
   return "BoardReaderEvent";
}

//______________________________________________________________________________
const char *BoardReaderEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BoardReaderEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BoardReaderEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BoardReaderEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr VMEBoardReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VMEBoardReader::Class_Name()
{
   return "VMEBoardReader";
}

//______________________________________________________________________________
const char *VMEBoardReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::VMEBoardReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VMEBoardReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::VMEBoardReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VMEBoardReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::VMEBoardReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VMEBoardReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::VMEBoardReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DPixel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DPixel::Class_Name()
{
   return "DPixel";
}

//______________________________________________________________________________
const char *DPixel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DPixel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DPixel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DPixel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DPixel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DPixel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DPixel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DPixel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DHit::Class_Name()
{
   return "DHit";
}

//______________________________________________________________________________
const char *DHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DTrack::Class_Name()
{
   return "DTrack";
}

//______________________________________________________________________________
const char *DTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DEventMC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DEventMC::Class_Name()
{
   return "DEventMC";
}

//______________________________________________________________________________
const char *DEventMC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DEventMC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DEventMC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DEventMC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DEventMC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DEventMC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DEventMC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DEventMC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DEventHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DEventHeader::Class_Name()
{
   return "DEventHeader";
}

//______________________________________________________________________________
const char *DEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DEventHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DEventHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DEventHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DEventHeader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DEvent::Class_Name()
{
   return "DEvent";
}

//______________________________________________________________________________
const char *DEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DAuthenticHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DAuthenticHit::Class_Name()
{
   return "DAuthenticHit";
}

//______________________________________________________________________________
const char *DAuthenticHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAuthenticHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DAuthenticHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAuthenticHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DAuthenticHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAuthenticHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DAuthenticHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAuthenticHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DAuthenticPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DAuthenticPlane::Class_Name()
{
   return "DAuthenticPlane";
}

//______________________________________________________________________________
const char *DAuthenticPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAuthenticPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DAuthenticPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAuthenticPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DAuthenticPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAuthenticPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DAuthenticPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAuthenticPlane*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DTransparentPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DTransparentPlane::Class_Name()
{
   return "DTransparentPlane";
}

//______________________________________________________________________________
const char *DTransparentPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DTransparentPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DTransparentPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DTransparentPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DTransparentPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DTransparentPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DTransparentPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DTransparentPlane*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DSession::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DSession::Class_Name()
{
   return "DSession";
}

//______________________________________________________________________________
const char *DSession::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DSession*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DSession::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DSession*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DSession::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DSession*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DSession::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DSession*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DSetup::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DSetup::Class_Name()
{
   return "DSetup";
}

//______________________________________________________________________________
const char *DSetup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DSetup*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DSetup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DSetup*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DSetup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DSetup*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DSetup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DSetup*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MCBoardReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCBoardReader::Class_Name()
{
   return "MCBoardReader";
}

//______________________________________________________________________________
const char *MCBoardReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MCBoardReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCBoardReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MCBoardReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCBoardReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MCBoardReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCBoardReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MCBoardReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BoardReaderIHEP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BoardReaderIHEP::Class_Name()
{
   return "BoardReaderIHEP";
}

//______________________________________________________________________________
const char *BoardReaderIHEP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderIHEP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BoardReaderIHEP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderIHEP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BoardReaderIHEP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderIHEP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BoardReaderIHEP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BoardReaderIHEP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliMIMOSA22RawStreamVASingle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliMIMOSA22RawStreamVASingle::Class_Name()
{
   return "AliMIMOSA22RawStreamVASingle";
}

//______________________________________________________________________________
const char *AliMIMOSA22RawStreamVASingle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliMIMOSA22RawStreamVASingle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliMIMOSA22RawStreamVASingle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliMIMOSA22RawStreamVASingle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliMIMOSA22RawStreamVASingle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliMIMOSA22RawStreamVASingle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliMIMOSA22RawStreamVASingle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliMIMOSA22RawStreamVASingle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DecoderM18::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DecoderM18::Class_Name()
{
   return "DecoderM18";
}

//______________________________________________________________________________
const char *DecoderM18::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecoderM18*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DecoderM18::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecoderM18*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DecoderM18::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecoderM18*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DecoderM18::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecoderM18*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DecoderGeant::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DecoderGeant::Class_Name()
{
   return "DecoderGeant";
}

//______________________________________________________________________________
const char *DecoderGeant::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecoderGeant*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DecoderGeant::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecoderGeant*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DecoderGeant::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecoderGeant*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DecoderGeant::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecoderGeant*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DAcq::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DAcq::Class_Name()
{
   return "DAcq";
}

//______________________________________________________________________________
const char *DAcq::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAcq*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DAcq::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAcq*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DAcq::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAcq*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DAcq::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAcq*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DataPoints::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DataPoints::Class_Name()
{
   return "DataPoints";
}

//______________________________________________________________________________
const char *DataPoints::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DataPoints*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DataPoints::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DataPoints*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DataPoints::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DataPoints*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DataPoints::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DataPoints*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DPrecAlign::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DPrecAlign::Class_Name()
{
   return "DPrecAlign";
}

//______________________________________________________________________________
const char *DPrecAlign::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DPrecAlign*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DPrecAlign::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DPrecAlign*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DPrecAlign::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DPrecAlign*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DPrecAlign::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DPrecAlign*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MiniVector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiniVector::Class_Name()
{
   return "MiniVector";
}

//______________________________________________________________________________
const char *MiniVector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiniVector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiniVector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiniVector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiniVector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiniVector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiniVector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiniVector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DLadder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DLadder::Class_Name()
{
   return "DLadder";
}

//______________________________________________________________________________
const char *DLadder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DLadder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DLadder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DLadder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DLadder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DLadder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DLadder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DLadder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DPlane::Class_Name()
{
   return "DPlane";
}

//______________________________________________________________________________
const char *DPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DPlane*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DAlign::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DAlign::Class_Name()
{
   return "DAlign";
}

//______________________________________________________________________________
const char *DAlign::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAlign*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DAlign::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAlign*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DAlign::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAlign*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DAlign::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAlign*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DHelix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DHelix::Class_Name()
{
   return "DHelix";
}

//______________________________________________________________________________
const char *DHelix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DHelix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DHelix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DHelix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DHelix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DHelix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DHelix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DHelix*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DHelixFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DHelixFitter::Class_Name()
{
   return "DHelixFitter";
}

//______________________________________________________________________________
const char *DHelixFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DHelixFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DHelixFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DHelixFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DHelixFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DHelixFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DHelixFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DHelixFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DBeaster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DBeaster::Class_Name()
{
   return "DBeaster";
}

//______________________________________________________________________________
const char *DBeaster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DBeaster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DBeaster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DBeaster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DBeaster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DBeaster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DBeaster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DBeaster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DTracker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DTracker::Class_Name()
{
   return "DTracker";
}

//______________________________________________________________________________
const char *DTracker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DTracker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DTracker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DTracker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DTracker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DTracker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DTracker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DTracker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DStrip::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DStrip::Class_Name()
{
   return "DStrip";
}

//______________________________________________________________________________
const char *DStrip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DStrip*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DStrip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DStrip*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DStrip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DStrip*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DStrip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DStrip*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DLine::Class_Name()
{
   return "DLine";
}

//______________________________________________________________________________
const char *DLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DCut::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DCut::Class_Name()
{
   return "DCut";
}

//______________________________________________________________________________
const char *DCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DCut*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DCut*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DCut*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DCut*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DParticle::Class_Name()
{
   return "DParticle";
}

//______________________________________________________________________________
const char *DParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void DR3::Streamer(TBuffer &R__b)
{
   // Stream an object of class DR3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DR3::Class(),this);
   } else {
      R__b.WriteClassBuffer(DR3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DR3(void *p) {
      return  p ? new(p) ::DR3 : new ::DR3;
   }
   static void *newArray_DR3(Long_t nElements, void *p) {
      return p ? new(p) ::DR3[nElements] : new ::DR3[nElements];
   }
   // Wrapper around operator delete
   static void delete_DR3(void *p) {
      delete ((::DR3*)p);
   }
   static void deleteArray_DR3(void *p) {
      delete [] ((::DR3*)p);
   }
   static void destruct_DR3(void *p) {
      typedef ::DR3 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DR3

//______________________________________________________________________________
void DGlobalTools::Streamer(TBuffer &R__b)
{
   // Stream an object of class DGlobalTools.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DGlobalTools::Class(),this);
   } else {
      R__b.WriteClassBuffer(DGlobalTools::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DGlobalTools(void *p) {
      return  p ? new(p) ::DGlobalTools : new ::DGlobalTools;
   }
   static void *newArray_DGlobalTools(Long_t nElements, void *p) {
      return p ? new(p) ::DGlobalTools[nElements] : new ::DGlobalTools[nElements];
   }
   // Wrapper around operator delete
   static void delete_DGlobalTools(void *p) {
      delete ((::DGlobalTools*)p);
   }
   static void deleteArray_DGlobalTools(void *p) {
      delete [] ((::DGlobalTools*)p);
   }
   static void destruct_DGlobalTools(void *p) {
      typedef ::DGlobalTools current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DGlobalTools

//______________________________________________________________________________
void TNTPixel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNTPixel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNTPixel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNTPixel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNTPixel(void *p) {
      return  p ? new(p) ::TNTPixel : new ::TNTPixel;
   }
   static void *newArray_TNTPixel(Long_t nElements, void *p) {
      return p ? new(p) ::TNTPixel[nElements] : new ::TNTPixel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNTPixel(void *p) {
      delete ((::TNTPixel*)p);
   }
   static void deleteArray_TNTPixel(void *p) {
      delete [] ((::TNTPixel*)p);
   }
   static void destruct_TNTPixel(void *p) {
      typedef ::TNTPixel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TNTPixel

//______________________________________________________________________________
void TNTEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNTEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNTEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNTEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNTEvent(void *p) {
      return  p ? new(p) ::TNTEvent : new ::TNTEvent;
   }
   static void *newArray_TNTEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TNTEvent[nElements] : new ::TNTEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNTEvent(void *p) {
      delete ((::TNTEvent*)p);
   }
   static void deleteArray_TNTEvent(void *p) {
      delete [] ((::TNTEvent*)p);
   }
   static void destruct_TNTEvent(void *p) {
      typedef ::TNTEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TNTEvent

//______________________________________________________________________________
void TNTBoardReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNTBoardReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNTBoardReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNTBoardReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNTBoardReader(void *p) {
      return  p ? new(p) ::TNTBoardReader : new ::TNTBoardReader;
   }
   static void *newArray_TNTBoardReader(Long_t nElements, void *p) {
      return p ? new(p) ::TNTBoardReader[nElements] : new ::TNTBoardReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNTBoardReader(void *p) {
      delete ((::TNTBoardReader*)p);
   }
   static void deleteArray_TNTBoardReader(void *p) {
      delete [] ((::TNTBoardReader*)p);
   }
   static void destruct_TNTBoardReader(void *p) {
      typedef ::TNTBoardReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TNTBoardReader

//______________________________________________________________________________
void PXIPixel::Streamer(TBuffer &R__b)
{
   // Stream an object of class PXIPixel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PXIPixel::Class(),this);
   } else {
      R__b.WriteClassBuffer(PXIPixel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PXIPixel(void *p) {
      return  p ? new(p) ::PXIPixel : new ::PXIPixel;
   }
   static void *newArray_PXIPixel(Long_t nElements, void *p) {
      return p ? new(p) ::PXIPixel[nElements] : new ::PXIPixel[nElements];
   }
   // Wrapper around operator delete
   static void delete_PXIPixel(void *p) {
      delete ((::PXIPixel*)p);
   }
   static void deleteArray_PXIPixel(void *p) {
      delete [] ((::PXIPixel*)p);
   }
   static void destruct_PXIPixel(void *p) {
      typedef ::PXIPixel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PXIPixel

//______________________________________________________________________________
void PXIEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class PXIEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PXIEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(PXIEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PXIEvent(void *p) {
      return  p ? new(p) ::PXIEvent : new ::PXIEvent;
   }
   static void *newArray_PXIEvent(Long_t nElements, void *p) {
      return p ? new(p) ::PXIEvent[nElements] : new ::PXIEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_PXIEvent(void *p) {
      delete ((::PXIEvent*)p);
   }
   static void deleteArray_PXIEvent(void *p) {
      delete [] ((::PXIEvent*)p);
   }
   static void destruct_PXIEvent(void *p) {
      typedef ::PXIEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PXIEvent

//______________________________________________________________________________
void PXIBoardReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class PXIBoardReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PXIBoardReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(PXIBoardReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PXIBoardReader(void *p) {
      return  p ? new(p) ::PXIBoardReader : new ::PXIBoardReader;
   }
   static void *newArray_PXIBoardReader(Long_t nElements, void *p) {
      return p ? new(p) ::PXIBoardReader[nElements] : new ::PXIBoardReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_PXIBoardReader(void *p) {
      delete ((::PXIBoardReader*)p);
   }
   static void deleteArray_PXIBoardReader(void *p) {
      delete [] ((::PXIBoardReader*)p);
   }
   static void destruct_PXIBoardReader(void *p) {
      typedef ::PXIBoardReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PXIBoardReader

//______________________________________________________________________________
void PXIePixel::Streamer(TBuffer &R__b)
{
   // Stream an object of class PXIePixel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PXIePixel::Class(),this);
   } else {
      R__b.WriteClassBuffer(PXIePixel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PXIePixel(void *p) {
      return  p ? new(p) ::PXIePixel : new ::PXIePixel;
   }
   static void *newArray_PXIePixel(Long_t nElements, void *p) {
      return p ? new(p) ::PXIePixel[nElements] : new ::PXIePixel[nElements];
   }
   // Wrapper around operator delete
   static void delete_PXIePixel(void *p) {
      delete ((::PXIePixel*)p);
   }
   static void deleteArray_PXIePixel(void *p) {
      delete [] ((::PXIePixel*)p);
   }
   static void destruct_PXIePixel(void *p) {
      typedef ::PXIePixel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PXIePixel

//______________________________________________________________________________
void PXIeEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class PXIeEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PXIeEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(PXIeEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PXIeEvent(void *p) {
      return  p ? new(p) ::PXIeEvent : new ::PXIeEvent;
   }
   static void *newArray_PXIeEvent(Long_t nElements, void *p) {
      return p ? new(p) ::PXIeEvent[nElements] : new ::PXIeEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_PXIeEvent(void *p) {
      delete ((::PXIeEvent*)p);
   }
   static void deleteArray_PXIeEvent(void *p) {
      delete [] ((::PXIeEvent*)p);
   }
   static void destruct_PXIeEvent(void *p) {
      typedef ::PXIeEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PXIeEvent

//______________________________________________________________________________
void PXIeBoardReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class PXIeBoardReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PXIeBoardReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(PXIeBoardReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PXIeBoardReader(void *p) {
      return  p ? new(p) ::PXIeBoardReader : new ::PXIeBoardReader;
   }
   static void *newArray_PXIeBoardReader(Long_t nElements, void *p) {
      return p ? new(p) ::PXIeBoardReader[nElements] : new ::PXIeBoardReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_PXIeBoardReader(void *p) {
      delete ((::PXIeBoardReader*)p);
   }
   static void deleteArray_PXIeBoardReader(void *p) {
      delete [] ((::PXIeBoardReader*)p);
   }
   static void destruct_PXIeBoardReader(void *p) {
      typedef ::PXIeBoardReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PXIeBoardReader

//______________________________________________________________________________
void GIGPixel::Streamer(TBuffer &R__b)
{
   // Stream an object of class GIGPixel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GIGPixel::Class(),this);
   } else {
      R__b.WriteClassBuffer(GIGPixel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GIGPixel(void *p) {
      return  p ? new(p) ::GIGPixel : new ::GIGPixel;
   }
   static void *newArray_GIGPixel(Long_t nElements, void *p) {
      return p ? new(p) ::GIGPixel[nElements] : new ::GIGPixel[nElements];
   }
   // Wrapper around operator delete
   static void delete_GIGPixel(void *p) {
      delete ((::GIGPixel*)p);
   }
   static void deleteArray_GIGPixel(void *p) {
      delete [] ((::GIGPixel*)p);
   }
   static void destruct_GIGPixel(void *p) {
      typedef ::GIGPixel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GIGPixel

//______________________________________________________________________________
void GIGMonteCarlo::Streamer(TBuffer &R__b)
{
   // Stream an object of class GIGMonteCarlo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GIGMonteCarlo::Class(),this);
   } else {
      R__b.WriteClassBuffer(GIGMonteCarlo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GIGMonteCarlo(void *p) {
      return  p ? new(p) ::GIGMonteCarlo : new ::GIGMonteCarlo;
   }
   static void *newArray_GIGMonteCarlo(Long_t nElements, void *p) {
      return p ? new(p) ::GIGMonteCarlo[nElements] : new ::GIGMonteCarlo[nElements];
   }
   // Wrapper around operator delete
   static void delete_GIGMonteCarlo(void *p) {
      delete ((::GIGMonteCarlo*)p);
   }
   static void deleteArray_GIGMonteCarlo(void *p) {
      delete [] ((::GIGMonteCarlo*)p);
   }
   static void destruct_GIGMonteCarlo(void *p) {
      typedef ::GIGMonteCarlo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GIGMonteCarlo

//______________________________________________________________________________
void GIGEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class GIGEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GIGEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(GIGEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GIGEvent(void *p) {
      return  p ? new(p) ::GIGEvent : new ::GIGEvent;
   }
   static void *newArray_GIGEvent(Long_t nElements, void *p) {
      return p ? new(p) ::GIGEvent[nElements] : new ::GIGEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_GIGEvent(void *p) {
      delete ((::GIGEvent*)p);
   }
   static void deleteArray_GIGEvent(void *p) {
      delete [] ((::GIGEvent*)p);
   }
   static void destruct_GIGEvent(void *p) {
      typedef ::GIGEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GIGEvent

//______________________________________________________________________________
void GIGBoardReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class GIGBoardReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GIGBoardReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(GIGBoardReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GIGBoardReader(void *p) {
      return  p ? new(p) ::GIGBoardReader : new ::GIGBoardReader;
   }
   static void *newArray_GIGBoardReader(Long_t nElements, void *p) {
      return p ? new(p) ::GIGBoardReader[nElements] : new ::GIGBoardReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_GIGBoardReader(void *p) {
      delete ((::GIGBoardReader*)p);
   }
   static void deleteArray_GIGBoardReader(void *p) {
      delete [] ((::GIGBoardReader*)p);
   }
   static void destruct_GIGBoardReader(void *p) {
      typedef ::GIGBoardReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GIGBoardReader

//______________________________________________________________________________
void IMGPixel::Streamer(TBuffer &R__b)
{
   // Stream an object of class IMGPixel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IMGPixel::Class(),this);
   } else {
      R__b.WriteClassBuffer(IMGPixel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_IMGPixel(void *p) {
      return  p ? new(p) ::IMGPixel : new ::IMGPixel;
   }
   static void *newArray_IMGPixel(Long_t nElements, void *p) {
      return p ? new(p) ::IMGPixel[nElements] : new ::IMGPixel[nElements];
   }
   // Wrapper around operator delete
   static void delete_IMGPixel(void *p) {
      delete ((::IMGPixel*)p);
   }
   static void deleteArray_IMGPixel(void *p) {
      delete [] ((::IMGPixel*)p);
   }
   static void destruct_IMGPixel(void *p) {
      typedef ::IMGPixel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IMGPixel

//______________________________________________________________________________
void IMGEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class IMGEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IMGEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(IMGEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_IMGEvent(void *p) {
      return  p ? new(p) ::IMGEvent : new ::IMGEvent;
   }
   static void *newArray_IMGEvent(Long_t nElements, void *p) {
      return p ? new(p) ::IMGEvent[nElements] : new ::IMGEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_IMGEvent(void *p) {
      delete ((::IMGEvent*)p);
   }
   static void deleteArray_IMGEvent(void *p) {
      delete [] ((::IMGEvent*)p);
   }
   static void destruct_IMGEvent(void *p) {
      typedef ::IMGEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IMGEvent

//______________________________________________________________________________
void IMGBoardReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class IMGBoardReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IMGBoardReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(IMGBoardReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_IMGBoardReader(void *p) {
      return  p ? new(p) ::IMGBoardReader : new ::IMGBoardReader;
   }
   static void *newArray_IMGBoardReader(Long_t nElements, void *p) {
      return p ? new(p) ::IMGBoardReader[nElements] : new ::IMGBoardReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_IMGBoardReader(void *p) {
      delete ((::IMGBoardReader*)p);
   }
   static void deleteArray_IMGBoardReader(void *p) {
      delete [] ((::IMGBoardReader*)p);
   }
   static void destruct_IMGBoardReader(void *p) {
      typedef ::IMGBoardReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IMGBoardReader

//______________________________________________________________________________
void BoardReaderPixel::Streamer(TBuffer &R__b)
{
   // Stream an object of class BoardReaderPixel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BoardReaderPixel::Class(),this);
   } else {
      R__b.WriteClassBuffer(BoardReaderPixel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BoardReaderPixel(void *p) {
      return  p ? new(p) ::BoardReaderPixel : new ::BoardReaderPixel;
   }
   static void *newArray_BoardReaderPixel(Long_t nElements, void *p) {
      return p ? new(p) ::BoardReaderPixel[nElements] : new ::BoardReaderPixel[nElements];
   }
   // Wrapper around operator delete
   static void delete_BoardReaderPixel(void *p) {
      delete ((::BoardReaderPixel*)p);
   }
   static void deleteArray_BoardReaderPixel(void *p) {
      delete [] ((::BoardReaderPixel*)p);
   }
   static void destruct_BoardReaderPixel(void *p) {
      typedef ::BoardReaderPixel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BoardReaderPixel

//______________________________________________________________________________
void BoardReaderEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class BoardReaderEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BoardReaderEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(BoardReaderEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BoardReaderEvent(void *p) {
      return  p ? new(p) ::BoardReaderEvent : new ::BoardReaderEvent;
   }
   static void *newArray_BoardReaderEvent(Long_t nElements, void *p) {
      return p ? new(p) ::BoardReaderEvent[nElements] : new ::BoardReaderEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_BoardReaderEvent(void *p) {
      delete ((::BoardReaderEvent*)p);
   }
   static void deleteArray_BoardReaderEvent(void *p) {
      delete [] ((::BoardReaderEvent*)p);
   }
   static void destruct_BoardReaderEvent(void *p) {
      typedef ::BoardReaderEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BoardReaderEvent

//______________________________________________________________________________
void VMEBoardReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class VMEBoardReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(VMEBoardReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(VMEBoardReader::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_VMEBoardReader(void *p) {
      delete ((::VMEBoardReader*)p);
   }
   static void deleteArray_VMEBoardReader(void *p) {
      delete [] ((::VMEBoardReader*)p);
   }
   static void destruct_VMEBoardReader(void *p) {
      typedef ::VMEBoardReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::VMEBoardReader

//______________________________________________________________________________
void DPixel::Streamer(TBuffer &R__b)
{
   // Stream an object of class DPixel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DPixel::Class(),this);
   } else {
      R__b.WriteClassBuffer(DPixel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DPixel(void *p) {
      return  p ? new(p) ::DPixel : new ::DPixel;
   }
   static void *newArray_DPixel(Long_t nElements, void *p) {
      return p ? new(p) ::DPixel[nElements] : new ::DPixel[nElements];
   }
   // Wrapper around operator delete
   static void delete_DPixel(void *p) {
      delete ((::DPixel*)p);
   }
   static void deleteArray_DPixel(void *p) {
      delete [] ((::DPixel*)p);
   }
   static void destruct_DPixel(void *p) {
      typedef ::DPixel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DPixel

//______________________________________________________________________________
void DHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class DHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(DHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DHit(void *p) {
      return  p ? new(p) ::DHit : new ::DHit;
   }
   static void *newArray_DHit(Long_t nElements, void *p) {
      return p ? new(p) ::DHit[nElements] : new ::DHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_DHit(void *p) {
      delete ((::DHit*)p);
   }
   static void deleteArray_DHit(void *p) {
      delete [] ((::DHit*)p);
   }
   static void destruct_DHit(void *p) {
      typedef ::DHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DHit

//______________________________________________________________________________
void DTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class DTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(DTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DTrack(void *p) {
      return  p ? new(p) ::DTrack : new ::DTrack;
   }
   static void *newArray_DTrack(Long_t nElements, void *p) {
      return p ? new(p) ::DTrack[nElements] : new ::DTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_DTrack(void *p) {
      delete ((::DTrack*)p);
   }
   static void deleteArray_DTrack(void *p) {
      delete [] ((::DTrack*)p);
   }
   static void destruct_DTrack(void *p) {
      typedef ::DTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DTrack

//______________________________________________________________________________
void DEventMC::Streamer(TBuffer &R__b)
{
   // Stream an object of class DEventMC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DEventMC::Class(),this);
   } else {
      R__b.WriteClassBuffer(DEventMC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DEventMC(void *p) {
      return  p ? new(p) ::DEventMC : new ::DEventMC;
   }
   static void *newArray_DEventMC(Long_t nElements, void *p) {
      return p ? new(p) ::DEventMC[nElements] : new ::DEventMC[nElements];
   }
   // Wrapper around operator delete
   static void delete_DEventMC(void *p) {
      delete ((::DEventMC*)p);
   }
   static void deleteArray_DEventMC(void *p) {
      delete [] ((::DEventMC*)p);
   }
   static void destruct_DEventMC(void *p) {
      typedef ::DEventMC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DEventMC

//______________________________________________________________________________
void DEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class DEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(DEventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DEventHeader(void *p) {
      return  p ? new(p) ::DEventHeader : new ::DEventHeader;
   }
   static void *newArray_DEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::DEventHeader[nElements] : new ::DEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_DEventHeader(void *p) {
      delete ((::DEventHeader*)p);
   }
   static void deleteArray_DEventHeader(void *p) {
      delete [] ((::DEventHeader*)p);
   }
   static void destruct_DEventHeader(void *p) {
      typedef ::DEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DEventHeader

//______________________________________________________________________________
void DEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class DEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(DEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DEvent(void *p) {
      return  p ? new(p) ::DEvent : new ::DEvent;
   }
   static void *newArray_DEvent(Long_t nElements, void *p) {
      return p ? new(p) ::DEvent[nElements] : new ::DEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_DEvent(void *p) {
      delete ((::DEvent*)p);
   }
   static void deleteArray_DEvent(void *p) {
      delete [] ((::DEvent*)p);
   }
   static void destruct_DEvent(void *p) {
      typedef ::DEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DEvent

//______________________________________________________________________________
void DAuthenticHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class DAuthenticHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DAuthenticHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(DAuthenticHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DAuthenticHit(void *p) {
      return  p ? new(p) ::DAuthenticHit : new ::DAuthenticHit;
   }
   static void *newArray_DAuthenticHit(Long_t nElements, void *p) {
      return p ? new(p) ::DAuthenticHit[nElements] : new ::DAuthenticHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_DAuthenticHit(void *p) {
      delete ((::DAuthenticHit*)p);
   }
   static void deleteArray_DAuthenticHit(void *p) {
      delete [] ((::DAuthenticHit*)p);
   }
   static void destruct_DAuthenticHit(void *p) {
      typedef ::DAuthenticHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DAuthenticHit

//______________________________________________________________________________
void DAuthenticPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class DAuthenticPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DAuthenticPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(DAuthenticPlane::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DAuthenticPlane(void *p) {
      return  p ? new(p) ::DAuthenticPlane : new ::DAuthenticPlane;
   }
   static void *newArray_DAuthenticPlane(Long_t nElements, void *p) {
      return p ? new(p) ::DAuthenticPlane[nElements] : new ::DAuthenticPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_DAuthenticPlane(void *p) {
      delete ((::DAuthenticPlane*)p);
   }
   static void deleteArray_DAuthenticPlane(void *p) {
      delete [] ((::DAuthenticPlane*)p);
   }
   static void destruct_DAuthenticPlane(void *p) {
      typedef ::DAuthenticPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DAuthenticPlane

//______________________________________________________________________________
void DTransparentPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class DTransparentPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DTransparentPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(DTransparentPlane::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DTransparentPlane(void *p) {
      return  p ? new(p) ::DTransparentPlane : new ::DTransparentPlane;
   }
   static void *newArray_DTransparentPlane(Long_t nElements, void *p) {
      return p ? new(p) ::DTransparentPlane[nElements] : new ::DTransparentPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_DTransparentPlane(void *p) {
      delete ((::DTransparentPlane*)p);
   }
   static void deleteArray_DTransparentPlane(void *p) {
      delete [] ((::DTransparentPlane*)p);
   }
   static void destruct_DTransparentPlane(void *p) {
      typedef ::DTransparentPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DTransparentPlane

//______________________________________________________________________________
void DSession::Streamer(TBuffer &R__b)
{
   // Stream an object of class DSession.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DSession::Class(),this);
   } else {
      R__b.WriteClassBuffer(DSession::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DSession(void *p) {
      return  p ? new(p) ::DSession : new ::DSession;
   }
   static void *newArray_DSession(Long_t nElements, void *p) {
      return p ? new(p) ::DSession[nElements] : new ::DSession[nElements];
   }
   // Wrapper around operator delete
   static void delete_DSession(void *p) {
      delete ((::DSession*)p);
   }
   static void deleteArray_DSession(void *p) {
      delete [] ((::DSession*)p);
   }
   static void destruct_DSession(void *p) {
      typedef ::DSession current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DSession

//______________________________________________________________________________
void DSetup::Streamer(TBuffer &R__b)
{
   // Stream an object of class DSetup.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DSetup::Class(),this);
   } else {
      R__b.WriteClassBuffer(DSetup::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DSetup(void *p) {
      return  p ? new(p) ::DSetup : new ::DSetup;
   }
   static void *newArray_DSetup(Long_t nElements, void *p) {
      return p ? new(p) ::DSetup[nElements] : new ::DSetup[nElements];
   }
   // Wrapper around operator delete
   static void delete_DSetup(void *p) {
      delete ((::DSetup*)p);
   }
   static void deleteArray_DSetup(void *p) {
      delete [] ((::DSetup*)p);
   }
   static void destruct_DSetup(void *p) {
      typedef ::DSetup current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DSetup

//______________________________________________________________________________
void MCBoardReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class MCBoardReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MCBoardReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(MCBoardReader::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MCBoardReader(void *p) {
      delete ((::MCBoardReader*)p);
   }
   static void deleteArray_MCBoardReader(void *p) {
      delete [] ((::MCBoardReader*)p);
   }
   static void destruct_MCBoardReader(void *p) {
      typedef ::MCBoardReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MCBoardReader

//______________________________________________________________________________
void BoardReaderIHEP::Streamer(TBuffer &R__b)
{
   // Stream an object of class BoardReaderIHEP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BoardReaderIHEP::Class(),this);
   } else {
      R__b.WriteClassBuffer(BoardReaderIHEP::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BoardReaderIHEP(void *p) {
      delete ((::BoardReaderIHEP*)p);
   }
   static void deleteArray_BoardReaderIHEP(void *p) {
      delete [] ((::BoardReaderIHEP*)p);
   }
   static void destruct_BoardReaderIHEP(void *p) {
      typedef ::BoardReaderIHEP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BoardReaderIHEP

//______________________________________________________________________________
void AliMIMOSA22RawStreamVASingle::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliMIMOSA22RawStreamVASingle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliMIMOSA22RawStreamVASingle::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliMIMOSA22RawStreamVASingle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliMIMOSA22RawStreamVASingle(void *p) {
      return  p ? new(p) ::AliMIMOSA22RawStreamVASingle : new ::AliMIMOSA22RawStreamVASingle;
   }
   static void *newArray_AliMIMOSA22RawStreamVASingle(Long_t nElements, void *p) {
      return p ? new(p) ::AliMIMOSA22RawStreamVASingle[nElements] : new ::AliMIMOSA22RawStreamVASingle[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliMIMOSA22RawStreamVASingle(void *p) {
      delete ((::AliMIMOSA22RawStreamVASingle*)p);
   }
   static void deleteArray_AliMIMOSA22RawStreamVASingle(void *p) {
      delete [] ((::AliMIMOSA22RawStreamVASingle*)p);
   }
   static void destruct_AliMIMOSA22RawStreamVASingle(void *p) {
      typedef ::AliMIMOSA22RawStreamVASingle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliMIMOSA22RawStreamVASingle

//______________________________________________________________________________
void DecoderM18::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecoderM18.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecoderM18::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecoderM18::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecoderM18(void *p) {
      delete ((::DecoderM18*)p);
   }
   static void deleteArray_DecoderM18(void *p) {
      delete [] ((::DecoderM18*)p);
   }
   static void destruct_DecoderM18(void *p) {
      typedef ::DecoderM18 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecoderM18

//______________________________________________________________________________
void DecoderGeant::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecoderGeant.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecoderGeant::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecoderGeant::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecoderGeant(void *p) {
      delete ((::DecoderGeant*)p);
   }
   static void deleteArray_DecoderGeant(void *p) {
      delete [] ((::DecoderGeant*)p);
   }
   static void destruct_DecoderGeant(void *p) {
      typedef ::DecoderGeant current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecoderGeant

//______________________________________________________________________________
void DAcq::Streamer(TBuffer &R__b)
{
   // Stream an object of class DAcq.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DAcq::Class(),this);
   } else {
      R__b.WriteClassBuffer(DAcq::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DAcq(void *p) {
      return  p ? new(p) ::DAcq : new ::DAcq;
   }
   static void *newArray_DAcq(Long_t nElements, void *p) {
      return p ? new(p) ::DAcq[nElements] : new ::DAcq[nElements];
   }
   // Wrapper around operator delete
   static void delete_DAcq(void *p) {
      delete ((::DAcq*)p);
   }
   static void deleteArray_DAcq(void *p) {
      delete [] ((::DAcq*)p);
   }
   static void destruct_DAcq(void *p) {
      typedef ::DAcq current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DAcq

//______________________________________________________________________________
void DataPoints::Streamer(TBuffer &R__b)
{
   // Stream an object of class DataPoints.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DataPoints::Class(),this);
   } else {
      R__b.WriteClassBuffer(DataPoints::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DataPoints(void *p) {
      return  p ? new(p) ::DataPoints : new ::DataPoints;
   }
   static void *newArray_DataPoints(Long_t nElements, void *p) {
      return p ? new(p) ::DataPoints[nElements] : new ::DataPoints[nElements];
   }
   // Wrapper around operator delete
   static void delete_DataPoints(void *p) {
      delete ((::DataPoints*)p);
   }
   static void deleteArray_DataPoints(void *p) {
      delete [] ((::DataPoints*)p);
   }
   static void destruct_DataPoints(void *p) {
      typedef ::DataPoints current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DataPoints

namespace ROOT {
   // Wrappers around operator new
   static void *new_DPrecAlign(void *p) {
      return  p ? new(p) ::DPrecAlign : new ::DPrecAlign;
   }
   static void *newArray_DPrecAlign(Long_t nElements, void *p) {
      return p ? new(p) ::DPrecAlign[nElements] : new ::DPrecAlign[nElements];
   }
   // Wrapper around operator delete
   static void delete_DPrecAlign(void *p) {
      delete ((::DPrecAlign*)p);
   }
   static void deleteArray_DPrecAlign(void *p) {
      delete [] ((::DPrecAlign*)p);
   }
   static void destruct_DPrecAlign(void *p) {
      typedef ::DPrecAlign current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_DPrecAlign(TBuffer &buf, void *obj) {
      ((::DPrecAlign*)obj)->::DPrecAlign::Streamer(buf);
   }
} // end of namespace ROOT for class ::DPrecAlign

//______________________________________________________________________________
void MiniVector::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiniVector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiniVector::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiniVector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiniVector(void *p) {
      return  p ? new(p) ::MiniVector : new ::MiniVector;
   }
   static void *newArray_MiniVector(Long_t nElements, void *p) {
      return p ? new(p) ::MiniVector[nElements] : new ::MiniVector[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiniVector(void *p) {
      delete ((::MiniVector*)p);
   }
   static void deleteArray_MiniVector(void *p) {
      delete [] ((::MiniVector*)p);
   }
   static void destruct_MiniVector(void *p) {
      typedef ::MiniVector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiniVector

//______________________________________________________________________________
void DLadder::Streamer(TBuffer &R__b)
{
   // Stream an object of class DLadder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DLadder::Class(),this);
   } else {
      R__b.WriteClassBuffer(DLadder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DLadder(void *p) {
      return  p ? new(p) ::DLadder : new ::DLadder;
   }
   static void *newArray_DLadder(Long_t nElements, void *p) {
      return p ? new(p) ::DLadder[nElements] : new ::DLadder[nElements];
   }
   // Wrapper around operator delete
   static void delete_DLadder(void *p) {
      delete ((::DLadder*)p);
   }
   static void deleteArray_DLadder(void *p) {
      delete [] ((::DLadder*)p);
   }
   static void destruct_DLadder(void *p) {
      typedef ::DLadder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DLadder

//______________________________________________________________________________
void DPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class DPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(DPlane::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DPlane(void *p) {
      return  p ? new(p) ::DPlane : new ::DPlane;
   }
   static void *newArray_DPlane(Long_t nElements, void *p) {
      return p ? new(p) ::DPlane[nElements] : new ::DPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_DPlane(void *p) {
      delete ((::DPlane*)p);
   }
   static void deleteArray_DPlane(void *p) {
      delete [] ((::DPlane*)p);
   }
   static void destruct_DPlane(void *p) {
      typedef ::DPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DPlane

//______________________________________________________________________________
void DAlign::Streamer(TBuffer &R__b)
{
   // Stream an object of class DAlign.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DAlign::Class(),this);
   } else {
      R__b.WriteClassBuffer(DAlign::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DAlign(void *p) {
      return  p ? new(p) ::DAlign : new ::DAlign;
   }
   static void *newArray_DAlign(Long_t nElements, void *p) {
      return p ? new(p) ::DAlign[nElements] : new ::DAlign[nElements];
   }
   // Wrapper around operator delete
   static void delete_DAlign(void *p) {
      delete ((::DAlign*)p);
   }
   static void deleteArray_DAlign(void *p) {
      delete [] ((::DAlign*)p);
   }
   static void destruct_DAlign(void *p) {
      typedef ::DAlign current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DAlign

//______________________________________________________________________________
void DHelix::Streamer(TBuffer &R__b)
{
   // Stream an object of class DHelix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DHelix::Class(),this);
   } else {
      R__b.WriteClassBuffer(DHelix::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DHelix(void *p) {
      return  p ? new(p) ::DHelix : new ::DHelix;
   }
   static void *newArray_DHelix(Long_t nElements, void *p) {
      return p ? new(p) ::DHelix[nElements] : new ::DHelix[nElements];
   }
   // Wrapper around operator delete
   static void delete_DHelix(void *p) {
      delete ((::DHelix*)p);
   }
   static void deleteArray_DHelix(void *p) {
      delete [] ((::DHelix*)p);
   }
   static void destruct_DHelix(void *p) {
      typedef ::DHelix current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DHelix

//______________________________________________________________________________
void DHelixFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class DHelixFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DHelixFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(DHelixFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_DHelixFitter(void *p) {
      delete ((::DHelixFitter*)p);
   }
   static void deleteArray_DHelixFitter(void *p) {
      delete [] ((::DHelixFitter*)p);
   }
   static void destruct_DHelixFitter(void *p) {
      typedef ::DHelixFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DHelixFitter

//______________________________________________________________________________
void DBeaster::Streamer(TBuffer &R__b)
{
   // Stream an object of class DBeaster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DBeaster::Class(),this);
   } else {
      R__b.WriteClassBuffer(DBeaster::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_DBeaster(void *p) {
      delete ((::DBeaster*)p);
   }
   static void deleteArray_DBeaster(void *p) {
      delete [] ((::DBeaster*)p);
   }
   static void destruct_DBeaster(void *p) {
      typedef ::DBeaster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DBeaster

//______________________________________________________________________________
void DTracker::Streamer(TBuffer &R__b)
{
   // Stream an object of class DTracker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DTracker::Class(),this);
   } else {
      R__b.WriteClassBuffer(DTracker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DTracker(void *p) {
      return  p ? new(p) ::DTracker : new ::DTracker;
   }
   static void *newArray_DTracker(Long_t nElements, void *p) {
      return p ? new(p) ::DTracker[nElements] : new ::DTracker[nElements];
   }
   // Wrapper around operator delete
   static void delete_DTracker(void *p) {
      delete ((::DTracker*)p);
   }
   static void deleteArray_DTracker(void *p) {
      delete [] ((::DTracker*)p);
   }
   static void destruct_DTracker(void *p) {
      typedef ::DTracker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DTracker

//______________________________________________________________________________
void DStrip::Streamer(TBuffer &R__b)
{
   // Stream an object of class DStrip.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DStrip::Class(),this);
   } else {
      R__b.WriteClassBuffer(DStrip::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DStrip(void *p) {
      return  p ? new(p) ::DStrip : new ::DStrip;
   }
   static void *newArray_DStrip(Long_t nElements, void *p) {
      return p ? new(p) ::DStrip[nElements] : new ::DStrip[nElements];
   }
   // Wrapper around operator delete
   static void delete_DStrip(void *p) {
      delete ((::DStrip*)p);
   }
   static void deleteArray_DStrip(void *p) {
      delete [] ((::DStrip*)p);
   }
   static void destruct_DStrip(void *p) {
      typedef ::DStrip current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DStrip

//______________________________________________________________________________
void DLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class DLine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DLine::Class(),this);
   } else {
      R__b.WriteClassBuffer(DLine::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DLine(void *p) {
      return  p ? new(p) ::DLine : new ::DLine;
   }
   static void *newArray_DLine(Long_t nElements, void *p) {
      return p ? new(p) ::DLine[nElements] : new ::DLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_DLine(void *p) {
      delete ((::DLine*)p);
   }
   static void deleteArray_DLine(void *p) {
      delete [] ((::DLine*)p);
   }
   static void destruct_DLine(void *p) {
      typedef ::DLine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DLine

//______________________________________________________________________________
void DCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class DCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(DCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DCut(void *p) {
      return  p ? new(p) ::DCut : new ::DCut;
   }
   static void *newArray_DCut(Long_t nElements, void *p) {
      return p ? new(p) ::DCut[nElements] : new ::DCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_DCut(void *p) {
      delete ((::DCut*)p);
   }
   static void deleteArray_DCut(void *p) {
      delete [] ((::DCut*)p);
   }
   static void destruct_DCut(void *p) {
      typedef ::DCut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DCut

//______________________________________________________________________________
void DParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class DParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(DParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DParticle(void *p) {
      return  p ? new(p) ::DParticle : new ::DParticle;
   }
   static void *newArray_DParticle(Long_t nElements, void *p) {
      return p ? new(p) ::DParticle[nElements] : new ::DParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_DParticle(void *p) {
      delete ((::DParticle*)p);
   }
   static void deleteArray_DParticle(void *p) {
      delete [] ((::DParticle*)p);
   }
   static void destruct_DParticle(void *p) {
      typedef ::DParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DParticle

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 216,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 216,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 216,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = 0);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 216,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)0x0)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *vectorlETNTPixelgR_Dictionary();
   static void vectorlETNTPixelgR_TClassManip(TClass*);
   static void *new_vectorlETNTPixelgR(void *p = 0);
   static void *newArray_vectorlETNTPixelgR(Long_t size, void *p);
   static void delete_vectorlETNTPixelgR(void *p);
   static void deleteArray_vectorlETNTPixelgR(void *p);
   static void destruct_vectorlETNTPixelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TNTPixel>*)
   {
      vector<TNTPixel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TNTPixel>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TNTPixel>", -2, "vector", 216,
                  typeid(vector<TNTPixel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETNTPixelgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TNTPixel>) );
      instance.SetNew(&new_vectorlETNTPixelgR);
      instance.SetNewArray(&newArray_vectorlETNTPixelgR);
      instance.SetDelete(&delete_vectorlETNTPixelgR);
      instance.SetDeleteArray(&deleteArray_vectorlETNTPixelgR);
      instance.SetDestructor(&destruct_vectorlETNTPixelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TNTPixel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TNTPixel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETNTPixelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TNTPixel>*)0x0)->GetClass();
      vectorlETNTPixelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETNTPixelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETNTPixelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TNTPixel> : new vector<TNTPixel>;
   }
   static void *newArray_vectorlETNTPixelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TNTPixel>[nElements] : new vector<TNTPixel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETNTPixelgR(void *p) {
      delete ((vector<TNTPixel>*)p);
   }
   static void deleteArray_vectorlETNTPixelgR(void *p) {
      delete [] ((vector<TNTPixel>*)p);
   }
   static void destruct_vectorlETNTPixelgR(void *p) {
      typedef vector<TNTPixel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TNTPixel>

namespace ROOT {
   static TClass *vectorlESimPixel_tgR_Dictionary();
   static void vectorlESimPixel_tgR_TClassManip(TClass*);
   static void *new_vectorlESimPixel_tgR(void *p = 0);
   static void *newArray_vectorlESimPixel_tgR(Long_t size, void *p);
   static void delete_vectorlESimPixel_tgR(void *p);
   static void deleteArray_vectorlESimPixel_tgR(void *p);
   static void destruct_vectorlESimPixel_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SimPixel_t>*)
   {
      vector<SimPixel_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SimPixel_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SimPixel_t>", -2, "vector", 216,
                  typeid(vector<SimPixel_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESimPixel_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SimPixel_t>) );
      instance.SetNew(&new_vectorlESimPixel_tgR);
      instance.SetNewArray(&newArray_vectorlESimPixel_tgR);
      instance.SetDelete(&delete_vectorlESimPixel_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlESimPixel_tgR);
      instance.SetDestructor(&destruct_vectorlESimPixel_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SimPixel_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SimPixel_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESimPixel_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SimPixel_t>*)0x0)->GetClass();
      vectorlESimPixel_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESimPixel_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESimPixel_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SimPixel_t> : new vector<SimPixel_t>;
   }
   static void *newArray_vectorlESimPixel_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SimPixel_t>[nElements] : new vector<SimPixel_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESimPixel_tgR(void *p) {
      delete ((vector<SimPixel_t>*)p);
   }
   static void deleteArray_vectorlESimPixel_tgR(void *p) {
      delete [] ((vector<SimPixel_t>*)p);
   }
   static void destruct_vectorlESimPixel_tgR(void *p) {
      typedef vector<SimPixel_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SimPixel_t>

namespace ROOT {
   static TClass *vectorlESimParticle_tgR_Dictionary();
   static void vectorlESimParticle_tgR_TClassManip(TClass*);
   static void *new_vectorlESimParticle_tgR(void *p = 0);
   static void *newArray_vectorlESimParticle_tgR(Long_t size, void *p);
   static void delete_vectorlESimParticle_tgR(void *p);
   static void deleteArray_vectorlESimParticle_tgR(void *p);
   static void destruct_vectorlESimParticle_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SimParticle_t>*)
   {
      vector<SimParticle_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SimParticle_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SimParticle_t>", -2, "vector", 216,
                  typeid(vector<SimParticle_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESimParticle_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SimParticle_t>) );
      instance.SetNew(&new_vectorlESimParticle_tgR);
      instance.SetNewArray(&newArray_vectorlESimParticle_tgR);
      instance.SetDelete(&delete_vectorlESimParticle_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlESimParticle_tgR);
      instance.SetDestructor(&destruct_vectorlESimParticle_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SimParticle_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SimParticle_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESimParticle_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SimParticle_t>*)0x0)->GetClass();
      vectorlESimParticle_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESimParticle_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESimParticle_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SimParticle_t> : new vector<SimParticle_t>;
   }
   static void *newArray_vectorlESimParticle_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SimParticle_t>[nElements] : new vector<SimParticle_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESimParticle_tgR(void *p) {
      delete ((vector<SimParticle_t>*)p);
   }
   static void deleteArray_vectorlESimParticle_tgR(void *p) {
      delete [] ((vector<SimParticle_t>*)p);
   }
   static void destruct_vectorlESimParticle_tgR(void *p) {
      typedef vector<SimParticle_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SimParticle_t>

namespace ROOT {
   static TClass *vectorlESimHit_tgR_Dictionary();
   static void vectorlESimHit_tgR_TClassManip(TClass*);
   static void *new_vectorlESimHit_tgR(void *p = 0);
   static void *newArray_vectorlESimHit_tgR(Long_t size, void *p);
   static void delete_vectorlESimHit_tgR(void *p);
   static void deleteArray_vectorlESimHit_tgR(void *p);
   static void destruct_vectorlESimHit_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SimHit_t>*)
   {
      vector<SimHit_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SimHit_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SimHit_t>", -2, "vector", 216,
                  typeid(vector<SimHit_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESimHit_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SimHit_t>) );
      instance.SetNew(&new_vectorlESimHit_tgR);
      instance.SetNewArray(&newArray_vectorlESimHit_tgR);
      instance.SetDelete(&delete_vectorlESimHit_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlESimHit_tgR);
      instance.SetDestructor(&destruct_vectorlESimHit_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SimHit_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SimHit_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESimHit_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SimHit_t>*)0x0)->GetClass();
      vectorlESimHit_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESimHit_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESimHit_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SimHit_t> : new vector<SimHit_t>;
   }
   static void *newArray_vectorlESimHit_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SimHit_t>[nElements] : new vector<SimHit_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESimHit_tgR(void *p) {
      delete ((vector<SimHit_t>*)p);
   }
   static void deleteArray_vectorlESimHit_tgR(void *p) {
      delete [] ((vector<SimHit_t>*)p);
   }
   static void destruct_vectorlESimHit_tgR(void *p) {
      typedef vector<SimHit_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SimHit_t>

namespace ROOT {
   static TClass *vectorlEPXIePixelgR_Dictionary();
   static void vectorlEPXIePixelgR_TClassManip(TClass*);
   static void *new_vectorlEPXIePixelgR(void *p = 0);
   static void *newArray_vectorlEPXIePixelgR(Long_t size, void *p);
   static void delete_vectorlEPXIePixelgR(void *p);
   static void deleteArray_vectorlEPXIePixelgR(void *p);
   static void destruct_vectorlEPXIePixelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<PXIePixel>*)
   {
      vector<PXIePixel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<PXIePixel>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<PXIePixel>", -2, "vector", 216,
                  typeid(vector<PXIePixel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEPXIePixelgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<PXIePixel>) );
      instance.SetNew(&new_vectorlEPXIePixelgR);
      instance.SetNewArray(&newArray_vectorlEPXIePixelgR);
      instance.SetDelete(&delete_vectorlEPXIePixelgR);
      instance.SetDeleteArray(&deleteArray_vectorlEPXIePixelgR);
      instance.SetDestructor(&destruct_vectorlEPXIePixelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<PXIePixel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<PXIePixel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEPXIePixelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<PXIePixel>*)0x0)->GetClass();
      vectorlEPXIePixelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEPXIePixelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEPXIePixelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PXIePixel> : new vector<PXIePixel>;
   }
   static void *newArray_vectorlEPXIePixelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PXIePixel>[nElements] : new vector<PXIePixel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEPXIePixelgR(void *p) {
      delete ((vector<PXIePixel>*)p);
   }
   static void deleteArray_vectorlEPXIePixelgR(void *p) {
      delete [] ((vector<PXIePixel>*)p);
   }
   static void destruct_vectorlEPXIePixelgR(void *p) {
      typedef vector<PXIePixel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<PXIePixel>

namespace ROOT {
   static TClass *vectorlEPXIPixelgR_Dictionary();
   static void vectorlEPXIPixelgR_TClassManip(TClass*);
   static void *new_vectorlEPXIPixelgR(void *p = 0);
   static void *newArray_vectorlEPXIPixelgR(Long_t size, void *p);
   static void delete_vectorlEPXIPixelgR(void *p);
   static void deleteArray_vectorlEPXIPixelgR(void *p);
   static void destruct_vectorlEPXIPixelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<PXIPixel>*)
   {
      vector<PXIPixel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<PXIPixel>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<PXIPixel>", -2, "vector", 216,
                  typeid(vector<PXIPixel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEPXIPixelgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<PXIPixel>) );
      instance.SetNew(&new_vectorlEPXIPixelgR);
      instance.SetNewArray(&newArray_vectorlEPXIPixelgR);
      instance.SetDelete(&delete_vectorlEPXIPixelgR);
      instance.SetDeleteArray(&deleteArray_vectorlEPXIPixelgR);
      instance.SetDestructor(&destruct_vectorlEPXIPixelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<PXIPixel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<PXIPixel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEPXIPixelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<PXIPixel>*)0x0)->GetClass();
      vectorlEPXIPixelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEPXIPixelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEPXIPixelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PXIPixel> : new vector<PXIPixel>;
   }
   static void *newArray_vectorlEPXIPixelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PXIPixel>[nElements] : new vector<PXIPixel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEPXIPixelgR(void *p) {
      delete ((vector<PXIPixel>*)p);
   }
   static void deleteArray_vectorlEPXIPixelgR(void *p) {
      delete [] ((vector<PXIPixel>*)p);
   }
   static void destruct_vectorlEPXIPixelgR(void *p) {
      typedef vector<PXIPixel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<PXIPixel>

namespace ROOT {
   static TClass *vectorlENonSensitiveSimParticle_tgR_Dictionary();
   static void vectorlENonSensitiveSimParticle_tgR_TClassManip(TClass*);
   static void *new_vectorlENonSensitiveSimParticle_tgR(void *p = 0);
   static void *newArray_vectorlENonSensitiveSimParticle_tgR(Long_t size, void *p);
   static void delete_vectorlENonSensitiveSimParticle_tgR(void *p);
   static void deleteArray_vectorlENonSensitiveSimParticle_tgR(void *p);
   static void destruct_vectorlENonSensitiveSimParticle_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<NonSensitiveSimParticle_t>*)
   {
      vector<NonSensitiveSimParticle_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<NonSensitiveSimParticle_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<NonSensitiveSimParticle_t>", -2, "vector", 216,
                  typeid(vector<NonSensitiveSimParticle_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlENonSensitiveSimParticle_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<NonSensitiveSimParticle_t>) );
      instance.SetNew(&new_vectorlENonSensitiveSimParticle_tgR);
      instance.SetNewArray(&newArray_vectorlENonSensitiveSimParticle_tgR);
      instance.SetDelete(&delete_vectorlENonSensitiveSimParticle_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlENonSensitiveSimParticle_tgR);
      instance.SetDestructor(&destruct_vectorlENonSensitiveSimParticle_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<NonSensitiveSimParticle_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<NonSensitiveSimParticle_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlENonSensitiveSimParticle_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<NonSensitiveSimParticle_t>*)0x0)->GetClass();
      vectorlENonSensitiveSimParticle_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlENonSensitiveSimParticle_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlENonSensitiveSimParticle_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<NonSensitiveSimParticle_t> : new vector<NonSensitiveSimParticle_t>;
   }
   static void *newArray_vectorlENonSensitiveSimParticle_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<NonSensitiveSimParticle_t>[nElements] : new vector<NonSensitiveSimParticle_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlENonSensitiveSimParticle_tgR(void *p) {
      delete ((vector<NonSensitiveSimParticle_t>*)p);
   }
   static void deleteArray_vectorlENonSensitiveSimParticle_tgR(void *p) {
      delete [] ((vector<NonSensitiveSimParticle_t>*)p);
   }
   static void destruct_vectorlENonSensitiveSimParticle_tgR(void *p) {
      typedef vector<NonSensitiveSimParticle_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<NonSensitiveSimParticle_t>

namespace ROOT {
   static TClass *vectorlENonSensitiveSimHit_tgR_Dictionary();
   static void vectorlENonSensitiveSimHit_tgR_TClassManip(TClass*);
   static void *new_vectorlENonSensitiveSimHit_tgR(void *p = 0);
   static void *newArray_vectorlENonSensitiveSimHit_tgR(Long_t size, void *p);
   static void delete_vectorlENonSensitiveSimHit_tgR(void *p);
   static void deleteArray_vectorlENonSensitiveSimHit_tgR(void *p);
   static void destruct_vectorlENonSensitiveSimHit_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<NonSensitiveSimHit_t>*)
   {
      vector<NonSensitiveSimHit_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<NonSensitiveSimHit_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<NonSensitiveSimHit_t>", -2, "vector", 216,
                  typeid(vector<NonSensitiveSimHit_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlENonSensitiveSimHit_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<NonSensitiveSimHit_t>) );
      instance.SetNew(&new_vectorlENonSensitiveSimHit_tgR);
      instance.SetNewArray(&newArray_vectorlENonSensitiveSimHit_tgR);
      instance.SetDelete(&delete_vectorlENonSensitiveSimHit_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlENonSensitiveSimHit_tgR);
      instance.SetDestructor(&destruct_vectorlENonSensitiveSimHit_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<NonSensitiveSimHit_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<NonSensitiveSimHit_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlENonSensitiveSimHit_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<NonSensitiveSimHit_t>*)0x0)->GetClass();
      vectorlENonSensitiveSimHit_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlENonSensitiveSimHit_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlENonSensitiveSimHit_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<NonSensitiveSimHit_t> : new vector<NonSensitiveSimHit_t>;
   }
   static void *newArray_vectorlENonSensitiveSimHit_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<NonSensitiveSimHit_t>[nElements] : new vector<NonSensitiveSimHit_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlENonSensitiveSimHit_tgR(void *p) {
      delete ((vector<NonSensitiveSimHit_t>*)p);
   }
   static void deleteArray_vectorlENonSensitiveSimHit_tgR(void *p) {
      delete [] ((vector<NonSensitiveSimHit_t>*)p);
   }
   static void destruct_vectorlENonSensitiveSimHit_tgR(void *p) {
      typedef vector<NonSensitiveSimHit_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<NonSensitiveSimHit_t>

namespace ROOT {
   static TClass *vectorlEMiniVectormUgR_Dictionary();
   static void vectorlEMiniVectormUgR_TClassManip(TClass*);
   static void *new_vectorlEMiniVectormUgR(void *p = 0);
   static void *newArray_vectorlEMiniVectormUgR(Long_t size, void *p);
   static void delete_vectorlEMiniVectormUgR(void *p);
   static void deleteArray_vectorlEMiniVectormUgR(void *p);
   static void destruct_vectorlEMiniVectormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MiniVector*>*)
   {
      vector<MiniVector*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MiniVector*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MiniVector*>", -2, "vector", 216,
                  typeid(vector<MiniVector*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMiniVectormUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MiniVector*>) );
      instance.SetNew(&new_vectorlEMiniVectormUgR);
      instance.SetNewArray(&newArray_vectorlEMiniVectormUgR);
      instance.SetDelete(&delete_vectorlEMiniVectormUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMiniVectormUgR);
      instance.SetDestructor(&destruct_vectorlEMiniVectormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MiniVector*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MiniVector*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMiniVectormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MiniVector*>*)0x0)->GetClass();
      vectorlEMiniVectormUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMiniVectormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMiniVectormUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiniVector*> : new vector<MiniVector*>;
   }
   static void *newArray_vectorlEMiniVectormUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiniVector*>[nElements] : new vector<MiniVector*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMiniVectormUgR(void *p) {
      delete ((vector<MiniVector*>*)p);
   }
   static void deleteArray_vectorlEMiniVectormUgR(void *p) {
      delete [] ((vector<MiniVector*>*)p);
   }
   static void destruct_vectorlEMiniVectormUgR(void *p) {
      typedef vector<MiniVector*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MiniVector*>

namespace ROOT {
   static TClass *vectorlEIMGPixelgR_Dictionary();
   static void vectorlEIMGPixelgR_TClassManip(TClass*);
   static void *new_vectorlEIMGPixelgR(void *p = 0);
   static void *newArray_vectorlEIMGPixelgR(Long_t size, void *p);
   static void delete_vectorlEIMGPixelgR(void *p);
   static void deleteArray_vectorlEIMGPixelgR(void *p);
   static void destruct_vectorlEIMGPixelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<IMGPixel>*)
   {
      vector<IMGPixel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<IMGPixel>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<IMGPixel>", -2, "vector", 216,
                  typeid(vector<IMGPixel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEIMGPixelgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<IMGPixel>) );
      instance.SetNew(&new_vectorlEIMGPixelgR);
      instance.SetNewArray(&newArray_vectorlEIMGPixelgR);
      instance.SetDelete(&delete_vectorlEIMGPixelgR);
      instance.SetDeleteArray(&deleteArray_vectorlEIMGPixelgR);
      instance.SetDestructor(&destruct_vectorlEIMGPixelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<IMGPixel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<IMGPixel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEIMGPixelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<IMGPixel>*)0x0)->GetClass();
      vectorlEIMGPixelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEIMGPixelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEIMGPixelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<IMGPixel> : new vector<IMGPixel>;
   }
   static void *newArray_vectorlEIMGPixelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<IMGPixel>[nElements] : new vector<IMGPixel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEIMGPixelgR(void *p) {
      delete ((vector<IMGPixel>*)p);
   }
   static void deleteArray_vectorlEIMGPixelgR(void *p) {
      delete [] ((vector<IMGPixel>*)p);
   }
   static void destruct_vectorlEIMGPixelgR(void *p) {
      typedef vector<IMGPixel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<IMGPixel>

namespace ROOT {
   static TClass *vectorlEGIGPixelmUgR_Dictionary();
   static void vectorlEGIGPixelmUgR_TClassManip(TClass*);
   static void *new_vectorlEGIGPixelmUgR(void *p = 0);
   static void *newArray_vectorlEGIGPixelmUgR(Long_t size, void *p);
   static void delete_vectorlEGIGPixelmUgR(void *p);
   static void deleteArray_vectorlEGIGPixelmUgR(void *p);
   static void destruct_vectorlEGIGPixelmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<GIGPixel*>*)
   {
      vector<GIGPixel*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<GIGPixel*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<GIGPixel*>", -2, "vector", 216,
                  typeid(vector<GIGPixel*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGIGPixelmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<GIGPixel*>) );
      instance.SetNew(&new_vectorlEGIGPixelmUgR);
      instance.SetNewArray(&newArray_vectorlEGIGPixelmUgR);
      instance.SetDelete(&delete_vectorlEGIGPixelmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEGIGPixelmUgR);
      instance.SetDestructor(&destruct_vectorlEGIGPixelmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<GIGPixel*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<GIGPixel*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGIGPixelmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<GIGPixel*>*)0x0)->GetClass();
      vectorlEGIGPixelmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGIGPixelmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGIGPixelmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GIGPixel*> : new vector<GIGPixel*>;
   }
   static void *newArray_vectorlEGIGPixelmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GIGPixel*>[nElements] : new vector<GIGPixel*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGIGPixelmUgR(void *p) {
      delete ((vector<GIGPixel*>*)p);
   }
   static void deleteArray_vectorlEGIGPixelmUgR(void *p) {
      delete [] ((vector<GIGPixel*>*)p);
   }
   static void destruct_vectorlEGIGPixelmUgR(void *p) {
      typedef vector<GIGPixel*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<GIGPixel*>

namespace ROOT {
   static TClass *vectorlEGIGMonteCarlomUgR_Dictionary();
   static void vectorlEGIGMonteCarlomUgR_TClassManip(TClass*);
   static void *new_vectorlEGIGMonteCarlomUgR(void *p = 0);
   static void *newArray_vectorlEGIGMonteCarlomUgR(Long_t size, void *p);
   static void delete_vectorlEGIGMonteCarlomUgR(void *p);
   static void deleteArray_vectorlEGIGMonteCarlomUgR(void *p);
   static void destruct_vectorlEGIGMonteCarlomUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<GIGMonteCarlo*>*)
   {
      vector<GIGMonteCarlo*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<GIGMonteCarlo*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<GIGMonteCarlo*>", -2, "vector", 216,
                  typeid(vector<GIGMonteCarlo*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGIGMonteCarlomUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<GIGMonteCarlo*>) );
      instance.SetNew(&new_vectorlEGIGMonteCarlomUgR);
      instance.SetNewArray(&newArray_vectorlEGIGMonteCarlomUgR);
      instance.SetDelete(&delete_vectorlEGIGMonteCarlomUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEGIGMonteCarlomUgR);
      instance.SetDestructor(&destruct_vectorlEGIGMonteCarlomUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<GIGMonteCarlo*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<GIGMonteCarlo*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGIGMonteCarlomUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<GIGMonteCarlo*>*)0x0)->GetClass();
      vectorlEGIGMonteCarlomUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGIGMonteCarlomUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGIGMonteCarlomUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GIGMonteCarlo*> : new vector<GIGMonteCarlo*>;
   }
   static void *newArray_vectorlEGIGMonteCarlomUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GIGMonteCarlo*>[nElements] : new vector<GIGMonteCarlo*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGIGMonteCarlomUgR(void *p) {
      delete ((vector<GIGMonteCarlo*>*)p);
   }
   static void deleteArray_vectorlEGIGMonteCarlomUgR(void *p) {
      delete [] ((vector<GIGMonteCarlo*>*)p);
   }
   static void destruct_vectorlEGIGMonteCarlomUgR(void *p) {
      typedef vector<GIGMonteCarlo*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<GIGMonteCarlo*>

namespace ROOT {
   static TClass *vectorlEDSetupcLcLRegion_tgR_Dictionary();
   static void vectorlEDSetupcLcLRegion_tgR_TClassManip(TClass*);
   static void *new_vectorlEDSetupcLcLRegion_tgR(void *p = 0);
   static void *newArray_vectorlEDSetupcLcLRegion_tgR(Long_t size, void *p);
   static void delete_vectorlEDSetupcLcLRegion_tgR(void *p);
   static void deleteArray_vectorlEDSetupcLcLRegion_tgR(void *p);
   static void destruct_vectorlEDSetupcLcLRegion_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DSetup::Region_t>*)
   {
      vector<DSetup::Region_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DSetup::Region_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DSetup::Region_t>", -2, "vector", 216,
                  typeid(vector<DSetup::Region_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDSetupcLcLRegion_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DSetup::Region_t>) );
      instance.SetNew(&new_vectorlEDSetupcLcLRegion_tgR);
      instance.SetNewArray(&newArray_vectorlEDSetupcLcLRegion_tgR);
      instance.SetDelete(&delete_vectorlEDSetupcLcLRegion_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDSetupcLcLRegion_tgR);
      instance.SetDestructor(&destruct_vectorlEDSetupcLcLRegion_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DSetup::Region_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DSetup::Region_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDSetupcLcLRegion_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DSetup::Region_t>*)0x0)->GetClass();
      vectorlEDSetupcLcLRegion_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDSetupcLcLRegion_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDSetupcLcLRegion_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DSetup::Region_t> : new vector<DSetup::Region_t>;
   }
   static void *newArray_vectorlEDSetupcLcLRegion_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DSetup::Region_t>[nElements] : new vector<DSetup::Region_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDSetupcLcLRegion_tgR(void *p) {
      delete ((vector<DSetup::Region_t>*)p);
   }
   static void deleteArray_vectorlEDSetupcLcLRegion_tgR(void *p) {
      delete [] ((vector<DSetup::Region_t>*)p);
   }
   static void destruct_vectorlEDSetupcLcLRegion_tgR(void *p) {
      typedef vector<DSetup::Region_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DSetup::Region_t>

namespace ROOT {
   static TClass *vectorlEDPixelmUgR_Dictionary();
   static void vectorlEDPixelmUgR_TClassManip(TClass*);
   static void *new_vectorlEDPixelmUgR(void *p = 0);
   static void *newArray_vectorlEDPixelmUgR(Long_t size, void *p);
   static void delete_vectorlEDPixelmUgR(void *p);
   static void deleteArray_vectorlEDPixelmUgR(void *p);
   static void destruct_vectorlEDPixelmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DPixel*>*)
   {
      vector<DPixel*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DPixel*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DPixel*>", -2, "vector", 216,
                  typeid(vector<DPixel*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDPixelmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DPixel*>) );
      instance.SetNew(&new_vectorlEDPixelmUgR);
      instance.SetNewArray(&newArray_vectorlEDPixelmUgR);
      instance.SetDelete(&delete_vectorlEDPixelmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDPixelmUgR);
      instance.SetDestructor(&destruct_vectorlEDPixelmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DPixel*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DPixel*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDPixelmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DPixel*>*)0x0)->GetClass();
      vectorlEDPixelmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDPixelmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDPixelmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DPixel*> : new vector<DPixel*>;
   }
   static void *newArray_vectorlEDPixelmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DPixel*>[nElements] : new vector<DPixel*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDPixelmUgR(void *p) {
      delete ((vector<DPixel*>*)p);
   }
   static void deleteArray_vectorlEDPixelmUgR(void *p) {
      delete [] ((vector<DPixel*>*)p);
   }
   static void destruct_vectorlEDPixelmUgR(void *p) {
      typedef vector<DPixel*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DPixel*>

namespace ROOT {
   static TClass *vectorlEDBeastercLcLABeastRecoPartgR_Dictionary();
   static void vectorlEDBeastercLcLABeastRecoPartgR_TClassManip(TClass*);
   static void *new_vectorlEDBeastercLcLABeastRecoPartgR(void *p = 0);
   static void *newArray_vectorlEDBeastercLcLABeastRecoPartgR(Long_t size, void *p);
   static void delete_vectorlEDBeastercLcLABeastRecoPartgR(void *p);
   static void deleteArray_vectorlEDBeastercLcLABeastRecoPartgR(void *p);
   static void destruct_vectorlEDBeastercLcLABeastRecoPartgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DBeaster::ABeastRecoPart>*)
   {
      vector<DBeaster::ABeastRecoPart> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DBeaster::ABeastRecoPart>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DBeaster::ABeastRecoPart>", -2, "vector", 216,
                  typeid(vector<DBeaster::ABeastRecoPart>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDBeastercLcLABeastRecoPartgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DBeaster::ABeastRecoPart>) );
      instance.SetNew(&new_vectorlEDBeastercLcLABeastRecoPartgR);
      instance.SetNewArray(&newArray_vectorlEDBeastercLcLABeastRecoPartgR);
      instance.SetDelete(&delete_vectorlEDBeastercLcLABeastRecoPartgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDBeastercLcLABeastRecoPartgR);
      instance.SetDestructor(&destruct_vectorlEDBeastercLcLABeastRecoPartgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DBeaster::ABeastRecoPart> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DBeaster::ABeastRecoPart>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDBeastercLcLABeastRecoPartgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DBeaster::ABeastRecoPart>*)0x0)->GetClass();
      vectorlEDBeastercLcLABeastRecoPartgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDBeastercLcLABeastRecoPartgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDBeastercLcLABeastRecoPartgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DBeaster::ABeastRecoPart> : new vector<DBeaster::ABeastRecoPart>;
   }
   static void *newArray_vectorlEDBeastercLcLABeastRecoPartgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DBeaster::ABeastRecoPart>[nElements] : new vector<DBeaster::ABeastRecoPart>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDBeastercLcLABeastRecoPartgR(void *p) {
      delete ((vector<DBeaster::ABeastRecoPart>*)p);
   }
   static void deleteArray_vectorlEDBeastercLcLABeastRecoPartgR(void *p) {
      delete [] ((vector<DBeaster::ABeastRecoPart>*)p);
   }
   static void destruct_vectorlEDBeastercLcLABeastRecoPartgR(void *p) {
      typedef vector<DBeaster::ABeastRecoPart> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DBeaster::ABeastRecoPart>

namespace ROOT {
   static TClass *vectorlEDBeastercLcLABeastHitgR_Dictionary();
   static void vectorlEDBeastercLcLABeastHitgR_TClassManip(TClass*);
   static void *new_vectorlEDBeastercLcLABeastHitgR(void *p = 0);
   static void *newArray_vectorlEDBeastercLcLABeastHitgR(Long_t size, void *p);
   static void delete_vectorlEDBeastercLcLABeastHitgR(void *p);
   static void deleteArray_vectorlEDBeastercLcLABeastHitgR(void *p);
   static void destruct_vectorlEDBeastercLcLABeastHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DBeaster::ABeastHit>*)
   {
      vector<DBeaster::ABeastHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DBeaster::ABeastHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DBeaster::ABeastHit>", -2, "vector", 216,
                  typeid(vector<DBeaster::ABeastHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDBeastercLcLABeastHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DBeaster::ABeastHit>) );
      instance.SetNew(&new_vectorlEDBeastercLcLABeastHitgR);
      instance.SetNewArray(&newArray_vectorlEDBeastercLcLABeastHitgR);
      instance.SetDelete(&delete_vectorlEDBeastercLcLABeastHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDBeastercLcLABeastHitgR);
      instance.SetDestructor(&destruct_vectorlEDBeastercLcLABeastHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DBeaster::ABeastHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DBeaster::ABeastHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDBeastercLcLABeastHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DBeaster::ABeastHit>*)0x0)->GetClass();
      vectorlEDBeastercLcLABeastHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDBeastercLcLABeastHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDBeastercLcLABeastHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DBeaster::ABeastHit> : new vector<DBeaster::ABeastHit>;
   }
   static void *newArray_vectorlEDBeastercLcLABeastHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DBeaster::ABeastHit>[nElements] : new vector<DBeaster::ABeastHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDBeastercLcLABeastHitgR(void *p) {
      delete ((vector<DBeaster::ABeastHit>*)p);
   }
   static void deleteArray_vectorlEDBeastercLcLABeastHitgR(void *p) {
      delete [] ((vector<DBeaster::ABeastHit>*)p);
   }
   static void destruct_vectorlEDBeastercLcLABeastHitgR(void *p) {
      typedef vector<DBeaster::ABeastHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DBeaster::ABeastHit>

namespace ROOT {
   static TClass *vectorlEBoardReaderPixelgR_Dictionary();
   static void vectorlEBoardReaderPixelgR_TClassManip(TClass*);
   static void *new_vectorlEBoardReaderPixelgR(void *p = 0);
   static void *newArray_vectorlEBoardReaderPixelgR(Long_t size, void *p);
   static void delete_vectorlEBoardReaderPixelgR(void *p);
   static void deleteArray_vectorlEBoardReaderPixelgR(void *p);
   static void destruct_vectorlEBoardReaderPixelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BoardReaderPixel>*)
   {
      vector<BoardReaderPixel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BoardReaderPixel>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BoardReaderPixel>", -2, "vector", 216,
                  typeid(vector<BoardReaderPixel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBoardReaderPixelgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BoardReaderPixel>) );
      instance.SetNew(&new_vectorlEBoardReaderPixelgR);
      instance.SetNewArray(&newArray_vectorlEBoardReaderPixelgR);
      instance.SetDelete(&delete_vectorlEBoardReaderPixelgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBoardReaderPixelgR);
      instance.SetDestructor(&destruct_vectorlEBoardReaderPixelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BoardReaderPixel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BoardReaderPixel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBoardReaderPixelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BoardReaderPixel>*)0x0)->GetClass();
      vectorlEBoardReaderPixelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBoardReaderPixelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBoardReaderPixelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BoardReaderPixel> : new vector<BoardReaderPixel>;
   }
   static void *newArray_vectorlEBoardReaderPixelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BoardReaderPixel>[nElements] : new vector<BoardReaderPixel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBoardReaderPixelgR(void *p) {
      delete ((vector<BoardReaderPixel>*)p);
   }
   static void deleteArray_vectorlEBoardReaderPixelgR(void *p) {
      delete [] ((vector<BoardReaderPixel>*)p);
   }
   static void destruct_vectorlEBoardReaderPixelgR(void *p) {
      typedef vector<BoardReaderPixel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BoardReaderPixel>

namespace ROOT {
   static TClass *maplEstringcOintgR_Dictionary();
   static void maplEstringcOintgR_TClassManip(TClass*);
   static void *new_maplEstringcOintgR(void *p = 0);
   static void *newArray_maplEstringcOintgR(Long_t size, void *p);
   static void delete_maplEstringcOintgR(void *p);
   static void deleteArray_maplEstringcOintgR(void *p);
   static void destruct_maplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,int>*)
   {
      map<string,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,int>", -2, "map", 99,
                  typeid(map<string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,int>) );
      instance.SetNew(&new_maplEstringcOintgR);
      instance.SetNewArray(&newArray_maplEstringcOintgR);
      instance.SetDelete(&delete_maplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOintgR);
      instance.SetDestructor(&destruct_maplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,int>*)0x0)->GetClass();
      maplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,int> : new map<string,int>;
   }
   static void *newArray_maplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,int>[nElements] : new map<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOintgR(void *p) {
      delete ((map<string,int>*)p);
   }
   static void deleteArray_maplEstringcOintgR(void *p) {
      delete [] ((map<string,int>*)p);
   }
   static void destruct_maplEstringcOintgR(void *p) {
      typedef map<string,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,int>

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = 0);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 99,
                  typeid(map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,double>*)0x0)->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete ((map<string,double>*)p);
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] ((map<string,double>*)p);
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace ROOT {
   static TClass *maplEintcODR3gR_Dictionary();
   static void maplEintcODR3gR_TClassManip(TClass*);
   static void *new_maplEintcODR3gR(void *p = 0);
   static void *newArray_maplEintcODR3gR(Long_t size, void *p);
   static void delete_maplEintcODR3gR(void *p);
   static void deleteArray_maplEintcODR3gR(void *p);
   static void destruct_maplEintcODR3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,DR3>*)
   {
      map<int,DR3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,DR3>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,DR3>", -2, "map", 99,
                  typeid(map<int,DR3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcODR3gR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,DR3>) );
      instance.SetNew(&new_maplEintcODR3gR);
      instance.SetNewArray(&newArray_maplEintcODR3gR);
      instance.SetDelete(&delete_maplEintcODR3gR);
      instance.SetDeleteArray(&deleteArray_maplEintcODR3gR);
      instance.SetDestructor(&destruct_maplEintcODR3gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,DR3> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,DR3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcODR3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,DR3>*)0x0)->GetClass();
      maplEintcODR3gR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcODR3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcODR3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,DR3> : new map<int,DR3>;
   }
   static void *newArray_maplEintcODR3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,DR3>[nElements] : new map<int,DR3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcODR3gR(void *p) {
      delete ((map<int,DR3>*)p);
   }
   static void deleteArray_maplEintcODR3gR(void *p) {
      delete [] ((map<int,DR3>*)p);
   }
   static void destruct_maplEintcODR3gR(void *p) {
      typedef map<int,DR3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,DR3>

namespace ROOT {
   static TClass *maplEintcODPrecAlignmUgR_Dictionary();
   static void maplEintcODPrecAlignmUgR_TClassManip(TClass*);
   static void *new_maplEintcODPrecAlignmUgR(void *p = 0);
   static void *newArray_maplEintcODPrecAlignmUgR(Long_t size, void *p);
   static void delete_maplEintcODPrecAlignmUgR(void *p);
   static void deleteArray_maplEintcODPrecAlignmUgR(void *p);
   static void destruct_maplEintcODPrecAlignmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,DPrecAlign*>*)
   {
      map<int,DPrecAlign*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,DPrecAlign*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,DPrecAlign*>", -2, "map", 99,
                  typeid(map<int,DPrecAlign*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcODPrecAlignmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,DPrecAlign*>) );
      instance.SetNew(&new_maplEintcODPrecAlignmUgR);
      instance.SetNewArray(&newArray_maplEintcODPrecAlignmUgR);
      instance.SetDelete(&delete_maplEintcODPrecAlignmUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcODPrecAlignmUgR);
      instance.SetDestructor(&destruct_maplEintcODPrecAlignmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,DPrecAlign*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,DPrecAlign*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcODPrecAlignmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,DPrecAlign*>*)0x0)->GetClass();
      maplEintcODPrecAlignmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcODPrecAlignmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcODPrecAlignmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,DPrecAlign*> : new map<int,DPrecAlign*>;
   }
   static void *newArray_maplEintcODPrecAlignmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,DPrecAlign*>[nElements] : new map<int,DPrecAlign*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcODPrecAlignmUgR(void *p) {
      delete ((map<int,DPrecAlign*>*)p);
   }
   static void deleteArray_maplEintcODPrecAlignmUgR(void *p) {
      delete [] ((map<int,DPrecAlign*>*)p);
   }
   static void destruct_maplEintcODPrecAlignmUgR(void *p) {
      typedef map<int,DPrecAlign*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,DPrecAlign*>

namespace ROOT {
   static TClass *maplEintcODPlanemUgR_Dictionary();
   static void maplEintcODPlanemUgR_TClassManip(TClass*);
   static void *new_maplEintcODPlanemUgR(void *p = 0);
   static void *newArray_maplEintcODPlanemUgR(Long_t size, void *p);
   static void delete_maplEintcODPlanemUgR(void *p);
   static void deleteArray_maplEintcODPlanemUgR(void *p);
   static void destruct_maplEintcODPlanemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,DPlane*>*)
   {
      map<int,DPlane*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,DPlane*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,DPlane*>", -2, "map", 99,
                  typeid(map<int,DPlane*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcODPlanemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,DPlane*>) );
      instance.SetNew(&new_maplEintcODPlanemUgR);
      instance.SetNewArray(&newArray_maplEintcODPlanemUgR);
      instance.SetDelete(&delete_maplEintcODPlanemUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcODPlanemUgR);
      instance.SetDestructor(&destruct_maplEintcODPlanemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,DPlane*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,DPlane*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcODPlanemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,DPlane*>*)0x0)->GetClass();
      maplEintcODPlanemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcODPlanemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcODPlanemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,DPlane*> : new map<int,DPlane*>;
   }
   static void *newArray_maplEintcODPlanemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,DPlane*>[nElements] : new map<int,DPlane*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcODPlanemUgR(void *p) {
      delete ((map<int,DPlane*>*)p);
   }
   static void deleteArray_maplEintcODPlanemUgR(void *p) {
      delete [] ((map<int,DPlane*>*)p);
   }
   static void destruct_maplEintcODPlanemUgR(void *p) {
      typedef map<int,DPlane*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,DPlane*>

namespace {
  void TriggerDictionaryInitialization_DTdict_Impl() {
    static const char* headers[] = {
"TNTBoardReader.h",
"PXIBoardReader.h",
"PXIeBoardReader.h",
"GIGBoardReader.h",
"IMGBoardReader.h",
"BoardReader.h",
"VMEBoardReader.h",
"MCBoardReader.h",
"BoardReaderIHEP.h",
"AliMIMOSA22RawStreamVASingle.h",
"DecoderM18.h",
"DecoderGeant.h",
"DSession.h",
"DSetup.h",
"DAcq.h",
"DTracker.h",
"DPlane.h",
"DStrip.h",
"DHit.h",
"DTrack.h",
"DLine.h",
"DR3.h",
"DCut.h",
"DAlign.h",
"DEvent.h",
"DEventMC.h",
"DParticle.h",
"DGlobalTools.h",
"DPrecAlign.h",
"DPixel.h",
"DLadder.h",
"DMiniVector.h",
"DHelix.h",
"DHelixFitter.h",
"DTrackFitter.h",
"DBeaster.h",
0
    };
    static const char* includePaths[] = {
"include/",
"/home/romain/root/include",
"/home/romain/SiTrInEO_EX2/taf/code/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DTdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Describes DR3)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DR3.h")))  __attribute__((annotate("$clingAutoload$TNTBoardReader.h")))  DR3;
class __attribute__((annotate(R"ATTRDUMP(Collection of global tools)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DGlobalTools.h")))  __attribute__((annotate("$clingAutoload$TNTBoardReader.h")))  DGlobalTools;
class __attribute__((annotate("$clingAutoload$TNTBoardReader.h")))  TNTPixel;
class __attribute__((annotate("$clingAutoload$TNTBoardReader.h")))  TNTEvent;
class __attribute__((annotate("$clingAutoload$TNTBoardReader.h")))  TNTBoardReader;
class __attribute__((annotate("$clingAutoload$PXIBoardReader.h")))  PXIPixel;
class __attribute__((annotate("$clingAutoload$PXIBoardReader.h")))  PXIEvent;
class __attribute__((annotate("$clingAutoload$PXIBoardReader.h")))  PXIBoardReader;
class __attribute__((annotate("$clingAutoload$PXIeBoardReader.h")))  PXIePixel;
class __attribute__((annotate("$clingAutoload$PXIeBoardReader.h")))  PXIeEvent;
class __attribute__((annotate("$clingAutoload$PXIeBoardReader.h")))  PXIeBoardReader;
class __attribute__((annotate("$clingAutoload$GIGBoardReader.h")))  GIGPixel;
class __attribute__((annotate("$clingAutoload$GIGBoardReader.h")))  GIGMonteCarlo;
class __attribute__((annotate("$clingAutoload$GIGBoardReader.h")))  GIGEvent;
class __attribute__((annotate("$clingAutoload$GIGBoardReader.h")))  GIGBoardReader;
class __attribute__((annotate("$clingAutoload$IMGBoardReader.h")))  IMGPixel;
class __attribute__((annotate("$clingAutoload$IMGBoardReader.h")))  IMGEvent;
class __attribute__((annotate("$clingAutoload$IMGBoardReader.h")))  IMGBoardReader;
class __attribute__((annotate("$clingAutoload$BoardReader.h")))  BoardReaderPixel;
class __attribute__((annotate("$clingAutoload$BoardReader.h")))  BoardReaderEvent;
class __attribute__((annotate("$clingAutoload$VMEBoardReader.h")))  VMEBoardReader;
class __attribute__((annotate(R"ATTRDUMP(Pixel or Pixel of a Detector Plane)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DPixel.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DPixel;
class __attribute__((annotate(R"ATTRDUMP(Hit in a Plane)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DHit.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DHit;
class __attribute__((annotate(R"ATTRDUMP(Describes DTrack)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DTrack.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DTrack;
class __attribute__((annotate(R"ATTRDUMP(Describes EventMC)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DEventMC.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DEventMC;
class __attribute__((annotate(R"ATTRDUMP(Describes Event Header)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DEvent.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DEventHeader;
class __attribute__((annotate(R"ATTRDUMP(Describes Event)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DEvent.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DEvent;
class __attribute__((annotate("$clingAutoload$DEvent.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DAuthenticHit;
class __attribute__((annotate("$clingAutoload$DEvent.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DAuthenticPlane;
class __attribute__((annotate("$clingAutoload$DEvent.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DTransparentPlane;
class __attribute__((annotate(R"ATTRDUMP(Frame for event loops)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DSession.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DSession;
class __attribute__((annotate(R"ATTRDUMP(Configuration of the Telescope and Detectors under Test)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DSetup.h")))  __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  DSetup;
class __attribute__((annotate("$clingAutoload$MCBoardReader.h")))  MCBoardReader;
class __attribute__((annotate("$clingAutoload$BoardReaderIHEP.h")))  BoardReaderIHEP;
class __attribute__((annotate(R"ATTRDUMP(class for reading MIMOSA22THRB raw digits)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$AliMIMOSA22RawStreamVASingle.h")))  AliMIMOSA22RawStreamVASingle;
class __attribute__((annotate(R"ATTRDUMP(class for reading MIMOSA raw digits)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DecoderM18.h")))  DecoderM18;
class __attribute__((annotate(R"ATTRDUMP(class for reading MIMOSA raw digits)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DecoderGeant.h")))  DecoderGeant;
class __attribute__((annotate(R"ATTRDUMP(Data Acquisition)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DAcq.h")))  DAcq;
class __attribute__((annotate("$clingAutoload$DPrecAlign.h")))  __attribute__((annotate("$clingAutoload$DTracker.h")))  DataPoints;
class __attribute__((annotate(R"ATTRDUMP(DPrecAlign)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DPrecAlign.h")))  __attribute__((annotate("$clingAutoload$DTracker.h")))  DPrecAlign;
class __attribute__((annotate("$clingAutoload$DMiniVector.h")))  __attribute__((annotate("$clingAutoload$DTracker.h")))  MiniVector;
class __attribute__((annotate(R"ATTRDUMP(Detector Ladder)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DLadder.h")))  __attribute__((annotate("$clingAutoload$DTracker.h")))  DLadder;
class __attribute__((annotate(R"ATTRDUMP(Detector Plane)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DPlane.h")))  __attribute__((annotate("$clingAutoload$DTracker.h")))  DPlane;
class __attribute__((annotate(R"ATTRDUMP(book keeping for alignment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DAlign.h")))  __attribute__((annotate("$clingAutoload$DTracker.h")))  DAlign;
class __attribute__((annotate("$clingAutoload$DHelix.h")))  __attribute__((annotate("$clingAutoload$DTracker.h")))  DHelix;
class __attribute__((annotate("$clingAutoload$DHelixFitter.h")))  __attribute__((annotate("$clingAutoload$DTracker.h")))  DHelixFitter;
class __attribute__((annotate("$clingAutoload$DBeaster.h")))  __attribute__((annotate("$clingAutoload$DTracker.h")))  DBeaster;
class __attribute__((annotate(R"ATTRDUMP(Describes DTracker)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DTracker.h")))  DTracker;
class __attribute__((annotate(R"ATTRDUMP(Strip or Pixel of a Detector Plane)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DStrip.h")))  DStrip;
class __attribute__((annotate(R"ATTRDUMP(Describes DLine)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DLine.h")))  DLine;
class __attribute__((annotate(R"ATTRDUMP(Describes DCut)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DCut.h")))  DCut;
class __attribute__((annotate(R"ATTRDUMP(Describes Particle)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DParticle.h")))  DParticle;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DTdict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TNTBoardReader.h"
#include "PXIBoardReader.h"
#include "PXIeBoardReader.h"
#include "GIGBoardReader.h"
#include "IMGBoardReader.h"
#include "BoardReader.h"
#include "VMEBoardReader.h"
#include "MCBoardReader.h"
#include "BoardReaderIHEP.h"
#include "AliMIMOSA22RawStreamVASingle.h"
#include "DecoderM18.h"
#include "DecoderGeant.h"
#include "DSession.h"
#include "DSetup.h"
#include "DAcq.h"
#include "DTracker.h"
#include "DPlane.h"
#include "DStrip.h"
#include "DHit.h"
#include "DTrack.h"
#include "DLine.h"
#include "DR3.h"
#include "DCut.h"
#include "DAlign.h"
#include "DEvent.h"
#include "DEventMC.h"
#include "DParticle.h"
#include "DGlobalTools.h"
#include "DPrecAlign.h"
#include "DPixel.h"
#include "DLadder.h"
#include "DMiniVector.h"
#include "DHelix.h"
#include "DHelixFitter.h"
#include "DTrackFitter.h"
#include "DBeaster.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"AliMIMOSA22RawStreamVASingle", payloadCode, "@",
"BoardReaderEvent", payloadCode, "@",
"BoardReaderIHEP", payloadCode, "@",
"BoardReaderPixel", payloadCode, "@",
"DAcq", payloadCode, "@",
"DAlign", payloadCode, "@",
"DAuthenticHit", payloadCode, "@",
"DAuthenticPlane", payloadCode, "@",
"DBeaster", payloadCode, "@",
"DCut", payloadCode, "@",
"DEvent", payloadCode, "@",
"DEventHeader", payloadCode, "@",
"DEventMC", payloadCode, "@",
"DGlobalTools", payloadCode, "@",
"DHelix", payloadCode, "@",
"DHelixFitter", payloadCode, "@",
"DHit", payloadCode, "@",
"DLadder", payloadCode, "@",
"DLine", payloadCode, "@",
"DParticle", payloadCode, "@",
"DPixel", payloadCode, "@",
"DPlane", payloadCode, "@",
"DPrecAlign", payloadCode, "@",
"DR3", payloadCode, "@",
"DSession", payloadCode, "@",
"DSetup", payloadCode, "@",
"DStrip", payloadCode, "@",
"DTrack", payloadCode, "@",
"DTracker", payloadCode, "@",
"DTransparentPlane", payloadCode, "@",
"DataPoints", payloadCode, "@",
"DecoderGeant", payloadCode, "@",
"DecoderM18", payloadCode, "@",
"GIGBoardReader", payloadCode, "@",
"GIGEvent", payloadCode, "@",
"GIGMonteCarlo", payloadCode, "@",
"GIGPixel", payloadCode, "@",
"IMGBoardReader", payloadCode, "@",
"IMGEvent", payloadCode, "@",
"IMGPixel", payloadCode, "@",
"MCBoardReader", payloadCode, "@",
"MiniVector", payloadCode, "@",
"PXIBoardReader", payloadCode, "@",
"PXIEvent", payloadCode, "@",
"PXIPixel", payloadCode, "@",
"PXIeBoardReader", payloadCode, "@",
"PXIeEvent", payloadCode, "@",
"PXIePixel", payloadCode, "@",
"TNTBoardReader", payloadCode, "@",
"TNTEvent", payloadCode, "@",
"TNTPixel", payloadCode, "@",
"VMEBoardReader", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DTdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DTdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DTdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DTdict() {
  TriggerDictionaryInitialization_DTdict_Impl();
}
