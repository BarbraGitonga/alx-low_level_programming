#include<stdio.h>

/**
 *_isalpha - a funtcion that return alphabets
 *@c: the argument to be considered
 *Return: always zero
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
