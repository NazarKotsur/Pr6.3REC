#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr6.3REC/Pr6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestFillArrayRecursive)
		{
			// Arrange
			const int size = 5;
			int arr[size];
			int expected[] = { 1, 2, 3, 4, 5 };

			// Act
			for (int i = 0; i < size; i++) {
				arr[i] = i + 1;
			}

			// Assert
			for (int i = 0; i < size; i++) {
				Assert::AreEqual(expected[i], arr[i]);
			}
		}

		TEST_METHOD(TestFillArrayRecursiveTemplate)
		{
			// Arrange
			const int size = 5;
			double arr[size];
			double expected[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

			// Act
			for (int i = 0; i < size; i++) {
				arr[i] = (i + 1) + 0.1 * (i + 1);
			}

			// Assert
			for (int i = 0; i < size; i++) {
				Assert::AreEqual(expected[i], arr[i]);
			}
		}
	};
}
