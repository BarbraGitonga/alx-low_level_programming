#include<stdio.h>

/**
 * main - rntry point of code
 *
 * Return: always return a 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 8 && j == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

