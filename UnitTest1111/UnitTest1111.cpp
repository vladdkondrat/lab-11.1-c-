#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 11.1 c++/lab 11.1 c++.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1111
{
	TEST_CLASS(UnitTest1111)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Arrange
			const std::string testFileName = "test1.txt";
			std::ofstream testFile(testFileName);
			testFile << "This line contains !!! marks.\nAnother line.";
			testFile.close();

			// Act
			bool result = ContainsThreeExclamationMarks(testFileName);

			// Assert
			Assert::IsTrue(result, L"The function should return true when '!!!' is present.");
		}
	};
}
