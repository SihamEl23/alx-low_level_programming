#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: the unsigned long int to retrieve the bit from
 * @index: the index of the bit to retrieve, starting from 0
 *
 * Return: the value of the bit at the given index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_mask = 1;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit_mask = bit_mask << index;

	bit = bit_mask & n;

	if (bit != 0)
		return (1);
	else
		return (0);
}
