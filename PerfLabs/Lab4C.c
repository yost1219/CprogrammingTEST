#define _CRT_SECURE_NO_WARNINGS 1            // Disables warning
#include <stdio.h> 

int main (void)
{
    char input [10];
    printf ("What would you like me to repeat? ");
    fgets (input, sizeof(input), stdin);
    printf ("You asked for it: ");
    fputs (input, stdout); //fputs doesn't add the \n automatically so you have to do it later
    printf ("\n");

    return 0;
}