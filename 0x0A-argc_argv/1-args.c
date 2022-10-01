#include "main.h"
#include <stdio.h>
/**
 *main - counts number of argument in terminal
 *@argc: number of arguments in terminal
 *@argv: strings in the argument
 *Return: always 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d \n", argc-1);
	return (0);
}
