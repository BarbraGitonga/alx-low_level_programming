#include "main.h"

/**
 * times_table - prints out the times table upto the 9th table.
 * Return: void
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (prod == 0 && i == 0)
			{
				_putchar(prod + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (i > 0 && prod == 0)
			{
				_putchar(prod + '0');
			}
			else if (((prod / 10) == 0) )
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
