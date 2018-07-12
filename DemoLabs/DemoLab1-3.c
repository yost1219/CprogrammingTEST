// decl/init variables, print variables

#include <stdio.h>

int main (void)
{
    int Integer = 13; // %d
    float Float = 4.2; // %f
    double Double = 7.9; //%.15f (or."however many decimals you want to display")
    char Char = 'Y'; //%c

    printf ("Your integer is: %c cast as a float is: %f \n", Integer, (float)Integer);

    return 0;
}