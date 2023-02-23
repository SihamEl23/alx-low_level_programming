#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j, k = 1;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			for (j = 0; j < k; j++)
				_putchar('#');
			_putchar('\n');
			k++;
		}
	}
	else
		_putchar('\n');
}
