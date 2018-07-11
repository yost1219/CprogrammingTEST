/*
Author: Christopher Yost
Project: Lab 3B
Date: 11 July 2018

Objectives:
i.      Declare and zeroize a char array with a dimension of 256
ii.     Assign your chosen phrase to the leading elements of that array
iii.    Explicitly verify your string is nul-terminated
iv.     Print your string
*/




#include <stdio.h>
#include <string.h> //enables use of "strlen" function

int main (void)
{
    //i.
    char array [256] = {0};
    
    //ii.
    array [0] = 71; //G
    array [1] = 111; //o
    array [2] = 117; //u
    array [3] = 112; //p
    array [4] = 105; //i
    
    //iii.
    array [5] = '\0'; //explicitly null-terminated

    //iv.
    printf ("My favorite word is %s. \n", array); //or just printf ("%s \n", array)
    printf ("My string length is %d. \n", strlen(array));

    //The next line does parts i. and ii. in one line
    char array2 [256] = {"Goupi"};
    printf ("My favorite word is %s. \n", array2);
    printf ("My string length is %d. \n", strlen(array2));

    //This does the same thing
    char array3 [256] = "Goupi";
    printf ("My favorite word is %s. \n", array3);
    printf ("My string length is %d. \n", strlen(array3));

    return 0;
}