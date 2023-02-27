#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Void
 */

void puts2(char *str)
{
	int len_s = 0, i = 0;

	while (str[len_s] != '\0')
		len_s++;
	len_s -= 1;
	while (i <= len_s)
	{
		_putchar(str[i]);
		i += 2;
	}
}
