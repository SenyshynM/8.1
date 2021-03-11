#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1.1 iter/8.1.1 iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[6] = "123cc";
			Assert::AreEqual(true, Include(s));
		}
	};
}
