#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - a function ythe searches for an integer.
 *
 *@array: array passed to the function.
 *@size: size of array.
 *@cmp: pointer to function used to compare values.
 *
 *Return: -1 if no element matches or size is <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
