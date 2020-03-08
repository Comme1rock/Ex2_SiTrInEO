// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIromaindISiTrInEO_EX2dItafdIbindIobjdIMdict

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
#include "MAnalysis.h"
#include "MAlign.h"
#include "MHist.h"
#include "MRaw.h"
#include "MRax.h"
#include "MAlignment.h"
#include "MMillepede.h"
#include "MGlobalAlign.h"
#include "MKalmanFilter.h"
#include "MLeastChiSquare.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MAlignment(void *p = 0);
   static void *newArray_MAlignment(Long_t size, void *p);
   static void delete_MAlignment(void *p);
   static void deleteArray_MAlignment(void *p);
   static void destruct_MAlignment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MAlignment*)
   {
      ::MAlignment *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MAlignment >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MAlignment", ::MAlignment::Class_Version(), "MAlignment.h", 23,
                  typeid(::MAlignment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MAlignment::Dictionary, isa_proxy, 4,
                  sizeof(::MAlignment) );
      instance.SetNew(&new_MAlignment);
      instance.SetNewArray(&newArray_MAlignment);
      instance.SetDelete(&delete_MAlignment);
      instance.SetDeleteArray(&deleteArray_MAlignment);
      instance.SetDestructor(&destruct_MAlignment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MAlignment*)
   {
      return GenerateInitInstanceLocal((::MAlignment*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MAlignment*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MimosaAlignAnalysis(void *p);
   static void deleteArray_MimosaAlignAnalysis(void *p);
   static void destruct_MimosaAlignAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MimosaAlignAnalysis*)
   {
      ::MimosaAlignAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MimosaAlignAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MimosaAlignAnalysis", ::MimosaAlignAnalysis::Class_Version(), "MAlign.h", 54,
                  typeid(::MimosaAlignAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MimosaAlignAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::MimosaAlignAnalysis) );
      instance.SetDelete(&delete_MimosaAlignAnalysis);
      instance.SetDeleteArray(&deleteArray_MimosaAlignAnalysis);
      instance.SetDestructor(&destruct_MimosaAlignAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MimosaAlignAnalysis*)
   {
      return GenerateInitInstanceLocal((::MimosaAlignAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MimosaAlignAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MHist(void *p = 0);
   static void *newArray_MHist(Long_t size, void *p);
   static void delete_MHist(void *p);
   static void deleteArray_MHist(void *p);
   static void destruct_MHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MHist*)
   {
      ::MHist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MHist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MHist", ::MHist::Class_Version(), "MHist.h", 52,
                  typeid(::MHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MHist::Dictionary, isa_proxy, 4,
                  sizeof(::MHist) );
      instance.SetNew(&new_MHist);
      instance.SetNewArray(&newArray_MHist);
      instance.SetDelete(&delete_MHist);
      instance.SetDeleteArray(&deleteArray_MHist);
      instance.SetDestructor(&destruct_MHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MHist*)
   {
      return GenerateInitInstanceLocal((::MHist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MHist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MRaw(void *p);
   static void deleteArray_MRaw(void *p);
   static void destruct_MRaw(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MRaw*)
   {
      ::MRaw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MRaw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MRaw", ::MRaw::Class_Version(), "MRaw.h", 37,
                  typeid(::MRaw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MRaw::Dictionary, isa_proxy, 4,
                  sizeof(::MRaw) );
      instance.SetDelete(&delete_MRaw);
      instance.SetDeleteArray(&deleteArray_MRaw);
      instance.SetDestructor(&destruct_MRaw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MRaw*)
   {
      return GenerateInitInstanceLocal((::MRaw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MRaw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MRax(void *p);
   static void deleteArray_MRax(void *p);
   static void destruct_MRax(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MRax*)
   {
      ::MRax *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MRax >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MRax", ::MRax::Class_Version(), "MRax.h", 101,
                  typeid(::MRax), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MRax::Dictionary, isa_proxy, 4,
                  sizeof(::MRax) );
      instance.SetDelete(&delete_MRax);
      instance.SetDeleteArray(&deleteArray_MRax);
      instance.SetDestructor(&destruct_MRax);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MRax*)
   {
      return GenerateInitInstanceLocal((::MRax*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MRax*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MimosaAnalysis(void *p = 0);
   static void *newArray_MimosaAnalysis(Long_t size, void *p);
   static void delete_MimosaAnalysis(void *p);
   static void deleteArray_MimosaAnalysis(void *p);
   static void destruct_MimosaAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MimosaAnalysis*)
   {
      ::MimosaAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MimosaAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MimosaAnalysis", ::MimosaAnalysis::Class_Version(), "MAnalysis.h", 93,
                  typeid(::MimosaAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MimosaAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::MimosaAnalysis) );
      instance.SetNew(&new_MimosaAnalysis);
      instance.SetNewArray(&newArray_MimosaAnalysis);
      instance.SetDelete(&delete_MimosaAnalysis);
      instance.SetDeleteArray(&deleteArray_MimosaAnalysis);
      instance.SetDestructor(&destruct_MimosaAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MimosaAnalysis*)
   {
      return GenerateInitInstanceLocal((::MimosaAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MimosaAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MMillepede(void *p = 0);
   static void *newArray_MMillepede(Long_t size, void *p);
   static void delete_MMillepede(void *p);
   static void deleteArray_MMillepede(void *p);
   static void destruct_MMillepede(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MMillepede*)
   {
      ::MMillepede *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MMillepede >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MMillepede", ::MMillepede::Class_Version(), "MMillepede.h", 15,
                  typeid(::MMillepede), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MMillepede::Dictionary, isa_proxy, 4,
                  sizeof(::MMillepede) );
      instance.SetNew(&new_MMillepede);
      instance.SetNewArray(&newArray_MMillepede);
      instance.SetDelete(&delete_MMillepede);
      instance.SetDeleteArray(&deleteArray_MMillepede);
      instance.SetDestructor(&destruct_MMillepede);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MMillepede*)
   {
      return GenerateInitInstanceLocal((::MMillepede*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MMillepede*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MimosaGlobalAlign(void *p);
   static void deleteArray_MimosaGlobalAlign(void *p);
   static void destruct_MimosaGlobalAlign(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MimosaGlobalAlign*)
   {
      ::MimosaGlobalAlign *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MimosaGlobalAlign >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MimosaGlobalAlign", ::MimosaGlobalAlign::Class_Version(), "MGlobalAlign.h", 26,
                  typeid(::MimosaGlobalAlign), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MimosaGlobalAlign::Dictionary, isa_proxy, 4,
                  sizeof(::MimosaGlobalAlign) );
      instance.SetDelete(&delete_MimosaGlobalAlign);
      instance.SetDeleteArray(&deleteArray_MimosaGlobalAlign);
      instance.SetDestructor(&destruct_MimosaGlobalAlign);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MimosaGlobalAlign*)
   {
      return GenerateInitInstanceLocal((::MimosaGlobalAlign*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MimosaGlobalAlign*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MAlignment::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MAlignment::Class_Name()
{
   return "MAlignment";
}

//______________________________________________________________________________
const char *MAlignment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MAlignment*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MAlignment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MAlignment*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MAlignment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MAlignment*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MAlignment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MAlignment*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MimosaAlignAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MimosaAlignAnalysis::Class_Name()
{
   return "MimosaAlignAnalysis";
}

//______________________________________________________________________________
const char *MimosaAlignAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MimosaAlignAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MimosaAlignAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MimosaAlignAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MimosaAlignAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MimosaAlignAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MimosaAlignAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MimosaAlignAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MHist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MHist::Class_Name()
{
   return "MHist";
}

//______________________________________________________________________________
const char *MHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MHist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MHist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MHist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MHist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MRaw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MRaw::Class_Name()
{
   return "MRaw";
}

//______________________________________________________________________________
const char *MRaw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MRaw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MRaw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MRaw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MRaw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MRaw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MRaw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MRaw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MRax::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MRax::Class_Name()
{
   return "MRax";
}

//______________________________________________________________________________
const char *MRax::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MRax*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MRax::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MRax*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MRax::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MRax*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MRax::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MRax*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MimosaAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MimosaAnalysis::Class_Name()
{
   return "MimosaAnalysis";
}

//______________________________________________________________________________
const char *MimosaAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MimosaAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MimosaAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MimosaAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MimosaAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MimosaAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MimosaAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MimosaAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MMillepede::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MMillepede::Class_Name()
{
   return "MMillepede";
}

//______________________________________________________________________________
const char *MMillepede::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MMillepede*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MMillepede::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MMillepede*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MMillepede::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MMillepede*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MMillepede::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MMillepede*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MimosaGlobalAlign::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MimosaGlobalAlign::Class_Name()
{
   return "MimosaGlobalAlign";
}

//______________________________________________________________________________
const char *MimosaGlobalAlign::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MimosaGlobalAlign*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MimosaGlobalAlign::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MimosaGlobalAlign*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MimosaGlobalAlign::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MimosaGlobalAlign*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MimosaGlobalAlign::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MimosaGlobalAlign*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MAlignment::Streamer(TBuffer &R__b)
{
   // Stream an object of class MAlignment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MAlignment::Class(),this);
   } else {
      R__b.WriteClassBuffer(MAlignment::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MAlignment(void *p) {
      return  p ? new(p) ::MAlignment : new ::MAlignment;
   }
   static void *newArray_MAlignment(Long_t nElements, void *p) {
      return p ? new(p) ::MAlignment[nElements] : new ::MAlignment[nElements];
   }
   // Wrapper around operator delete
   static void delete_MAlignment(void *p) {
      delete ((::MAlignment*)p);
   }
   static void deleteArray_MAlignment(void *p) {
      delete [] ((::MAlignment*)p);
   }
   static void destruct_MAlignment(void *p) {
      typedef ::MAlignment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MAlignment

//______________________________________________________________________________
void MimosaAlignAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class MimosaAlignAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MimosaAlignAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(MimosaAlignAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MimosaAlignAnalysis(void *p) {
      delete ((::MimosaAlignAnalysis*)p);
   }
   static void deleteArray_MimosaAlignAnalysis(void *p) {
      delete [] ((::MimosaAlignAnalysis*)p);
   }
   static void destruct_MimosaAlignAnalysis(void *p) {
      typedef ::MimosaAlignAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MimosaAlignAnalysis

//______________________________________________________________________________
void MHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class MHist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MHist::Class(),this);
   } else {
      R__b.WriteClassBuffer(MHist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MHist(void *p) {
      return  p ? new(p) ::MHist : new ::MHist;
   }
   static void *newArray_MHist(Long_t nElements, void *p) {
      return p ? new(p) ::MHist[nElements] : new ::MHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_MHist(void *p) {
      delete ((::MHist*)p);
   }
   static void deleteArray_MHist(void *p) {
      delete [] ((::MHist*)p);
   }
   static void destruct_MHist(void *p) {
      typedef ::MHist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MHist

//______________________________________________________________________________
void MRaw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MRaw.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MRaw::Class(),this);
   } else {
      R__b.WriteClassBuffer(MRaw::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MRaw(void *p) {
      delete ((::MRaw*)p);
   }
   static void deleteArray_MRaw(void *p) {
      delete [] ((::MRaw*)p);
   }
   static void destruct_MRaw(void *p) {
      typedef ::MRaw current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MRaw

//______________________________________________________________________________
void MRax::Streamer(TBuffer &R__b)
{
   // Stream an object of class MRax.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MRax::Class(),this);
   } else {
      R__b.WriteClassBuffer(MRax::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MRax(void *p) {
      delete ((::MRax*)p);
   }
   static void deleteArray_MRax(void *p) {
      delete [] ((::MRax*)p);
   }
   static void destruct_MRax(void *p) {
      typedef ::MRax current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MRax

//______________________________________________________________________________
void MimosaAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class MimosaAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MimosaAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(MimosaAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MimosaAnalysis(void *p) {
      return  p ? new(p) ::MimosaAnalysis : new ::MimosaAnalysis;
   }
   static void *newArray_MimosaAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::MimosaAnalysis[nElements] : new ::MimosaAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_MimosaAnalysis(void *p) {
      delete ((::MimosaAnalysis*)p);
   }
   static void deleteArray_MimosaAnalysis(void *p) {
      delete [] ((::MimosaAnalysis*)p);
   }
   static void destruct_MimosaAnalysis(void *p) {
      typedef ::MimosaAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MimosaAnalysis

//______________________________________________________________________________
void MMillepede::Streamer(TBuffer &R__b)
{
   // Stream an object of class MMillepede.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MMillepede::Class(),this);
   } else {
      R__b.WriteClassBuffer(MMillepede::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MMillepede(void *p) {
      return  p ? new(p) ::MMillepede : new ::MMillepede;
   }
   static void *newArray_MMillepede(Long_t nElements, void *p) {
      return p ? new(p) ::MMillepede[nElements] : new ::MMillepede[nElements];
   }
   // Wrapper around operator delete
   static void delete_MMillepede(void *p) {
      delete ((::MMillepede*)p);
   }
   static void deleteArray_MMillepede(void *p) {
      delete [] ((::MMillepede*)p);
   }
   static void destruct_MMillepede(void *p) {
      typedef ::MMillepede current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MMillepede

//______________________________________________________________________________
void MimosaGlobalAlign::Streamer(TBuffer &R__b)
{
   // Stream an object of class MimosaGlobalAlign.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MimosaGlobalAlign::Class(),this);
   } else {
      R__b.WriteClassBuffer(MimosaGlobalAlign::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MimosaGlobalAlign(void *p) {
      delete ((::MimosaGlobalAlign*)p);
   }
   static void deleteArray_MimosaGlobalAlign(void *p) {
      delete [] ((::MimosaGlobalAlign*)p);
   }
   static void destruct_MimosaGlobalAlign(void *p) {
      typedef ::MimosaGlobalAlign current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MimosaGlobalAlign

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 216,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)0x0)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

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
   static TClass *vectorlEchargR_Dictionary();
   static void vectorlEchargR_TClassManip(TClass*);
   static void *new_vectorlEchargR(void *p = 0);
   static void *newArray_vectorlEchargR(Long_t size, void *p);
   static void delete_vectorlEchargR(void *p);
   static void deleteArray_vectorlEchargR(void *p);
   static void destruct_vectorlEchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<char>*)
   {
      vector<char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<char>", -2, "vector", 216,
                  typeid(vector<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEchargR_Dictionary, isa_proxy, 0,
                  sizeof(vector<char>) );
      instance.SetNew(&new_vectorlEchargR);
      instance.SetNewArray(&newArray_vectorlEchargR);
      instance.SetDelete(&delete_vectorlEchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEchargR);
      instance.SetDestructor(&destruct_vectorlEchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<char> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<char>*)0x0)->GetClass();
      vectorlEchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<char> : new vector<char>;
   }
   static void *newArray_vectorlEchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<char>[nElements] : new vector<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEchargR(void *p) {
      delete ((vector<char>*)p);
   }
   static void deleteArray_vectorlEchargR(void *p) {
      delete [] ((vector<char>*)p);
   }
   static void destruct_vectorlEchargR(void *p) {
      typedef vector<char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<char>

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
   static TClass *vectorlEMRaxcLcLvertexStructgR_Dictionary();
   static void vectorlEMRaxcLcLvertexStructgR_TClassManip(TClass*);
   static void *new_vectorlEMRaxcLcLvertexStructgR(void *p = 0);
   static void *newArray_vectorlEMRaxcLcLvertexStructgR(Long_t size, void *p);
   static void delete_vectorlEMRaxcLcLvertexStructgR(void *p);
   static void deleteArray_vectorlEMRaxcLcLvertexStructgR(void *p);
   static void destruct_vectorlEMRaxcLcLvertexStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MRax::vertexStruct>*)
   {
      vector<MRax::vertexStruct> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MRax::vertexStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MRax::vertexStruct>", -2, "vector", 216,
                  typeid(vector<MRax::vertexStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMRaxcLcLvertexStructgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MRax::vertexStruct>) );
      instance.SetNew(&new_vectorlEMRaxcLcLvertexStructgR);
      instance.SetNewArray(&newArray_vectorlEMRaxcLcLvertexStructgR);
      instance.SetDelete(&delete_vectorlEMRaxcLcLvertexStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMRaxcLcLvertexStructgR);
      instance.SetDestructor(&destruct_vectorlEMRaxcLcLvertexStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MRax::vertexStruct> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MRax::vertexStruct>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMRaxcLcLvertexStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MRax::vertexStruct>*)0x0)->GetClass();
      vectorlEMRaxcLcLvertexStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMRaxcLcLvertexStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMRaxcLcLvertexStructgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MRax::vertexStruct> : new vector<MRax::vertexStruct>;
   }
   static void *newArray_vectorlEMRaxcLcLvertexStructgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MRax::vertexStruct>[nElements] : new vector<MRax::vertexStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMRaxcLcLvertexStructgR(void *p) {
      delete ((vector<MRax::vertexStruct>*)p);
   }
   static void deleteArray_vectorlEMRaxcLcLvertexStructgR(void *p) {
      delete [] ((vector<MRax::vertexStruct>*)p);
   }
   static void destruct_vectorlEMRaxcLcLvertexStructgR(void *p) {
      typedef vector<MRax::vertexStruct> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MRax::vertexStruct>

namespace ROOT {
   static TClass *vectorlEMRaxcLcLtrackStructgR_Dictionary();
   static void vectorlEMRaxcLcLtrackStructgR_TClassManip(TClass*);
   static void *new_vectorlEMRaxcLcLtrackStructgR(void *p = 0);
   static void *newArray_vectorlEMRaxcLcLtrackStructgR(Long_t size, void *p);
   static void delete_vectorlEMRaxcLcLtrackStructgR(void *p);
   static void deleteArray_vectorlEMRaxcLcLtrackStructgR(void *p);
   static void destruct_vectorlEMRaxcLcLtrackStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MRax::trackStruct>*)
   {
      vector<MRax::trackStruct> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MRax::trackStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MRax::trackStruct>", -2, "vector", 216,
                  typeid(vector<MRax::trackStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMRaxcLcLtrackStructgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MRax::trackStruct>) );
      instance.SetNew(&new_vectorlEMRaxcLcLtrackStructgR);
      instance.SetNewArray(&newArray_vectorlEMRaxcLcLtrackStructgR);
      instance.SetDelete(&delete_vectorlEMRaxcLcLtrackStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMRaxcLcLtrackStructgR);
      instance.SetDestructor(&destruct_vectorlEMRaxcLcLtrackStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MRax::trackStruct> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MRax::trackStruct>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMRaxcLcLtrackStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MRax::trackStruct>*)0x0)->GetClass();
      vectorlEMRaxcLcLtrackStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMRaxcLcLtrackStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMRaxcLcLtrackStructgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MRax::trackStruct> : new vector<MRax::trackStruct>;
   }
   static void *newArray_vectorlEMRaxcLcLtrackStructgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MRax::trackStruct>[nElements] : new vector<MRax::trackStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMRaxcLcLtrackStructgR(void *p) {
      delete ((vector<MRax::trackStruct>*)p);
   }
   static void deleteArray_vectorlEMRaxcLcLtrackStructgR(void *p) {
      delete [] ((vector<MRax::trackStruct>*)p);
   }
   static void destruct_vectorlEMRaxcLcLtrackStructgR(void *p) {
      typedef vector<MRax::trackStruct> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MRax::trackStruct>

namespace ROOT {
   static TClass *vectorlEMRaxcLcLhitsStructgR_Dictionary();
   static void vectorlEMRaxcLcLhitsStructgR_TClassManip(TClass*);
   static void *new_vectorlEMRaxcLcLhitsStructgR(void *p = 0);
   static void *newArray_vectorlEMRaxcLcLhitsStructgR(Long_t size, void *p);
   static void delete_vectorlEMRaxcLcLhitsStructgR(void *p);
   static void deleteArray_vectorlEMRaxcLcLhitsStructgR(void *p);
   static void destruct_vectorlEMRaxcLcLhitsStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MRax::hitsStruct>*)
   {
      vector<MRax::hitsStruct> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MRax::hitsStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MRax::hitsStruct>", -2, "vector", 216,
                  typeid(vector<MRax::hitsStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMRaxcLcLhitsStructgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MRax::hitsStruct>) );
      instance.SetNew(&new_vectorlEMRaxcLcLhitsStructgR);
      instance.SetNewArray(&newArray_vectorlEMRaxcLcLhitsStructgR);
      instance.SetDelete(&delete_vectorlEMRaxcLcLhitsStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMRaxcLcLhitsStructgR);
      instance.SetDestructor(&destruct_vectorlEMRaxcLcLhitsStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MRax::hitsStruct> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MRax::hitsStruct>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMRaxcLcLhitsStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MRax::hitsStruct>*)0x0)->GetClass();
      vectorlEMRaxcLcLhitsStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMRaxcLcLhitsStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMRaxcLcLhitsStructgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MRax::hitsStruct> : new vector<MRax::hitsStruct>;
   }
   static void *newArray_vectorlEMRaxcLcLhitsStructgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MRax::hitsStruct>[nElements] : new vector<MRax::hitsStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMRaxcLcLhitsStructgR(void *p) {
      delete ((vector<MRax::hitsStruct>*)p);
   }
   static void deleteArray_vectorlEMRaxcLcLhitsStructgR(void *p) {
      delete [] ((vector<MRax::hitsStruct>*)p);
   }
   static void destruct_vectorlEMRaxcLcLhitsStructgR(void *p) {
      typedef vector<MRax::hitsStruct> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MRax::hitsStruct>

namespace ROOT {
   static TClass *vectorlEDR3gR_Dictionary();
   static void vectorlEDR3gR_TClassManip(TClass*);
   static void *new_vectorlEDR3gR(void *p = 0);
   static void *newArray_vectorlEDR3gR(Long_t size, void *p);
   static void delete_vectorlEDR3gR(void *p);
   static void deleteArray_vectorlEDR3gR(void *p);
   static void destruct_vectorlEDR3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DR3>*)
   {
      vector<DR3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DR3>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DR3>", -2, "vector", 216,
                  typeid(vector<DR3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDR3gR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DR3>) );
      instance.SetNew(&new_vectorlEDR3gR);
      instance.SetNewArray(&newArray_vectorlEDR3gR);
      instance.SetDelete(&delete_vectorlEDR3gR);
      instance.SetDeleteArray(&deleteArray_vectorlEDR3gR);
      instance.SetDestructor(&destruct_vectorlEDR3gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DR3> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DR3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDR3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DR3>*)0x0)->GetClass();
      vectorlEDR3gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDR3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDR3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DR3> : new vector<DR3>;
   }
   static void *newArray_vectorlEDR3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DR3>[nElements] : new vector<DR3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDR3gR(void *p) {
      delete ((vector<DR3>*)p);
   }
   static void deleteArray_vectorlEDR3gR(void *p) {
      delete [] ((vector<DR3>*)p);
   }
   static void destruct_vectorlEDR3gR(void *p) {
      typedef vector<DR3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DR3>

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
   static TClass *vectorlEDLaddermUgR_Dictionary();
   static void vectorlEDLaddermUgR_TClassManip(TClass*);
   static void *new_vectorlEDLaddermUgR(void *p = 0);
   static void *newArray_vectorlEDLaddermUgR(Long_t size, void *p);
   static void delete_vectorlEDLaddermUgR(void *p);
   static void deleteArray_vectorlEDLaddermUgR(void *p);
   static void destruct_vectorlEDLaddermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DLadder*>*)
   {
      vector<DLadder*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DLadder*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DLadder*>", -2, "vector", 216,
                  typeid(vector<DLadder*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDLaddermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DLadder*>) );
      instance.SetNew(&new_vectorlEDLaddermUgR);
      instance.SetNewArray(&newArray_vectorlEDLaddermUgR);
      instance.SetDelete(&delete_vectorlEDLaddermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDLaddermUgR);
      instance.SetDestructor(&destruct_vectorlEDLaddermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DLadder*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DLadder*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDLaddermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DLadder*>*)0x0)->GetClass();
      vectorlEDLaddermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDLaddermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDLaddermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DLadder*> : new vector<DLadder*>;
   }
   static void *newArray_vectorlEDLaddermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DLadder*>[nElements] : new vector<DLadder*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDLaddermUgR(void *p) {
      delete ((vector<DLadder*>*)p);
   }
   static void deleteArray_vectorlEDLaddermUgR(void *p) {
      delete [] ((vector<DLadder*>*)p);
   }
   static void destruct_vectorlEDLaddermUgR(void *p) {
      typedef vector<DLadder*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DLadder*>

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 99,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   static TClass *maplEintcOTStringgR_Dictionary();
   static void maplEintcOTStringgR_TClassManip(TClass*);
   static void *new_maplEintcOTStringgR(void *p = 0);
   static void *newArray_maplEintcOTStringgR(Long_t size, void *p);
   static void delete_maplEintcOTStringgR(void *p);
   static void deleteArray_maplEintcOTStringgR(void *p);
   static void destruct_maplEintcOTStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TString>*)
   {
      map<int,TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TString>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TString>", -2, "map", 99,
                  typeid(map<int,TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTStringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TString>) );
      instance.SetNew(&new_maplEintcOTStringgR);
      instance.SetNewArray(&newArray_maplEintcOTStringgR);
      instance.SetDelete(&delete_maplEintcOTStringgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTStringgR);
      instance.SetDestructor(&destruct_maplEintcOTStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TString> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TString>*)0x0)->GetClass();
      maplEintcOTStringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TString> : new map<int,TString>;
   }
   static void *newArray_maplEintcOTStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TString>[nElements] : new map<int,TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTStringgR(void *p) {
      delete ((map<int,TString>*)p);
   }
   static void deleteArray_maplEintcOTStringgR(void *p) {
      delete [] ((map<int,TString>*)p);
   }
   static void destruct_maplEintcOTStringgR(void *p) {
      typedef map<int,TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TString>

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
  void TriggerDictionaryInitialization_Mdict_Impl() {
    static const char* headers[] = {
"MAnalysis.h",
"MAlign.h",
"MHist.h",
"MRaw.h",
"MRax.h",
"MAlignment.h",
"MMillepede.h",
"MGlobalAlign.h",
"MKalmanFilter.h",
"MLeastChiSquare.h",
0
    };
    static const char* includePaths[] = {
"include/",
"/home/romain/root/include",
"/home/romain/SiTrInEO_EX2/taf/code/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Mdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for alignment of muon spectrometer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MAlignment.h")))  __attribute__((annotate("$clingAutoload$MAnalysis.h")))  MAlignment;
class __attribute__((annotate("$clingAutoload$MAlign.h")))  __attribute__((annotate("$clingAutoload$MAnalysis.h")))  MimosaAlignAnalysis;
class __attribute__((annotate("$clingAutoload$MHist.h")))  __attribute__((annotate("$clingAutoload$MAnalysis.h")))  MHist;
class __attribute__((annotate(R"ATTRDUMP(Mimosa Raw studies)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MRaw.h")))  __attribute__((annotate("$clingAutoload$MAnalysis.h")))  MRaw;
class __attribute__((annotate(R"ATTRDUMP(Integrate MRax classe into the ROOT system, see http://root.cern.ch/root/Using.html)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MRax.h")))  __attribute__((annotate("$clingAutoload$MAnalysis.h")))  MRax;
class __attribute__((annotate("$clingAutoload$MAnalysis.h")))  MimosaAnalysis;
class __attribute__((annotate(R"ATTRDUMP(Millepede Class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MMillepede.h")))  MMillepede;
class __attribute__((annotate("$clingAutoload$MGlobalAlign.h")))  MimosaGlobalAlign;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Mdict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "MAnalysis.h"
#include "MAlign.h"
#include "MHist.h"
#include "MRaw.h"
#include "MRax.h"
#include "MAlignment.h"
#include "MMillepede.h"
#include "MGlobalAlign.h"
#include "MKalmanFilter.h"
#include "MLeastChiSquare.h"


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MAlignment", payloadCode, "@",
"MHist", payloadCode, "@",
"MMillepede", payloadCode, "@",
"MRaw", payloadCode, "@",
"MRax", payloadCode, "@",
"MimosaAlignAnalysis", payloadCode, "@",
"MimosaAnalysis", payloadCode, "@",
"MimosaGlobalAlign", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Mdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Mdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Mdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Mdict() {
  TriggerDictionaryInitialization_Mdict_Impl();
}
