#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Void
 */

void print_rev(char *s)
{
	int len_s = 0;

	while (s[len_s] != '\0')
		len_s++;

	int i = len_s - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
