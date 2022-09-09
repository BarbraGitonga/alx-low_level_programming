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
		if (a == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
