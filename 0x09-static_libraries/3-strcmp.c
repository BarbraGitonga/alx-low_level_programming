#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] != s2[i])
		{
			return (-15);
		}
		else if (s2[i] != s1[i])
		{
			return (15);
		}
		i++
	}
}
