#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints lower alphabets x10
 * Return: void
 */

void print_alphabet_x10(void)
{
	char lower_alphabet;
	int i = 0;

	while (i < 10)
	{
		lower_alphabet = 'a';
		while (lower_alphabet <= 'z')
		{
			_putchar(lower_alphabet);
			lower_alphabet++;
		}

		_putchar('\n');
		i++;
	}
}
