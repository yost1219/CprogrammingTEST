#include <stdio.h>

int main (void)
{
    int age [13] = {0};
    age [0] = 28;
    age [1] = 30;
    age [2] = 33;
    age [3] = 28;
    age [4] = 32;
    age [5] = 29;
    age [6] = 36;
    age [7] = 19;
    age [8] = 26;
    age [9] = 23;
    age [10] = 21;
    age [11] = 34;
    age [12] = 24;

    char quote [] = {"The\n only\n thing\n necessary\n for\n the\n triumph\n of\n evil\n is\n for\n good\n men\n to\n do\n nothing.\n ~Edmund Burke"};

    printf ("The instructor's age is %d. \n", age [0]);
    printf ("The students' ages are %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, and %d. \n", 
        age [1], age [2], age [3], age [4], age [5], age [6], age [7], age [8], age [9], age [10], age [11], age [12]);

    printf ("The quote is: \n %s \n", quote);

    return 0;
}