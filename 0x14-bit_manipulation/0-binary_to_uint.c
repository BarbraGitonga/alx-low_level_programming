#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *power - thsi function gets the power of an integer..
 *
 *@a: integer to be raised
 *@b: power of the integer.
 *Return: power
 */
unsigned int power(int a, int b)
{
	int j;
	unsigned int pow;

	pow = 1;
	for (j = 1; j <= b; j++)
	{
		pow = pow * a;
	}
	return (pow);
}

/**
 *binary_to_uint - converts binary to integer.
 *
 *@b: pointger to string of 0 and 1s.
 *Return: number in decimal dec or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n, dec;

	n = strlen(b) - 1;
	dec = 0;
	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			dec += power(2, n);
		}
		n--;
	}
	return (dec);
}
