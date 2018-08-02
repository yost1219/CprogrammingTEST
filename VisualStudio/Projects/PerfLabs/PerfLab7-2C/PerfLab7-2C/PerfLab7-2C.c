/*
Author: Yost
Title: Performance Lab 7-2 C
Date: 17 July 2018

ELSE-IF STATEMENT
SWAP THE LARGEST NUMBER

Initialize ONLY three unsigned int variables to 0.
Safely scan user input into the variable #1 and #2 utilizing a single line.
Using a single ELSE-IF statement:
If variable #1 is equal to variable #2, print an ERROR.
Otherwise, exchange the value of the largest variable with variable #3 while preserving the other value.
Print the values of all three variables if the SUM of the three variables is greater than 2 regardless of the previous ELSE-IF statement.


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int number1 = 0, number2 = 0, number3 = 0;

	printf("Please input two numbers separated by a space (e.g. 7 8, -15 277, etc.).\n");
	scanf("%d %d", &number1, &number2);
	
	if (number1 == number2)
		printf("Oh no!  Your numbers are equal.");
	else if (number1 > number2)
	{
		number3 = number1;
	}
	else
	{
		number3 = number2;
	}

	if ((number1 + number2 + number3) > 2)
	{
		printf("The three numbers are: %d, %d, and %d", number1, number2, number3);
	}
	else
	{
		printf("Well, isn't that cute; but it's wrong.");
	}

	while (1);
	return 0;
}

/*

Demo Lab 7.2-3

////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// DEMONSTRATION LAB X.2.A-3 //////////////////////////////////////
/////////////////////////////// "WHAT'S THE DIFFERENCE?" ///////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
// Initialize three (and only three) int variables to 0
// Safely scan user input into the variable #1 and #2 utilizing a single line
// Using a single ELSE-IF statement:
//     If variable #1 is equal to variable #2, assign 0 to variable #3
//     Otherwise, subtract the smallest from the largest (e.g., 3 - 2, 42 - -455, -11 - -1337)
//         and assign the result to variable #3
// Print the value of variable #3 if it is positive, otherwise print an error
////////////////////////////////////////////////////////////////////////////////////////////////

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
// Initialize three (and only three) int variables to 0 
int variable1 = 0;
int variable2 = 0;
int variable3 = 0;

// Safely scan user input into the variable #1 and #2 utilizing a single line 
printf("Enter two integers separated by a single space. \n");
printf("(e.g., -17 1932 \n");
_flushall();
scanf("%d %d", &variable1, &variable2);

// Using a single ELSE-IF statement 
// If variable #1 is equal to variable #2, assign 0 to variable3 
if (variable1 == variable2) // Executes this block if the two input variables are equal
{
	variable3 = 0;
}
// If variable #1 is larger, subtract variable #2 from it 
else if (variable1 > variable2) // Executes this block if variable1 is the largest
{
	variable3 = variable1 - variable2; // Variable1 is larger so this statement subtracts variable2 and assigns the result to variable3
}
// Otherise variable #2 is larger, subtract variable #1 from it 
else							// Executes this block if variable 2 is the largest
{
	variable3 = variable2 - variable1; // Variable2 is larger so this statement subtracts variable1 and assigns the result to variable3
}

// Print the value of variable #3 if it is positive, otherwise print an error 
// Print the value of variable #3 if it is positive... 
if (variable3 >= 0)
{
	printf("Variable 3:  %d \n", variable3);
}
// ...otherwise print an error code. 
else
{
	printf("Something bad happened because variable 3 was not positive. \n");
	printf("Instead, variable 3 turned out to be %d. \n", variable3);
}

return 0;
}
*/