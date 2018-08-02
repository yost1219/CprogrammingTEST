/*
Author: Yost
Project: Demo for 4.6
Date: 12 July 2018
*/

#include <stdio.h>

int main (void)
{
    printf ("%f \n", 1.2);  //1.200000
    printf ("%+8.4f \n", -1.798);  // -1.7980 (1 leading space)
    printf("% 7.2f \n", 0.987654321);  //   0.99 (3 leading spaces)
    printf("%-6.1f is yours \n", 13.37); //13.4   is yours (2 + 1 spaces between)
    printf("Yours is %05.2f \n", 1.2345);  //Yours is 01.23
    printf("%s \n", "Hello World!\0");  //Hello World!
    printf("%9.5s \n", "Hello world!\0");  //    Hello (4 leading spaces)
    printf("%016.11s \n", "Hello world!\0");  //     Hello world (5 leading spaces)

    return 0;
}