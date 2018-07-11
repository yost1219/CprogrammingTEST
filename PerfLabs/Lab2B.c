#include <stdio.h>

int main (void)
{
    int Integer = 37;
    float Float = 5.8;
    double Double = 9.2;
    char Char = '6';

    printf ("Your integer is: %d cast as a float is: %f \n", Integer, (float)Integer);
    printf ("Your integer is: %d cast as a character is: %c \n", Integer, (char)Integer);
    printf ("Your float is: %f cast to a double is: %.15f \n", Float, (double)Float);
    printf ("Your double is: %.15f cast to a float is: %f \n", Double, (float)Double);
    printf ("Your character is: %c cast to an integer is: %d \n", Char, (int)Char);
    printf ("33 cast as a character is: %c \n", (char)33);

    return 0;
}