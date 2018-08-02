// getc(stdin) and putc(input, stout), receiving user input and displaying it back (output)


#include <stdio.h>

int main (void)
{
    int input = 0;
    printf ("Gimme your input: ");
    input = getc(stdin);
    printf ("This is what I heard: ");
    putc(input, stdout);
    printf ("\n");

    return 0;
    }