#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Void
 */

void puts_half(char *str)
{
	int len_s = 0, i;

	while (k >= 0)
	{
		if (str[k] == '\0')
			break;
		k++;
	}

	if (k % 2 == 1)
		i = k / 2;
	else
		i = (k - 1) / 2;
	for (i++; i < k; i++)
		_putchar(str[i]);
	_putchar('\n');
}
