#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - prints numbers to 98
 *@n: argument
 *Return: string of numbers
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
		{
			printf("%d, ", n);
		}
		printf("98");
	}
	else if (n > 98)
	{
		for (n = n; n > 97; n--)
		{
			printf("%d, ", n);
		}
		printf("98");
	}
	else if (n == 98)
	{
		printf("98");
	}
	printf("\n");
}
