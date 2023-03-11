#include "pch.h" //Function header file library
#include "CppUnitTest.h" //pre-compile header file 
#include <assert.h> //native test function header

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PerimeterAreaUnitTests
{
    TEST_CLASS(PerimeterAreaUnitTests)
    {
    public:

        // The Function definitions
        int getPerimeter(int* length, int* width)
        {
            return (*length + *width) * 2; //what the return value will be for this function
        }

        int getArea(int* length, int* width)
        {
            return ((*length) * (*width)); //what the return value will be for this function
        }

        //Case #1 - Perimeter - Equal to Check 
        TEST_METHOD(TestGetPerimeter_Valid)
        {
            // Arrange - Initialization 
            int length = 20;
            int width = 40;
            int expected = 120; //Expected perimeter

            // Act - The 'getPerimeter' function return value is being assigned to 'result'; the function is being called. 
            int result = getPerimeter(&length, &width);

            // Assert - Testing the function result
            Assert::AreEqual(expected, result);
        }

        //Case #2 - Area - Equal to Check 
        TEST_METHOD(TestGetArea_Valid)
        {
            // Arrange - Initialization
            int length = 10;
            int width = 15;
            int expected = 150; //Expected Area

            //Act - The 'getArea' function return value is being assigned to 'result'; the function is being called. 
            int result = getArea(&length, &width);

            // Assert - Testing the function result
            Assert::AreEqual(expected, result);
        }
    };
}

