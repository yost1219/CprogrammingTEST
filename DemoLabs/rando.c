#define _CRT_NO_SECURE_WARNINGS 1
#include <stdio.h>

int main (void)
{
    char array[100] = {0}; 

	printf ("Yo, tell me what you want, what you really, really want: \n");
    scanf ("%99[^\n]s \n", &array); //looks at the first 99 characters entered, 
    //stopping at the first capital letter or new line, and stores it in array
    if (array[0] = 'a')
    { 
        printf ("I'll tell ya what I want, what I really, really want. \n");
    }

    else 
    {
    printf ("%s \n", array); //spits out whatever it stored in array
    }
 
    return 0;
}