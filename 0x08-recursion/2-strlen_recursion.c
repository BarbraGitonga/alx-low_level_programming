#include "main.h"
/**
 *_strlen_recursion - length of string
 *@s: string to be reversed
 *Return: length
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	else if (*s != '\0')
	{
		i = (1 + _strlen_recursion(s + 1));
	}
	return (i);
}
