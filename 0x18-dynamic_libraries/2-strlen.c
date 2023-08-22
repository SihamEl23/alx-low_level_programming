#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Return the length of a string
 */

int _strlen(char *s)
{
	int len_s = 0;

	while (s[len_s] != '\0')
		len_s++;
	return (len_s);
}
