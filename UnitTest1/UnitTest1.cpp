#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Games\project\lb9_test\lb9_test\lb9_test.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 2.0;
			double b = 5.0;
			double s = 0.1;
			
			double t = OpInt(a,b,s);
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(t, 10.0823);
		}
		TEST_METHOD(TestMethod2)
		{
			double t = OpInt(1.0, 1.0, 0.1);
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(t, 0.230259);
		}
	};
}
