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

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
