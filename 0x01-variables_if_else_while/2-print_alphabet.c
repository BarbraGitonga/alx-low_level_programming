#include<stdio.h>

/**
 * main - entry point of code
 *
 * Return: always returns zero
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
