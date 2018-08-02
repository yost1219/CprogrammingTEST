/*
Author: Yost
Title: Chapter 5 Quiz
Date: 13 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main (void)
{
    int x = 0, y = 0;

    //arithmetic operators
    y = 4;
    //printf ("1 + 2 * (3 + y) + 5 equals %d\n", (1 + 2 * (3 + y) + 5));
    printf ("5 * y - 3 + (2 + 1) equals %d\n", (5 * y - 3 + (2 + 1)));

    //relational operators
    x = 2, y = 6;
    //printf ("x != y != 3 >= x: %d\n", x != y != 3 >= x);
    printf ("x = y <= 3 >= y equals %d\n", x = y <= 3 >= y);

    //assignment operators
    x = 9, y = 3;
    //printf ("(y %= y) || (x /= x--) is: %d\n", ((y %= y) || (x /= x--)));
    printf ("(y %= --y) && (x /= ++y) is: %d\n", ((y %= --y) && (x /= ++y)));

    return 0;
}