#include "main.h"
/**
 * _pow_recursion - gets power of x raised to y
 * @x: integer to be raised
 * @y: power value
 * Return: Power of x to y
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		i = (x * _pow_recursion(x, y - 1));
	}
	return (i);
}
