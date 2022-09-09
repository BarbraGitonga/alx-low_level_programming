#include<stdio.h>

/**
 * main - entrypoint of code
 *
 * Return: alays 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
