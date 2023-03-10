#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string containing the only accepted characters
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j, isEqual;

	for (i = 0; s[i] != '\0'; i++)
	{
		isEqual = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				isEqual = 1;
				break;
			}
		}
		if (isEqual == 1)
			len++;
		else
			break;
	}
	return (len);
}
