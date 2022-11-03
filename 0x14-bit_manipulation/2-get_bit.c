#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *dec_to_bin - decimal numbers to binary.
 *
 *@a: the decimal to be converted to binary.
 *Return: bin
 */

char* dec_to_bin(unsigned long int a)
{
	char bin[100];
	unsigned int i;

	i = 0;
	while (a >= 0)
	{
		a = a/2;
		if (a % 2 == 0)
		{
			bin[i] = '0';
		}
		else if (a % 2 == 1)
		{
			bin[i] = '1';
		}
		i++;
	}
	bin = strrev(bin);
	return (bin);
}

/**
 *get_bit - return the value of a bit at a given index.
 *
 *@n: value whose bit is being considered.
 *@index: this is the index starting from 0 of the bit you want to get.
 *Return: value of the bit at index or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char bin;
	int i, len, num;

	bin = dec_to_bin(n);
	len = strlen(bin);

	if (!n || !index)
		return (-1);

	for (i = len; i >= 0; i--)
	{
		if (bin[i] != '/0')
		{
			if (bin[i] == bin[index])
			{
				num = atoi(bin[i]);		
				break
			}
		}
	}
	return (num);
}
