#include "main.h"
#include <stdlib.h>

/**
 *create array - reates an array of characters
 *
 *@size: size of array
 *@c: character to be initialized
 *
 * Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	
	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
	free(array);
}
