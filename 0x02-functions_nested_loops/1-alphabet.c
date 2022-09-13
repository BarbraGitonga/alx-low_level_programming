#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints out alphabets in lower case
 *
 * Return: always zero
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
