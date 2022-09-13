#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase ten times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a <= 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		a++;
	}
	_putchar('\n');
}

