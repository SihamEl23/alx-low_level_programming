#include "main.h"
#include <stdlib.h>

/**
* create_array - A function that creates an array of chars,
* and initializes it with a specific char.
* @size: The size of the array
* @c: A character to initialized the array
* Return: Apointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar != NULL)
	{
		for (i = 0; i < size; i++)
			ar[i] = c;
		return (ar);
	}
	return (NULL);
}
