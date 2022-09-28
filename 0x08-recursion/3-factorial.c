#include "main.h"

/**
 *factorial - return factorial of number
 *@n: value of integer
 *Return: value of factorial of n
 */
int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	i = n * factorial(n - 1);
	return (i);
}
