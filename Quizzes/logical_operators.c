/*
Author: Yost
Title: Logical Operators Quiz
Date: 13 July 2018
*/

#include <stdio.h>

int main (void)
{
    int x = 99;
    int y = 0;

    printf ("x && y is %d.\n", x && y);
    printf ("y || x is %d.\n", y || x);
    printf ("!y is %d.\n", !y);
    printf ("y && 0 is %d.\n", y && 0);
    printf ("x || 42 is %d.\n", x || 42);
    printf ("!x is %d.\n", !x);
    printf ("x && x is %d.\n", x && x);
    printf ("y || y is %d.\n", y || y);
    printf ("!1 is %d.\n", !1);
    printf ("1 && 1 is %d.\n", 1 && 1);
    printf ("(0 && 1) || (2 && 3) is %d.\n", (0 && 1) || (2 && 3));
    
    return 0;
}