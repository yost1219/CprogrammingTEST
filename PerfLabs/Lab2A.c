#include <stdio.h>

int main (void)
{
    int Integer = 1;
    float Float = 2.34567;
    double Double = 4.5678901234567;
    char Char = '6';

    printf ("Your integer is: %d \n", Integer);
    printf ("Your float is: %f \n", Float);
    printf ("Your double is: %.15f \n", Double);
    printf ("Your character is: %c \n", Char);

    printf ("The size of the integer is: %d \n", sizeof(Integer));
    printf ("The size of the float is: %d \n", sizeof(Float));
    printf ("The size of the double is: %d \n", sizeof(Double));
    printf ("The size of the character is: %d \n", sizeof(Char));

    return 0;
}