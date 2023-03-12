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
            int perimeter = (*length + *length + *width + *width);
            return perimeter; //what the return value will be for this function
        }

        int getArea(int* length, int* width)
        {
            int area = (*length * *width);
            return area;  //what the return value will be for this function
        }

        //Case #1 - Checking if the inputs to the 'getPerimeter' function correctly result in the expected output
        TEST_METHOD(TestgetPerimeter_Valid_Perimeter_Calculation)
        {
            // Arrange - Initialization 
            int length = 20;
            int width = 25;
            int expected = 90; //Expected perimeter result

            // Act - The 'getPerimeter' function return value is being assigned to 'result'; the function is being called. 
            int result = getPerimeter(&length, &width);

            //Assert - Testing the Function Behaviour
            Assert::AreEqual(expected, result);
        }

        //Case #2 - Checking if the inputs to the 'getArea' function correctly result in the expected output
        TEST_METHOD(TestGetArea_Valid)
        {
            // Arrange - Initialization
            int length = 7;
            int width = 11;
            int expected = 77; //Expected Area

            //Act - The 'getArea' function return value is being assigned to 'result'; the function is being called. 
            int result = getArea(&length, &width);

            //Assert - Testing the Function Behaviour
            Assert::AreEqual(expected, result);
        }
    };
}
