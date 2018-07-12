// declare/zeroize array, assign fields in array, display/print array

#include <stdio.h>

int main (void)
{
    //Declare and zeroize a char array with sufficient dimension to store your favorite word and the nul character
    char myFavWord [9] = {0}; //can change to char myFavWord [9] = {"Tsundere"} and not null terminate and you will get the correct output

    //Assign your favorite word to the leading elements of that array
    myFavWord [0] = 84;
    myFavWord [1] = 115;
    myFavWord [2] = 117;
    myFavWord [3] = 110;
    myFavWord [4] = 100;
    myFavWord [5] = 101;
    myFavWord [6] = 114;
    myFavWord [7] = 101;

    //Ensure your string is null-terminated by manually setting the last element to 0
    myFavWord [8] = 0;

    //Print your null-terminated string
    printf ("My favorite word is %s. \n", myFavWord);

    return 0;
}