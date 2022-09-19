#include "main.h"

/**
 *puts_half - prints half of  string
 *@str: string to print half of
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len, j, n;
	char a;

	for (i = 0; str[i] != '\n'; i++)
	{
		len = i;
	}
	if (len % 2 == 0)
	{
		for (j = len / 2; str[j] != '\0'; j++)
		{
			a = str[j];
			_putchar(a);
		}
	}
	else
	{
		for (n = (len -1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}

	_putchar('\n');
}
