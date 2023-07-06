#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big-endian, 1 if little-endian
 */

int get_endianness(void)
{
	int value = 1;
	char *ptr = (char *)&value;
	int result;

	if (*ptr == 1)
		result = 1;
	else
		result = 0;

	return (result);
}
