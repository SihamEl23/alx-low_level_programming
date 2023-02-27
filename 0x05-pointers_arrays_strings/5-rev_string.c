#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Void
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;
	int len_s = 0;
	int middle;

	while (s[len_s] != '\0')
		len_s++;
	middle = len_s / 2;
	for (i = 0, j = len_s - 1; i <= middle && j >= middle; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
