#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Prints lower alpabets
 * Return: void
 */

void print_alphabet(void)
{
	char lower_alphabet = 'a';

	while (lower_alphabet <= 'z')
	{
		_putchar(lower_alphabet);
		lower_alphabet++;
	}

	_putchar('\n');
}
