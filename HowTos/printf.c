/*
conversion characters for printf
int = d, i
float/double = f
char/int = c
string = s
pointer = p
unsigned int = x, X
*/

#include <stdio.h>

int main (void)
{

//////// Variable Initialization ////////
int theAnswer = 42;                      // Life, universe, and everything
float pi = 3.141592;                     // Pi
double posSqrtTwo = 1.41421356237;       // Pos square root of 2
char questionMark = 63;                  // A question mark
char *nickName[] = {"MakleFord\0"};      // A nickname

//////// PRINTF STATEMENTS ////////
printf("The answer is %d. \n", theAnswer);
printf("Pi is approx equal to %f. \n", pi);
printf("The positive square root of 2 is %f. \n", posSqrtTwo);
printf("Who is %s%c \n", nickName, questionMark); //prints the string first then the ascii character assigned to 63
printf("%s is. \n", nickName);

/*
//////// EXPECTED OUTPUT ////////
The answer is 42.
Pi is approx equal to 3.141592.
The positive square root of 2 is 1.414214.
Who is Makleford?
Makleford is.
*/

return 0;
}

/* you can also print expressions:

int printf(const char *format, expression-1, expression-2...)

//////// INITIALIZATION ////////
int num = 3;

//////// PRINTF STATEMENT ////////
printf("The square of %d is %d. \n", num, num * num);

//////// EXPECTED OUTPUT ////////
The square of 3 is 9.

can also do precision numbers/strings:

%[flags][field width][.precision]specifier

float someNum = 12.3456;                    // Var used as comparison

printf("%f", someNum);                      // 12.345600, default for %f is %.6f
printf("%.0f", someNum);                    // 12
printf("%.2f", someNum);                    // 12.35
printf("%.3f", someNum);                    // 12.346
printf("%.6f", someNum);                    // 12.345600
printf("%.20f", someNum);                   // 12.34560012817382800000*

%[flags][field width][.precision]specifier

char myStr[] = {"Hello world!"};            // Nul terminated string

printf("%s", myStr);                        // Hello world!
printf("%.12s", myStr);                     // Hello world!
printf("%.11s", myStr);                     // Hello world
printf("%.5s", myStr);                      // Hello
printf("%.0s", myStr);                      //
printf("%.1000s", myStr);                   // Hello world!

------------------------------------------------------------------------------------------------------

field width:

%[flags][field width][.precision]specifier

float someNum = 12.3456;                    // Var used as comparison

printf("%f", someNum);                     // 12.345600
printf("%0f", someNum);                    // 12.345600
printf("%2f", someNum);                    // 12.345600
printf("%4f", someNum);                    // 12.346000
printf("%8f", someNum);                    // 12.345600
printf("%16f", someNum);                   //         12.345600                (8 positions)
printf("%25f", someNum);                   //                  12.345600       (17 positions)

%[flags][field width][.precision]specifier

char myStr[] = {"Hello world!"};            // Nul terminated string

printf("%s", myStr);                        // Hello world!
printf("%0s", myStr);                       // Hello world!
printf("%2s", myStr);                       // Hello world!
printf("%4s", myStr);                       // Hello world!
printf("%8s", myStr);                       // Hello world!
printf("%16s", myStr);                      //      Hello World!            (5 positions)
printf("%26s", myStr);                      //                Hello world!  (15 positions)

---------------------------------------------------------------------------------------------------
Flags

%[flags][field width][.precision]specifier
Flags consist of one or more of the following characters:

    +                   Prefixed to positive numbers
    ' ' (space)         Prefixed to positive numbers
    -                   Output is left-justified within field width
    0                   Field is filled with leading zeros
    #                   Alternate conversion rules

float someNum = 12.3456;                    // Var used as comparison

printf("%f", someNum);                     // 12.345600
printf("%f", someNum * -1.0);              // -12.345600
printf("%+f", someNum);                    // +12.345600
printf("%+f", someNum * -1.0);             // -12.346000
printf("% f", someNum);                    //  12.345600
printf("% f", someNum * -1.0);             // -12.345600    
printf("%-f", someNum);                    // 12.345600  
printf("%-f", someNum * -1.0);             // -12.345600  
printf("%0f", someNum);                    // 12.345600  
printf("%016f", someNum);                  // 000000012.345600

*/
