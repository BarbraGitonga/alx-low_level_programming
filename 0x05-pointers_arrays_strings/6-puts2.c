#include "main.h"

/**
 *puts2 - prints every other world in a string
 *@str: string to be printed
 *
 *Return: nothing
 */
void puts2(char *str)
{
	int i, len, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i + 1;
	}
	for (j = 0; j <= len; j = j + 2)
	{
		char a;

		a = str[j];
		if (a != '\0')
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
