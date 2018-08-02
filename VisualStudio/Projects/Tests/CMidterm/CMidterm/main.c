//main.c

/*
Author: Yost
Title: C Midterm
Date: 20 July 2018
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////// MIDTERM 2018-2 ///////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The requirement for this lab is to define all of the MidtermFunctions.h functions as declared.
// The comment blocks for each function should clearly indicate what the requirements are for the function.
// There are a variety of appropriate solutions for many of these functions.
// MidtermTestCodev1.c has been written to test all of the functions both individually and as a whole.
// This header definition file includes the instructor solution for the header functions.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//===================================================================
//							Function 1
//===================================================================

/*
* FUNCTION:   int is_it_alphabet(signed char inputChar);
*
* ARGUMENTS:  inputChar is a single signed character that represents a single character
*                 that is tested as an alphabet letter.
*
* RETURNS:	  1 if inputChar is an alphabet character
*             0 if inputChar is not an alphabet character
*
* NOTES:      This function should not care if inputChar is uppercase or lowercase
*             The return value represents a boolean response without using a 'bool' data type
*             The letters a through z and A through Z represent "alphabet letters" for
*                 the purposes of this assignment.
*/

//passed 255 of 255 :D
int is_it_alphabet(signed char inputChar)
{
	if ((inputChar > 64 && inputChar < 91) || (inputChar > 96 && inputChar < 123)) //if inputChar is A-Z (accd to ASCII table) or a-z (also, accd to ASCII table)
	{
		return 1;
	}
	else //if inputChar is not a uppercase or lowercase letter
	{
	return 0;
	}
}





//===================================================================
//							Function 2
//===================================================================

/*
* FUNCTION:   int reverse_case(char * inputString, char * outputBuff, int inputPosition);
*
* ARGUMENTS:  inputString is expected to be a pointer to a null-terminated string
*             outputBuff is expected to be a pointer to a char array which will store the new string
*             inputPosition is the element of inputString
*
* RETURNS:	  Number of characters that were case reversed
*             -1 either inputString is NULL
*             -2 if inputPosition is unrealistic
*                 Examples:
*                     inputPosition is negative
*                     inputPosition is out of the array's scope
*
* NOTES:	This function's purpose is to take inputString, determine what are alphabetic characters, and reverse their case.
*			So capital letters become lowercase. Lowercase becomes uppercase.
*
*/


//passed 16 out of 16 :D
int reverse_case(char * inputString, char * outputBuff, int inputPosition)
{
	int i = inputPosition;
	int j = 0;
	int count = 0;
	clear_a_buffer(outputBuff, sizeof(outputBuff) / sizeof(outputBuff[0]));

	if (!inputString) //if inputString is NULL then return -1
	{
		return -1;
	}

	int length = 0;
	length = strlen(inputString);

	if ((inputPosition < 0) || (inputPosition > length)) //if inputPosition is negative or out of scope of array then return -2
	{
		return -2;
	}
	while (i < length) //while the input is non NULL
	{
		if (is_it_alphabet(inputString[i])) //if input is a lowercase or uppercase letter
		{
			if ((inputString[i] > 64) && (inputString[i] < 91)) //if input is from A to Z then add 32 to its ASCII value
			{
				outputBuff[j] = (inputString[i] + 32);

			}
			else  //if input is from a to z then subtract 32 from its ASCII value
			{
				outputBuff[j] = (inputString[i] - 32);

			}
			count++;
		}
		else
		{
			outputBuff[j] = inputString[i];
		}
		j++;
		i++;
	}

	return count;
}




/*
{
	int i = 0;
	int length = 0;

	if (!inputString) //return -1 on NULL input
	{
		return -1;
	}
	if ((inputPosition < 0) || (inputPosition > strlen(inputString))) //return -2 if inputPosition is negative or greater than array's scope (last position of array)
	{
		return -2;
	}



	while (is_it_alphabet(inputString[i])) //while input is a letter
	{
		if ((inputString[i] > 64) && (inputString[i] < 91)) //if input is a capital letter
		{
			inputString[i] = (inputString[i] + 32); //adds 32 to the ASCII value of the letter to make it lowercase
		}
		else //if input is a lowercase letter
		{
			inputString[i] = (inputString[i] - 32); //subtracts 32 from the ASCII value of the letter to make it a capital
		}
		i++;
	}

	return 0;
}
*/



/*
	for (i = 0; i < sizeof(inputString); i++) //iterate from inputString[0] to inputString[sizeof(inputString)] (that is the last value of inputString)
	{
		if (is_it_alphabet(inputString[i])) //if the character is a letter, change the case (upper to lower, and lower to upper)
		{
			tempString[i] = inputString[i];

			tempString[sizeof(inputString)] = '\0'; //ensures string is null terminated
		}
		else //don't do anything if the input character is not a letter
		{
			return 0;
		}
		return 0;
	}
*/










