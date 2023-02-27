#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Void
 */

void puts_half(char *str)
{
	int len_s = 0, i, n;

	while (str[len_s] != '\0')
	{
		len_s++;
	}
	if (len_s % 2 != 0)
		n = (len_s - 1) / 2;
	else
		n = len_s / 2;
	for (i = n; i < len_s; i++)
		_putchar(str[i]);
	_putchar('\n');
}
