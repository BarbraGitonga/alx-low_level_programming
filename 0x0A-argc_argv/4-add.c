#include <stdio.h>

/**
 *main - adds numbers
 *@argc: number of arguments
 *@argv: string of arguments
 *Return: 0 or 1
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2, sum = 0;

	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (!isdigit(argv[num1][num2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[num1]);
	}
	printf("%d\n", sum);
	return (0);
}
