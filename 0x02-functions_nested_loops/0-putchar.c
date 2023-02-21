#include "main.h"

/**
 * main - Entry point
 * @void: The function takes no parameters
 *
 * Description : This program prints _putchar
 * followed by new line
 * by calling a function from main.h file
 * Return: always 0
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
