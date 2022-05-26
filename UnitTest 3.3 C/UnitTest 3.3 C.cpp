#include "pch.h"
#include "CppUnitTest.h"
#include "../Object.cpp"
#include "../LngLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33C
{
	TEST_CLASS(UnitTest33C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong a(2, 3), b(2, 3);
			Assert::AreEqual(a==b, true);
		}
	};
}
