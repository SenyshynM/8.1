﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1.1 rec/8.1.1 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[20] = "ughdiugfdhugid";

			Assert::AreEqual(false, Include(s,0));
		}
	};
}
