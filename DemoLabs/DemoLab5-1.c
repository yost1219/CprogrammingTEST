/*
Author: Yost
Title: Pythagorean Theorem Lab
Date: 13 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

/*
int main(void)
{
	double legA = 0;
	double legB = 0;
	double hypotenuse = 0;

	printf("Input the length of leg A and leg B for your right triangle. \n");
	printf("Separate the two lengths with a space.  (e.g., 1.3 9.7) \n");
	//_flushall();
	scanf("%lf %lf", &legA, &legB);

	hypotenuse = sqrt((legA*legA) + (legB*legB));
	printf("Your hypotenuse is %.2f. \n", hypotenuse);

	getchar();
	return 0;
}
*/


int main (void)
{
    double a = 0, b = 0, c = 0;
    double rad = 57.2958;

    printf ("Hypotenuse Calculator 3000!\n");
    printf ("What are the two known side lengths of the right triangle?\n");
    scanf ("%lf%lf", &a, &b);
    c = sqrt((a * a) + (b * b));
    printf ("The hypotenuse is %lf!  Isn't Pythagoras amazing!\n", c);
    printf ("The two angles are %lf degrees and %lf degrees.\n", ((atan (a / b)) * rad), ((atan (b / a)) * rad));
    printf ("Now, give me a cookie!\n");
    
    return 0;
}

