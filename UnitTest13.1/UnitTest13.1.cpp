#include "pch.h"
#include "CppUnitTest.h"
#include "../../PR05/PR05.2/PR05.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 3.0;
			int n = 0;
			double a =(x - 1) / (x + 1);
			a = A(x, n, a);
			Assert::AreEqual(a, -0.125);
		}
	};
}
