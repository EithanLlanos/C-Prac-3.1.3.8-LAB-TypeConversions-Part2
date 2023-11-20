//Scenario
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them.
//
//Your version of the program must print the same result as the expected output.
//
//Before you use the compiler, try to find the errors only by manual code analysis.Use the converted number to check how to round a float number.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Code
//#include <stdio.h>
//
//int main(void)
//{
//	float notExactFive = 5.4;
//	float notExactNumber = 6.7;
//	int exactFive;
//	int roundedNumber;
//	if notExactNumber - notExactNumber > 0.5
//	{
//		roundedNumber = (int)notExactNumber + 1;
//	}
//	else
//	{
//		roundedNumber = int notExactNumber;
//	}
//	exactFive = (int)notExactFive;
//	printf("Five is: %f\n", exactFive);
//	printf("Rounded to seven: %d\n", roundedNumber);
//	return 0;
//}
//
//Expected output
//Five is : 5
//Rounded to seven : 7
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main() {
	float notExactFive = 5.4;
	float notExactNumber = 6.7;
	int exactFive;
	int roundedNumber;
	if ((notExactNumber - (int)notExactNumber) > 0.5)
	{
		roundedNumber = (int)notExactNumber + 1;
	}
	else
	{
		roundedNumber = (int) notExactNumber;
	}
	exactFive = (int)notExactFive;
	printf("Five is: %d\n", exactFive);
	printf("Rounded to seven: %d\n", roundedNumber);
	return 0;
}