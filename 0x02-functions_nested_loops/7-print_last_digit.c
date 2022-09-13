#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 *@n: argument
 * Return: always 0
 */
int print_last_digit(int n)
{
	int val = (n % 10);

	if (val < 0)
	{
		val = (val * -1);
		_putchar(val + '0');
		return (val);
	}
	else
	{
		_putchar(val + '0');
		return (val);
	}
}
