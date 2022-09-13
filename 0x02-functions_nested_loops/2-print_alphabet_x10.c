#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase ten times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}

