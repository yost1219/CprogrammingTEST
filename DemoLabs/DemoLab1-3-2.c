#include <stdio.h>

int main (void)
{
    int Integer = 1;
    float Float = 4.2;
    double Double = 7.9;
    char Char = 'Y';

    printf ("Your integer is: %d cast as a float is: %f \n", Integer, (float)Integer);
    printf ("Your integer is: %d cast as a char is: %c \n", Integer, (char)Integer);
    printf ("Your float is: %f cast as a double is: %.15f \n", Float, (double)Float);
    printf ("Your double is: %.15f cast as a float is: %f \n", Double, (float)Double);
    printf ("Your character is: %c cast as an integer is: %d \n", Char, (int)Char);
    printf ("63 cast as a character is: %c \n", (char)63);
    
    return 0;
}