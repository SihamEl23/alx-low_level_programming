#include "main.h"

/**
 * flip_bits - counts the number of bits
 * needed to be flipped to get from n to m.
 * @n: an unsigned long integer.
 * @m: an unsigned long integer.
 *
 * Return: number of bits needed to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}

	return (count);
}
