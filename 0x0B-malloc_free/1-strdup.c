#include "main.h"
#include <stdlib.h>
/**
 *_strdup - return s a pointer to a nerwly allocated space in memory.
 *
 *@str: pointer to a tring of words
 *Return: either NULL or string
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;

	string = malloc(sizeof(char) * (j + 1));

	if (string == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
		string[i] = str[i];
	}
	string[i + 1] = '\0';
	return (string);
}
