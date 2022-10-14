#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - executes a function on each element of an array.
 *
 *@array: array to be exected on by function.
 *@size: size of array.
 *@action: function to be exected.
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
	{
		return;
	}
	for (a = 0; a < size; a++)
		action(array[a]);
}
