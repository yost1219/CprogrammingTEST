// decl/init array, print specific cell/position of array

#include <stdio.h>

int main (void)
{
    int x;
    int myIntArray [10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    float myFloatArray [5] = {1, 2, 3, 4, 5};
    char myCharArray [256] = {0};

    printf ("%d \n", myIntArray [2]);
    printf ("%f \n", myFloatArray [2]);
    printf ("%c \n", myCharArray [2]);

    myIntArray [0] = 10;
    myIntArray [1] = 20;
    myIntArray [2] = 30;
    myIntArray [3] = 40;
    myIntArray [4] = 50;
    myIntArray [5] = 60;
    myIntArray [6] = 70;
    myIntArray [7] = 80;
    myIntArray [8] = 90;
    myIntArray [9] = 100;

    myFloatArray [0] = 0;
    myFloatArray [1] = 1.1;
    myFloatArray [2] = 2.2;
    myFloatArray [3] = 3.3;
    myFloatArray [4] = 4.4;
    myFloatArray [5] = 5.5;
    myFloatArray [6] = 6.6;
    myFloatArray [7] = 7.7;
    myFloatArray [8] = 8.8;
    myFloatArray [9] = 9.9;

    myCharArray [0] = 'Y';
    myCharArray [1] = 'O';
    myCharArray [2] = 'S';
    myCharArray [3] = 'T';
    
    printf ("%d \n", myIntArray [2]);
    printf ("%f \n", myFloatArray [2]);
    printf ("%c \n", myCharArray [2]);

    return 0;
}