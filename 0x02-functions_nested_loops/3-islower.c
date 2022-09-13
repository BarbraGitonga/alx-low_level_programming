#include<stdio.h>

/**
 * _islower - checks if code is lower
 * @c -argument to be considered
 * Return: zero or one
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
