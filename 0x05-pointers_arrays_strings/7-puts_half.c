#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Void
 */

void puts_half(char *str)
{
	int len_s = 0, i;

	while (len_s >= 0)
	{
		if (str[len_s] == '\0')
			break;
		len_s++;
	}

	if (len_s % 2 == 1)
		i = len_s / 2;
	else
		i = (len_s - 1) / 2;
	for (i++; i < len_s; i++)
		_putchar(str[i]);
	_putchar('\n');
}
