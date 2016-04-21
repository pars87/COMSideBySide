#pragma once

#define COMPANY_NAME "Tyson A/S"
#define PRODUCT_NAME "Tyson"
#define LEGAL_COPYRIGHT "Copyright © 2015-2016 Tyson A/S"

// ---------------------------------------------------------------------------
// Versionsnumre til brug i versionsressourcen.
// De er defineret efter skemaet, som anvendes i .NET.
#define VERSION_MAJOR 2
#define VERSION_MINOR 1
#define VERSION_BUILD 1264
#define VERSION_REVISION 0

// ---------------------------------------------------------------------------
// Makroer til at bygge en versionsstreng med punktummer af ovennævnte
// versionsnumre, som så kan bruges i versionsressourcen.
// ---------------------------------------------------------------------------
// Brug "stringizing operator" (#) til at omslutte makroparameteren i gåseøjne.
#define BUILD_STRING_INNER(s) #s
// Konvertér makroparametren til en streng.
// Det er nødvendigt med den ekstra makrofunktion.
#define BUILD_STRING(m) BUILD_STRING_INNER(m)
// Byg en tekststreng med punktum mellem tallene.
#define VERSION_STRING BUILD_STRING(VERSION_MAJOR.VERSION_MINOR.VERSION_BUILD.VERSION_REVISION)
