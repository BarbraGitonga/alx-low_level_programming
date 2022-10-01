#include <stdlib.h>
#include <stdio.h>
/**
 *main - muktiplues two number sin the terminal.
 *@argc: contaings number of arguments.
 *@argv: string fo arguments.
 *Return: 0 if multiplied nd 1 if there is an error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d \n", atoi(argv[1]) * atoi(argv[2]));
	}
	else if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}
	return (0);
}
