#include "main.h"

/**
 *print_diagonal - prints diagonal lines
 *@n: number of lines
 *Return: void
 */
void print_diagonal(int n);
{
	if (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

