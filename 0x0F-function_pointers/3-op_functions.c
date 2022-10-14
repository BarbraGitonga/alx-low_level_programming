#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - sum of parameters.
 *
 * @a: first argument.
 * @b: second argument
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}

/**
 *op_sub - finds the difference between two arguments
 *
 *@a: argument 1
 *@b: argument 2
 *
 * Returns: the difference between paramters passed.
 */
int op_sub(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}

/**
 *op_mul - multipliction
 *
 *@a: arg1
 *@b: arg2
 *
 *Return: product of a and b
 */

int op_mul(int a, int b)
{
	int c;

	c = (a) * (b);
	return (c);
}

/**
 *op_div - division of numbers.
 *
 *@a: arg1.
 *@b: arg2.
 *
 * Return: divident
 */
int op_div(int a, int b)
{
	int c;

	c = a / b;
	return (c);
}
int op_mod(int a, int b)
{
	int c;

	c = a % b;
	return (c);
}
