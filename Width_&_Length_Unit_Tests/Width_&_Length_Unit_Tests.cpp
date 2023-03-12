#include "pch.h" //Function header file library
#include "CppUnitTest.h" //pre-compile header file 
#include <assert.h> //native test function header

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace WidthLengthUnitTests
{
    TEST_CLASS(WidthLengthUnitTests)
    {
    public:

        //The Function definitions
        void setLength(int input, int* length) {
            if (input >= 0 && input < 100) {
                *length = input;
            }
        }

        void setWidth(int input, int* width) {
            if (input > 0 && input <= 100) {
                *width = input;
            }
        }
        /*******************************************************************************************************************************************************************************/

        //Case #1 - Checking if the input to the 'setLength' function correctly updates the value of the length variable.
        TEST_METHOD(TestsetLength_Valid_Input_Assignment) 
        {
            //Arrange - Initalize
            int length = 0;
            int input = 50;

            //Act - The 'setLength' function is being called with the values from "//Arrange"
            setLength(input, &length);

            //Assert - Testing the Function Behaviour
            Assert::AreEqual(input, length); //If pass then length will be 50
        };

        //Case #2  - Checking to see if input above the validation limit entered into the 'setLength' function does not update the length variable as expected
        TEST_METHOD(TestsetLength_Upper_Boundary)  
        {
            //Arrange - Initialize
            int length = 0;
            int input = 100; //over the limit of valid input
            int expectedlength = 0;  //Since 'input' is greater than the limit, 'length' should remain as 0

            //Act - 
            setLength(input, &length);

            //Assert - Testing the Function Behaviour
            Assert::AreEqual(expectedlength, length); //If pass then length will be 0
        };

        //Case #3 - Checking to see if the setLength function properly truncates input with decimals down to the nearest whole number 
        TEST_METHOD(TestsetLength_Truncation_Test) 
        {
            //Arrange - Initialize
            int length = 0;   
            int input = 13.99; //non-integer value
            int expectedlength = 13;  //The truncation should round this down to 13, ignoring the decimals

            //Act - 
            setLength(input, &length);

            //Assert - Testing the Function Behaviour
            Assert::AreEqual(expectedlength, length); //If pass then length will be 13
        };

        /*******************************************************************************************************************************************************************************/

        //Case #4 - Checking if the input to the 'setWidth' function correctly updates the value of the length variable.
        TEST_METHOD(TestsetWidth_Valid_Input_Assignment) 
        {
            //Arrange - Initialization
            int width = 0;
            int input = 50;

            //Act - The 'setWidth' function is being called with the values from "//Arrange"
             setWidth(input, &width);

            //Assert - Testing the Function Behaviour
            Assert::AreEqual(input, width); //If pass then width will be 50 as the input will update the value of variable 'width'
        };

        //Case $5 -  Checking to see if input below the validation limit entered into the 'setWidth' function does not update the width variable as expected
        TEST_METHOD(TestsetWidth_Lower_Boundary) //Checking to see if input over 100 will cause the function to not update the value of variable 'width' correctly.  
        {
            //Arrange - Initialization
            int width = 0;
            int input = -1; //below the limit of valid input
            int expectedwidth = 0;  //Since 'input' is lower than the limit, 'width' should remain as it is, which is 0

            //Act - The 'setWidth' function is being called with the values from "//Arrange"
            setWidth(input, &width);

            //Assert - Testing the Function Behaviour
            Assert::AreEqual(expectedwidth, width); //If pass then length will be 0 as the function will not update the variable 'width' to -1
        };

        //Case #6 - Checking to see if the setWidth function properly truncates input with decimals down to the nearest whole number 
        TEST_METHOD(TestsetWidth_Truncation_Test) 
        {
            //Arrange - Initialization
            int width = 0;
            int input = 13.01; //non-integer value
            int expectedwidth = 13;  //The truncation should round this down to 13, ignoring the decimals

            //Act - The 'setWidth' function is being called with the values from "//Arrange"
            setWidth(input, &width);

            //Assert - Testing the Function Behaviour
            Assert::AreEqual(expectedwidth, width); //If pass then length will be 13
        };
    };
    }

