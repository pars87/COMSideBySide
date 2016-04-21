#pragma once
#include "stdafx.h"
#include "TestActivationContext.h"

using namespace System;
using namespace System::Linq;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;


namespace WidexSmartspeakInteropTest
{

	[TestClass]
	public ref class  WidexSmartspeakInteropTest
	{

	public:

		[TestInitialize]
		void MyTestInitialize() 
		{
			TestActivationContext::Initialize();
		};

		[TestCleanup]
		void MyTestCleanup() 
		{
			TestActivationContext::Cleanup();
		};


		[TestMethod]
		void SomeTest()
		{
			// [ Arrange ]
			auto useCom = IUseComPtr(_uuidof(UseCom));

			int res = useCom -> Add(5,6);

			Assert::AreEqual(11, res);
		}

		[TestMethod]
		void SomeTest2()
		{
			auto useCom = IUseComPtr(_uuidof(UseCom));

			IComInterop* pAbs = useCom -> Plus1Me(256);

			Assert::AreEqual(257, pAbs -> Plus1(256));
		}
	};
}