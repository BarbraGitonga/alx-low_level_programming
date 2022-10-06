#include "main.h"

/**
 *_strlen - returns length of a string
 *@s: sting to count length
 *
 *Return: length of string
 */
int _strlen(char *s)
{
	int i, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] == '\0')
		{
			return (0);
		}
		else
		{
			len = i;
		}
	}
	return (len + 1);
}
