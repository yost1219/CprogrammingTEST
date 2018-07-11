# include <stdio.h>

int main(void)
{
    // <data type> <variable name> [<dimension>] = {<init. value 1>, <init. value 2>, ...};
    int array1 [6] = {1, 2, 4, 5, 8, 9}; //explicit array
    int array2 [] = {5, 2, 3, 7, 9, 1}; //implicit array
    int array3 [6] = {0}; //zeroize: all entries are set to 0
    int array4 [6] = {1, 2}; //partial zeroize: few entries are defined, rest are set to 0
    
    int alpha = array1 [0]; //initializes the value of the variable "alpha" to the value of the 0th index of array1, in this case 1

    int computerScienceCourses [5] = {1003, 1023, 1033, 1063, 1073};
    float studentGPAs [7] = {2.7, 3.1, 2.9, 4.0, 3.9, 2.89, 3.55};
    char cardinalDirections [4] = {'N', 'E', 'S', 'W'};
    char catchPhrase [10] = {76, 101, 103, 101, 111, 0, 0, 0, 0, 0};

    printf ("%d \n", alpha);
    printf ("Array 1 contains the following values: %d, %d, %d, %d, %d, %d \n", array1 [0], array1 [1], array1 [2], array1 [3], array1 [4], array1 [5]);

    return 0;
}