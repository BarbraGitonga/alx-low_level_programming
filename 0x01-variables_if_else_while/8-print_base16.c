#include<stdio.h>

/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; ++i)
	{
		putchar('0' + (i));
	}
	for (ch = 'a'; ch <= 'f'; ++ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
