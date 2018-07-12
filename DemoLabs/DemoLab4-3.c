// fgets (input, sizeof(input), stdin) and puts (input) to receive input and spit out output

/*
Name: Yost
Project: Demo 4.5-1
Date: 11 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS_1            // Disables warning
#include <stdio.h> 

int main (void)
{
    char input[4] = {0}; //max output is 3 characters because string is auto nul-terminated
    printf ("Give me your input: ");
    fgets (input, sizeof(input), stdin);
    printf ("Take this: ");
    puts (input); //automatically adds \n after it spits out the output

    return 0;
}