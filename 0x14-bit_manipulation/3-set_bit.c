#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 *
 * @n: pointer to the unsigned long int to set the bit in
 * @index: the index of the bit to set to 1, starting from 0
 *
 * Return: 1 if successful, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shift_left, shift_one;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (index == 0)
	{
		*n = *n | 1;
		return (1);
	}
	else
	{
		shift_left = 1 << (index - 1);
		shift_one = shift_left << 1;
		*n = *n | shift_one;
		return (1);
	}
}
