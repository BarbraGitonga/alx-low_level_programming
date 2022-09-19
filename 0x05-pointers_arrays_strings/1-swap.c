#include "main.h"

/**
 *swap_int - swaps values of integer variables
 *@a: integer pointer
 *@b: integer pointer.
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
