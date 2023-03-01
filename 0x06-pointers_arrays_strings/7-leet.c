#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to s.
 */

char *leet(char *s)
{
	char letters_lowercase[8] = {'o', 'l', ' ', 'e', 'a', ' ', ' ', 't'};
	char letters_uppercase[8] = {'O', 'L', ' ', 'E', 'A', ' ', ' ', 'T'};
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 8)
		{
			if ((s[i] != ' ') &&
			(s[i] == letters_lowercase[j] || s[i] == letters_uppercase[j]))
			{
				s[i] = j + '0';
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
