// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

 //#include <atlsafe.h>

// Following code is native code. 
#pragma unmanaged 
// Uses the additional include directory in project settings to find the generated type library:
// "..\..\Run\Debug" or "..\..\Run\Release".
#import "CommonInterop.tlb" no_namespace named_guids rename("value", "valueEx")
#import "ScInteropTest.tlb" no_namespace named_guids rename("value", "valueEx") // no_registry
// Following code is managed code. 
#pragma managed