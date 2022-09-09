#include<stdio.h>

/**
 * main - entry popint
 *
 * Return: is always zero
 */
int main(void)
{
	int a;

	for (a = '1'; a <= '9'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
