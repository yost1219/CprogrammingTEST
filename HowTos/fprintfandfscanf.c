/*

fprintf(stdout, " ", variable)

Conversion Character Examples:

//////// VARIABLE INITIALIZATION ////////
int theAnswer = 42;            // Life, universe, & everything
float pi = 3.141592;            // Pi
double posSqrtTwo = 1.41421356237;    // Positive square root of 2
char questionMark = 63;        // A question mark
char nickName[] = {“Makleford\0”};    // A nick name

//////// FPRINTF STATEMENTS /////////////
fprintf(stdout, “The answer is %d. \n”, theAnswer);
fprintf(stdout, “Pi is approximately equal to %f. \n”, pi);
fprintf(stdout, “The square root of 2 is %f. \n”, posSqrtTwo);
fprintf(stdout, “Who is %s%c \n”, nickName, questionMark);
fprintf(stdout, “%s is. \n”, nickName);

---------------------------------------------------------------------------------------------------------

fscanf(stdin, " ", &variable) *WARNING* be sure to specify scan length/width as to not overflow buffer

/////////////////////////////////////////
//////// BASIC FSCANF STATEMENTS ////////
/////////////////////////////////////////
fscanf(stdin, “%d”, &theAnswer);    // Reads an integer from stdin
fscanf(stdin, “%f”, &pi);        // Reads a float from stdin
fscanf(stdin, “%lf”, &posSqrtTwo);    // Reads a double from stdin
fscanf(stdin, “%c”, &answerNum1);     // Reads a character from stdin

/////// BASIC SCANF STRING INPUT ////////
char nickName[20] = {0};
fscanf(stdin, “%s”, nickName);    // Still dangerous
fscanf(stdin, “%19s”, nickName);    // Safer string read from stdin

*/