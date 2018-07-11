#include <stdio.h>

int main (void)
{
    int input = 0;
    printf ("Type something already: ");
    input = getchar();
    printf ("Did you mean this?: ");
    putchar (input + 1);
    printf ("\n");
    printf ("Or perhaps this?: ");
    putchar (input - 1);
    printf ("\n");

    return 0;
}