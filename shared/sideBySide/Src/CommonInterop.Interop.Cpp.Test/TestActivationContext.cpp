#include "stdafx.h"
#include "TestActivationContext.h"

using namespace System;
using namespace System::IO;
using namespace System::Reflection;
using namespace System::Runtime::InteropServices;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

void TestActivationContext::Initialize()
{
	ACTCTX actCtx;
	memset((void*)&actCtx, 0, sizeof(ACTCTX));
	actCtx.cbSize = sizeof(ACTCTX);

	String^ manifestlocation = Path::GetDirectoryName(Assembly::GetExecutingAssembly()->Location) + "\\CommonInterop.Interop.Cpp.Test.dll.manifest";
	IntPtr mfl = Marshal::StringToHGlobalUni(manifestlocation);
	actCtx.lpSource = (LPCWSTR)mfl.ToPointer();

	hCtx = ::CreateActCtx(&actCtx);
	if (hCtx == INVALID_HANDLE_VALUE)
		Assert::Fail("Manifest not deployed properly, cannot find: " + manifestlocation); 
	else{
		::ActivateActCtx(hCtx, &cookie);
		CoInitialize(NULL);
	}
	Marshal::FreeHGlobal(mfl);
}
	
void TestActivationContext::Cleanup()
{
	CoUninitialize();
	::DeactivateActCtx(0, cookie);
}