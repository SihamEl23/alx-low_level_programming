#include "main.h"

/**
 * _isalpha - Entry point
 * @c: input char
 * Description: check if a char is alphabet
 * Return: 1 if it's alphabet 0 otherwise
 */

int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
			return (1);
	}

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}
