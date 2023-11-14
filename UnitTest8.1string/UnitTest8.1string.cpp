#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB8.1string/LAB8.1string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str1 = "aabcc"; 
			
			int result1 = CountPairs(str1);

			Assert::AreEqual(2, result1);
		}
	};
}
