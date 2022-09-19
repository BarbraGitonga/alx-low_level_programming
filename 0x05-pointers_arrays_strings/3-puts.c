#include "main.h"

/**
 *_puts - prints out characters
 *@str: string of words
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;
	char letter;

	for (i = 0; str[i] != '\0'; i++)
	{
		letter = str[i];
		_putchar(letter);
	}
	_putchar('\n');
}
