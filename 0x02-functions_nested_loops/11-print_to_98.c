#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: int num
 * Description: prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= n; i++)
		{
			printf("%d", n);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", n);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
