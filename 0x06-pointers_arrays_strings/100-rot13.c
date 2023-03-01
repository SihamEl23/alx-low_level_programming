#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to s.
 */

char *rot13(char *s)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char letters_rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == letters[j])
			{
				s[i] = letters_rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
