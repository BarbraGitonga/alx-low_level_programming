#include "main.h"

/**
 *rev_string - print a reversed string
 *@s: string to be reversed
 *
 *return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	int len;
	char a;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	for (j = len; j >= 0; j--)
	{
		if (s[j] != '\0')
		{
			a = s[j];
		}
	}
	return (a);
}
