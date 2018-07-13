/*
Name: Yost
Project: Lab 4D
Date: 12 July 2018

Part 1
Formatted Input (strings)

    Read a first, middle and last name as input into separate char arrays
    Specify a field-width to protect against buffer overflow
    Ensure the field-width leaves room for a nul-terminator
    Specify a ("\t") as a delimitating character

Part 2
Formatted Input (numbers)

    Read two integers from one line
    Format the input so that the integers are separated by an asterisk (*) x*y (e.g., 2*3, 11*14)
    Reprint the two integers and result as if the answer were being read by a human

////////////// EXAMPLE #1 ///////////////
OUTPUT:  Enter two integers, separated by a *, to be multiplied…
INPUT:   2*3
OUTPUT:  The result of 2 multiplied by 3 is 6.  
////////////// EXAMPLE #2 ///////////////
OUTPUT:  Enter two integers, separated by a *, to be multiplied…
INPUT:   11*14
OUTPUT:  The result of 11 multiplied by 14 is 154.

*/


#define _CRT_NO_SECURE_WARNINGS 1
#include <stdio.h>

int main (void)
{
    //Part 1

    char first[100] = {0};
    char middle[100] = {0};
    char last[100] = {0};
    printf ("Provide your first, middle, and last names, separated by tabs. \n");
    scanf ("%99s\t%99s\t%99s", &first, &middle, &last); 
    
    //Part 2

    int number1 = 0, number2 = 0;
    printf ("Enter two integers, separated by a *, to be multiplied (e.g. 7*5). \n");
    scanf ("%d%*c%d", &number1, &number2);
    
    //Results

    printf ("The name you entered is: \n\t%s \n\t%s \n\t%s \n", first, middle, last); 
    printf ("%d multiplied by %d equals %d. \n", number1, number2, number1 * number2);

    return 0;
}
