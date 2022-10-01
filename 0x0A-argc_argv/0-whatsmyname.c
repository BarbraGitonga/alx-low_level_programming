#include "main.h"
#include<stdio.h>
/**
 *main - prints the name of the program
 *
 *@argc: this is the value of the total number of elements in a string
 *@argv: this is holds the strings
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
