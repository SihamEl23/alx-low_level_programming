#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 *
 * @n: pointer to the unsigned long int to clear the bit in
 * @index: the index of the bit to clear to 0, starting from 0
 *
 * Return: 1 if successful, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shift_left, invert;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (index == 0)
	{
		*n = *n & 0;
		return (1);
	}
	else
	{
		shift_left = 1 << index;
		invert = ~shift_left;
		*n = *n & invert;
		return (1);
	}
}
