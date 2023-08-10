#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string containing the binary number to convert
 *
 * Return: the converted unsigned int value or 0 if b is NULL or contains
 * non-binary characters
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, base2 = 1;
	int len;

	if (!b)
		return (0);
	len = strlen(b) - 1;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		n += (b[len] - '0') * base2;
		base2 *= 2;
		len--;
	}
	return (n);
}
