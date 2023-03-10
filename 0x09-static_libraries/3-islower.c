#include "main.h"

/**
 * _islower - Entry point
 * @c: input char
 * Description: checks if a char is a lower alphabet
 * Return: 1 if it's a lower alphabet else 0
 */

int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}
