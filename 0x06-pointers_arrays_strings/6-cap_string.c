#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 * Return: resulting string (s)
 */

char *cap_string(char *s)
{
	int i, j;

	char sep_words[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep_words[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}

	return (s);
}
