/*
Author: Yost
Title: Lab 5A
Date: 13 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



int main (void)
{
    double a = 0, b = 0, c = 0;
    double rad = 57.2958;

    printf ("Hypotenuse Calculator 3001!\n");
    printf ("What are the two known side lengths of the right triangle?\n");
    scanf ("%lf%lf", &a, &b);

    if ((a <= 0) || (b <= 0))
    {
        printf ("You're killing me, Smalls.\nYou must enter positive interger values.\n");
    }
    else
    {
        c = sqrt((a * a) + (b * b));
        printf ("The hypotenuse is %lf!\n", c);
        printf ("The angles of the triangle are %lf degrees and %lf degrees and, obviously, 90 degrees.\n", ((atan (a / b)) * rad), ((atan (b / a)) * rad));
        printf ("Now, give me a cookie!\n");
    }

    return 0;

}