﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1 (5)/8.1 (5).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* s = "fgjfigjfgaa";
			char* ss = "aa";
			Assert::AreEqual(true, Include(s, ss));
		}
	};
}
