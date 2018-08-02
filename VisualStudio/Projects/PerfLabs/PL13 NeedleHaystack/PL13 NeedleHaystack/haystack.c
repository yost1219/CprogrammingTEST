/*
Author: Yost
Title: PL13 NeedleHaystack
Date: 31 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int haystack_needle(char *haystack, char *needle, char *buffer);

int main()
{
	char string[] = "This is my brand new sentence";
	char substring[] = " brand new";

	char *buffer = malloc(strlen(string) + 1); //create char buffer large enough to hold string plus nul-term

	if (buffer != NULL) //ensure buffer was created
	{
		printf("Buffer created.\n");
	}
	else
	{
		printf("You done messed up.  No buffer created.\n");
		return -1;
	}

	haystack_needle(string, substring, buffer); //run prototyped function to remove needle from haystack

	free(buffer); //free up memory from buffer

	printf("Modified string is: %s\n", string); //print mod'd string

	while (1);
	return 0;
}

int haystack_needle(char *haystack, char *needle, char *buffer)
{
	int needleLength = strlen(needle);
	char *mark_position = 0;

	mark_position = strstr(haystack, needle); //use strstr() to find needle in haystack, returns pointer to needle position called "mark_position"

	strcpy(buffer, mark_position + needleLength); //use strcpy() to store the needle into the buffer w/o using variable "needle"

	memmove(mark_position, buffer, strlen(buffer) + 1); //use memmove to overwrite string with needle removed

	return 0;
}





/*
PERFORMANCE LAB 1
Follow instructions below!
The basis of this lab is simple... allocate a section of memory that will
hold a string (your first name). Print the name out, then cleanup the memory and exit.
*/

/*
int main(void)
{
	//TODO: Create a string containing your first name
	char string[5] = { "Yost" };

	//TODO: Get the size of this string
	int stringSize = sizeof(string) / sizeof(string[0]);

	//TODO: Declare a char pointer *str
	char *string_ptr1;
	char *string_ptr2;

	//TODO: Allocate a section of memory of type char
	//TODO: Set the size of this allocated space to 40 bytes
	//TODO: Asign the address of this allocated space to the pointer value
	string_ptr1 = (char *)malloc(10 * sizeof(int));

	//TODO: Copy your name into the allocated space using strcpy()
	strcpy(string_ptr1, string);

	//TODO: Print out your name that is stored in the allocated memory space
	printf("My name is: %s", string_ptr1);

	//TODO: Reallocate the memory space using the size of the string rather than 40 bytes
	string_ptr2 = (char *)malloc(sizeof(string));

	//TODO: Print out the string again
	printf("My name is: %s", string_ptr2);

	while (1);
	return 0;


}
*/