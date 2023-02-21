#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: int input
 * Description: prints the last digit of a number
 * Return: last digit of the number n
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = (n % 10) * (-1);
	else
		last_digit = n % 10;
	_putchar((last_digit % 10) + '0');
	return (last_digit % 10);
}
