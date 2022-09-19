#include "main.h"

/**
 *print_rev - prints string in reverse
 *@s: the string
 *
 *return: nothing
 */
void print_rev(char *s)
{
	int len;
	int i;
	char a;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	for (i = len; i >= 0; i--)
	{
		a = s[i];
		if (a != '\0')
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