//===================================================================
//							Function 3
//===================================================================

/*
* FUNCTION:   int remove_char(char * sentenceString, char userInput);
*
* ARGUMENTS:  senteceString is expected to be a pointer to a null-terminated string
*			  userInput is expected to be a char to be removed from sentenceString
*
* RETURNS:	  Number of characters that were removed
*             -1 if sentenceString is NULL
-2 if the character can't be found
-3 if userInput is invalid:
NULL
Invalid Input
*
* NOTES:      The purpose of this function is to scan sentenceString for userInput (char)... and delete ALL instances of that char IN PLACE (meaning do not correct spacing)
Then return the number of characters that were removed.
*/

//passed 20 of 20 :D
int remove_char(char * sentenceString, char userInput)
{
	int count = 0; // Number of characters removed
	int i = 0;

	if (!sentenceString) //if sentenceString is NULL then return -1
	{
		return -1;
	}
	if ((!userInput) || (userInput > 255)) //if userInput is NULL or not a character then return -2
	{
		return -2;
	}

	while (sentenceString[i]) //while the value is non-zero
	{
		if (sentenceString[i] == userInput) //if array value is the same as userInput
		{
			count++; //counter goes up	
			memmove(&sentenceString[i], &sentenceString[i + 1], strlen(sentenceString) - i); //array value is removed and rest of array shifts left one space
		}
		else //if array value is not the same as userInput
		{
			i++; //increment
		}
	}
	if (!count) //if no characters removed then return -2
	{
		return -2;
	}
	else //if count != 0 then return count
	{
		return count;
	}
}

int remove_non_letters(char * sentenceString)
{
	if (!sentenceString) //if sentenceString is NULL
	{
		return -1;
	}
	int count = 0;
	int i = 0;

	while (sentenceString[i]) //if sentenceString entry is not NULL
	{
		if (!(is_it_alphabet(sentenceString[i]))) //if entry is not letter
		{
			count++;
			memmove(&sentenceString[i], &sentenceString[i + 1], strlen(sentenceString) - i);
		}
		else //if is letter
		{
			i++;
		}
	}
	return count;
}









//===================================================================
//							Function 4
//===================================================================

/*
* FUNCTION:   int decode_string(char * inputString, unsigned char key);
*
* ARGUMENTS:  inputString is expected to be a pointer to a null-terminated string that needs decoded
*			  key is a single-byte that must be xor'd with (read below)
*
* RETURNS:	  Number of characters that were decoded
*             -1 if inputString is NULL
*			  -2 if key is invalid
*
* NOTES:      This function will take input from inputString and decode it using the unsigned char key.
*			  The string has been pseudo-encryped (poorly) with a single byte XOR, which you will be required to undo.
*			  Key is the byte that the buffer was XOR'd against
*
*
*/

//passed 12 of 12 :D
int decode_string(char * inputString, unsigned char key, int dataSize)
{
	int count = 0;
	int i = 0;
	

	if (!inputString) //if inputString is NULL
	{
		return -1;
	}
	if ((key <= 0) || (key > 255)) //if key is not a character
	{
		return -2;
	}
	while (i < dataSize) //if inputString is not NULL then XOR ( ^ ) the input with the key to decode
	{
		inputString[i] = inputString[i] ^ key;
		i++;
		count++;
	}
	return count; //returns number of characters decoded
}








//===================================================================
//							Function 5
//===================================================================

/*
* FUNCTION:   int clear_a_buffer(char * fullBuff, int buffSize);
*
* ARGUMENTS:  fullBuff is expected to be a pointer to a char array
*             buffSize represents the dimension of fullBuff[]
*
* RETURNS:	  0 on success
*             -1 if fullBuff is NULL
*             -2 if buffSize is unrealistic
*                 Examples:
*                     buffSize is zero
*                     buffSize is negative
*
* NOTES:      This function 'zeroizes' all of the elements of fullBuff[buffSize]
*             fullBuff does not necessarily need to be a null-terminated string since the array's
*                 dimension is passed in as an argument (for safety)
*/

//passed 7 of 7 :D
int clear_a_buffer(char * fullBuff, int buffSize)
{
	int i = 0;

	if (!fullBuff) //if fullBuff is NULL then return -1
	{
		return -1;
	}
	if (buffSize <= 0) //if buffSize is <= 0  then return -2
	{
		return -2;
	}
	while (fullBuff[i]) //if array value is nonzero
	{
		fullBuff[i] = 0;
		i++;
	}
	return 0;
}
