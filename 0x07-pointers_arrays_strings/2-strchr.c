#include "main.h"
#include <stddef.h>

/**
 * _strchr -  locates a character in a string
 * @s: string to be checked
 * @c: character to be located in s
 *
 * Return: pointer to the first occurence of c in s. Otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
			return (&s[i]);
		i++;
	}
	return (NULL);
}
