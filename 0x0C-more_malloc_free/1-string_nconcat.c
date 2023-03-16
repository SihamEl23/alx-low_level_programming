#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include of @s2
 *
 * Return: newly allocated space in memory;
 * NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *s12;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	s12 = malloc((len1 + n + 1) * sizeof(char));
	if (s12 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s12[i] = s1[i];
	for (i = len1, j = 0; j < n; i++, j++)
		s12[i] = s1[j];
	s12[i] = '\0';
	return (s12);
}
