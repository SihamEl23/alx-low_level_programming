#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int u = n;

	if (n < 0)
	{
		_putchar('-');
		u = -n;
	}
	if (u / 10 != 0)
	{
		print_number(u / 10);
	}
	_putchar((u % 10) + '0');
}
