/*
Name: Yost
Project: Demo 4.5-2
Date: 11 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1            // Disables warning
#include <stdio.h> 

int main (void)
{
    char input [4];
    printf ("What would you like me to repeat? ");
    fgets (input, sizeof(input), stdin);
    printf ("You asked for it: ");
    fputs (input, stdout);
    printf ("\n");

    return 0;
}