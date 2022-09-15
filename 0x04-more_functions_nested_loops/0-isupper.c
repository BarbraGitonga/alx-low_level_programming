#include "main.h"

/**
 * _isupper - detects uppercase letters.
 * @c: character letters.
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
