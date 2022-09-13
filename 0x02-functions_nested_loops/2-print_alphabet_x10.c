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
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		putchar('\n');
		a++;
	}
}

