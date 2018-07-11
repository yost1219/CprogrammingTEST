#include <stdio.h>

int main (void)
{
    int i = 0;
    int myIntArray2;
    int myIntArray [10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    float myFloatArray [5] = {1, 2, 3, 4, 5};
    char myCharArray [256] = {0};

    printf ("%d \n", myIntArray [2]);
    printf ("%f \n", myFloatArray [2]);
    printf ("%c \n", myCharArray [2]);

    while (i < 10)
    {
        int myIntArray2 [10] = {0};
        myIntArray [i] = ((i + 1) * 10);
        break;
    }

    printf ("%d \n", myIntArray2 [2]);

    return 0;
}