#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6-3/Lab_6-3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 6;
			int c[n] = {1,2,3,4,5,6};
			Assert::AreEqual(3, Count(c, n));
		}
	};
}
