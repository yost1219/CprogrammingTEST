#include <stdio.h>

int main (void)
{
    float userInput = 0; //stores user input
    printf ("Enter a character: "); //asks user for input
    userInput = getchar(); //assigns the input value (with getchar) to the variable userInput
    printf ("Your character was: "); //prefaces output
    putchar(userInput); //prints output
    printf ("\n");

    return 0;
}

