#include "main.h"

/**
 *prime_checker - detects is number is prime
 *@n: number tested
 *Return: prime number
 */
int prime_checker(int n)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}

/**
* is_prime_number - checks if a number is prime
* @n: input
* Return: Always 0 (Success)
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}
