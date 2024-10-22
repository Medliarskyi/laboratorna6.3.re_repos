#include "pch.h"
#include "CppUnitTest.h"
#include "../lab63re/lab63re.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63re
{
	TEST_CLASS(UnitTest63re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int intArr[] = { 3, -1, 5, -10, 7, 0, -2, 8 };
			int intSize = sizeof(intArr) / sizeof(intArr[0]);
			int expectedSum = 23; 

			Assert::AreEqual(expectedSum, sumPositiveElementsRec(intArr, intSize));
		}
	};
}
