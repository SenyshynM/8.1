#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../8.1 (7)/8.1 (7).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "fgpflgpflrfprl";
			string ss = "aa";

			Assert::AreEqual(false, Include(s, ss));
		}
	};
}
