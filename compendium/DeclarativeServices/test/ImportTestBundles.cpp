#include "cppmicroservices/BundleActivator.h"
#include "cppmicroservices/BundleImport.h"

#ifndef US_BUILD_SHARED_LIBS
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(system_bundle)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(BenchmarkDS)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(DSFrenchDictionary)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(DSGraph01)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(DSGraph02)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(DSGraph03)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(DSGraph04)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(DSGraph05)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(DSGraph06)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(DSGraph07)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(DSSpellChecker)
CPPMICROSERVICES_IMPORT_BUNDLE(EnglishDictionary)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI1)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI10)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI12)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI14)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI15)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI16)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI2)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI3)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI5)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI6)
CPPMICROSERVICES_INITIALIZE_STATIC_BUNDLE(TestBundleDSTOI9)
CPPMICROSERVICES_IMPORT_BUNDLE(declarative_services)
#endif