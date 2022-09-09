#include<stdio.h>

/**
 * main - entry point
 *
 * return: only zero
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
}
