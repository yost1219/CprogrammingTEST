#include <stdio.h>

int main(void)
{
    /********** VARIABLE INITIALIZATION **********/
    /* Initialization Syntax: <DATA TYPE> <VARIABLE NAME> = <INITIAL VALUE>; */

    int lowerLimit = -10;    // lowest y value for graph
    int upperLimit = 10;    // highest y value for graph
    float x = 1.0, y = 2.1;        // graphing function variables

    // used to hold a person's individual initials
    char firstInitial = 'C', middleInitial = 'R', lastInitial = 'Y';
    
    double pi = 3.141592653589793;        // stores the constant "pi"
    int finalResult = 0;

    printf ("my integers are %d, %d \n", lowerLimit, upperLimit);
    printf ("my floating variables are %f, %f \n", x, y);
    printf ("my initials are %c%c%c \n", firstInitial, middleInitial, lastInitial);
    printf ("my double is %.15f \n", pi);
    printf ("the result is %d \n", finalResult);

    return 0;
}