#include "main.h"
#include <stdlib.h>

/**
* _strdup - A function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a
* parameter.
* @str: An input pointer of the string to copy.
* Return: Apointer to new string or NULL if it str is NULL
*/

char *_strdup(char *str)
{
	int len = 0, i;
	char *dup_str;

	while (str[len] != '\0')
		len++;
	dup_str = malloc((len + 1) * sizeof(char));
	if (str == NULL || dup_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup_str[i] = str[i];
	dup_str[i] = '\0';
	return (dup_str);
}
