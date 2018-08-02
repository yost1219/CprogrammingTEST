/*
Author: Yost
Title: Arithmetic Operators Quiz
Date: 13 July 2018
*/

#include <stdio.h>

int main (void)
{
    int x = 0, y = 0;
    float z = 0;

    printf ("Give me two integers.\n");
    scanf ("%d%d", &x, &y);
    printf ("x is %d, y is %d\n", x, y);
    printf ("x times y is %d\n", (x * y));
    z = (float) x/y;
    printf ("x divided by y is %f\n", z);
    printf ("the remainder of x divided by y is %d\n", (x % y));
    printf ("the sum of x and y is %d\n", (x + y));
    printf ("y minus x is %d\n", (y - x));
    printf ("negative y is %d\n", (y * -1));
    printf ("increment ++x is %d\n", ++x);
    printf ("increment y++ is %d\n", y++);
    printf ("decrement x-- is %d\n", x--);
    printf ("decrement --y is %d\n", --y);
    printf ("1 + 2 * (3 + y) + 5 equals %d\n", (1 + 2 * (3 + y) + 5));

    return 0;
}