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

	len = _strlen(s);
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
