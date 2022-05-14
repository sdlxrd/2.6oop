#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\2.6 oop\2.6 oop\Number.cpp"
#define PI 3.14159265
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Real a;
			int n = 1;
			double res = a.Step(n);
			Assert::AreEqual(res, 3.14159265);
		}
	};
}
