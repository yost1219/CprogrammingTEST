/*

specifier   scanf() use
i           reads decimal, octal, hex integers
f           converts input to float
lf          converts input to double
c           reads next character which may be a space
s           reads string and appends with term \0, may match input against a "scanlist"

Basic Syntax Examples

//////////////////////////////////
///// BASIC SCANF STATEMENTS /////
//////////////////////////////////

scanf("%d", &theAnswer);            // Reads an integer from stdin
scanf("%f", &pi);                   // Reads a float from stdin
scanf("%lf", &posSqrtTwo);          // Reads a double from stdin
scanf("%c", &answerNum1);           // Reads a char from stdin

 ///// BASIC SCANF STRING INPUT /////
 char nickname[20] = {0};
 scanf("%s", nickName);             // Dangerously reads string from stdin
 scanf("%19s", nickname);           // Safer string read from stdin, safer because it only reads until last input of array which prevents buffer overflow

 -------------------------------------------------------------------------------

 Conversion Character Explanation

int scanf(const char *format, argument-1, argument-2...)

///// INITIALIZATION /////
int num = 0;
char letter = 0;

///// SCANF STATEMENT /////
scanf("%d%c", &num, &letter);

// %d%c  |  is the format
// &num, &letter  |  are the arguments
// &num == %d
// &letter == %c

Explanation 2

////////// INITIALIZATION //////////
int hours = 0;
int minutes = 0;
int seconds = 0;

////////// SCANF STATEMENTS //////////
scanf("%d%*c%d%*c%d", &hours, &minutes, &seconds);

NOTE: The %*c conversion specification tells scanf to read char(s) 
in between integers but doesn't assign it to a variable.

// First %d == &hours
// Second %d == &minutes
// Third %d == &seconds

/////////////////////////////////////////
/////////// SCANF STATEMENTS ////////////
/////////////////////////////////////////

scanf(“%d,%d”, &num1, &num2);    // Uses comma as delimiter
scanf(“%3f”, &GPA);              // Only takes three inputs e.g., 3.4
scanf(“*%lf”, &posSqrtTwo);      // Waits for asterisk before reading because you specified the * in front of %lf
scanf(“%[abcd]c”, &ansNum1);     // Will only read an a, b, c, or d
scanf(“%[A-Z]c”, &capsChar);     // Will only read a capital letter
scanf(“%[A-z]c”, &rngOfChar);    // Only chars of decimal value 65–122
scanf(“%32[01]s”, binaryStr);    // Stops reading at first non 0 or 1, will read up to 32 0s or 1s
scanf(“%64[^e\n]s”, Gadsby);     // Stops reading at first e or newline