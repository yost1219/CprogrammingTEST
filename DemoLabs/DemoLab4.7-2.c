/*
Author: Yost
Project: Demo for 4.7-2
Date: 12 July 2018


Objective:

Formatted Input (Numbers)

    Read three ints, representing the date, from one line
    Format the input so the integers are separated by a dash (-) as <mm>-<dd>-<yyyy>
    Output the results as a date with leading zeros <mm>/<dd>/<yyyy>
    Specify the field width of the output appropriately
*/

#define _CRT_NO_SECURE_WARNINGS 1
#include <stdio.h>

int main (void)
{
    int MM = 0, DD = 0, YYYY = 0;
    printf ("Provide the date in the following format: MM-DD-YYYY \n");
    scanf ("%d-%d-%d", &MM, &DD, &YYYY); //asks the user for three numbers in the following format: 
    //number1-number2-number3 (user must put "-" between numbers) and stores the three values into 
    //ints MM, DD, and YYYY respectively
    printf ("The date you entered is: %02d/%02d/%d \n", MM, DD, YYYY); //spits out the three ints in 
    //the following format: MM/DD/YYYY (with slashes between numbers)

    return 0;
}