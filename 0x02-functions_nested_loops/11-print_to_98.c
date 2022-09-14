#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - prints numbers to 98
 *@n: argument
 *Return: string of numbers
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if(i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d", i);
			}

		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		int j;

		for (j = n; j >= 98; j--)
		{
			if (j != 98)
			{
				printf("%d, ", j);
			}
			else if (j == 98)
			{
				printf("%d", j);
			}
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d", n);
		_putchar('\n');
	}
}
