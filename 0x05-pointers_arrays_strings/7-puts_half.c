#include "main.h"

/**
 *puts_half - prints half of  string
 *@str: string to print half of
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len, j, len_2;
	char a;

	for (i = 0; str[i] != '\n'; i++)
	{
		len = i;
	}
	len_2 = len / 2;
	for (j = len_2; j <= len; j++)
	{
		if (j != '\0')
		{
			a = str[j];
			_putchar(a);
		}
	}
	_putchar('\n');
}
