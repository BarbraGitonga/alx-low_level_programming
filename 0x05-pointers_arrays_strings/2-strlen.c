#include "main.h"

/**
 *_strlen - returns length of a string
 *@s: sting to count length
 *
 *Return: length of string
 */
int _strlen(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] != " ")
		{
			len = i;
		}
		else
		{
			return (0);
		}
	}
	return (len + 1);
}
