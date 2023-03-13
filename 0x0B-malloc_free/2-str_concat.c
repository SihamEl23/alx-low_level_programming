#include "main.h"
#include <stdlib.h>
/**
* str_concat - A function that concatenates two strings
* @s1: An input pointer of the first string
* @s2: An input pointer of the second string
* Return: Apointer to concatened strings or NULL if it str is NULL
*/

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *s12;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	s12 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s12 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s12[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		s12[i] = s2[j];
		i++;
	}
	s12[i] = '\0';
	return (s12);
}
