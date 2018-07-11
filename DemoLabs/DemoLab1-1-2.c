#include <stdio.h>

int main (void)
{
	int integer = 1;
	float singlePrecision = 2.2;
	double doublePrecision = 3.3;
	char singleChar = '$';
	char singleChar2 = 33;

    printf("size of int is %d \n", sizeof(integer));
    //it doesn't matter what the value of 'integer' is because you are only asking the size, same for other variables
    printf("size of float is %d \n", sizeof(singlePrecision));
    printf("size of double is %d \n", sizeof(doublePrecision));
    printf("size of char 1 is %d \n", sizeof(singleChar));
    printf("size of char 2 is %d \n", sizeof(singleChar2));

	return 0;
}