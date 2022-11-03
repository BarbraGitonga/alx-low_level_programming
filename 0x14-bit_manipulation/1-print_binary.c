#include <stdio.h>

/**
 *print_binary - prints binary representation of a number.
 *
 *@a: decimal to be converted to binary.
 *Return: void.
 */

void print_binary(unsigned long int n);
{
	{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
