#include "main.h"
#include<stdio.h>

/**
 * times_tables - prints timetables upto the 9th
 *@void: does noot take argument
 * Return: always zero
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 0)
			{
				_putchar('0');
			}
			else if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if ((prod < 10) && (j != 0)
					{
					_putchar(' ');
					_putchar((prod % 10) + '0');
					}
		}
	_putchar('\n');
	}
}
