#include "main.h"
#include<stdio.h>
/**
 * _abs - gives absolute value.
 *@n: argument
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int val = (-1 * n);

		return (val);
	}
	else
	{
		return (n);
	}
	return (0);
}
