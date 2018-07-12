/*
Author: Yost
Project: Demo for 4.7-1
Date: 12 July 2018

Objective:

Formatted Input (Strings)

    Read a string into a char array
    Specify a field-width to protect against buffer overflow
    Ensure the field-width leaves room for the nul-terminator
    Stop reading at the first capital letter or new line

*/

#define _CRT_NO_SECURE_WARNINGS 1
#include <stdio.h>

int main (void)
{
    char array[100] = {0}; 
    char astley[100] = "astley";

	printf ("Yo, tell me what you want, what you really, really want: \n");
    scanf ("%99[^A-Z\n]s \n", &array); //looks at the first 99 characters entered, 
    //stopping at the first capital letter or new line, and stores it in array
    printf ("%s \n", array); //spits out whatever it stored in array

    return 0;
}