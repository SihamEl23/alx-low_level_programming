#include "main.h"
int check_number(int n, int d);

/**
 * is_prime_number - Afunction that checks if a number is prime.
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_number(n, 2));
}

/**
 * check_number - check if n is divisible
 * @n: the number to be checked
 * @d: the divisor number start with 2
 * Return: 0 if n is divisible and 1 otherwise
 */

int check_number(int n, int d)
{
	if (d <= n / 2)
	{
		if (n % d != 0)
			return (check_number(n, d + 1));
		else
			return (0);
	}
	return (1);
}
