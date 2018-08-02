#include <stdio.h>

int main(void)
{
    /********** VARIABLE DECLARATION **********/
    /* Syntax: <DATA TYPE> <VARIABLE NAME>; */

    int lowerLimit;    // lowest y value for graph
    int upperLimit;    // highest y value for graph
    float x, y;        // graphing function variables

    // used to hold a person's individual initials
    char firstInitial, middleInitial, lastInitial;
    double pi;        // stores the constant "pi"

    printf ("my integers are %d, %d \n", lowerLimit, upperLimit);
    printf ("my floating variables are %f, %f \n", x, y);
    printf ("my characters are %c, %c, %c \n", firstInitial, middleInitial, lastInitial);
    printf ("my double is %.15f \n", pi);

    return 0;
}