#include "main.h"
#include <stdio.h>
/**
 *main - print out a string of words terminal arguments.
 *@argc: the total number of arguments.
 *@argv: this hild the strings the terminal.
 *
 *Return: This returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	return (0);
}
