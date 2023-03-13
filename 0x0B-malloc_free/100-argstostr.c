#include "main.h"
#include <stdlib.h>

/**
* argstostr - A function that concatenates all arguments of your program
* @ac: number of arguments
* @av: array containing arguments
* Return: A pointer to string that containing all arguments
* or NULL if ac == 0, if av == NULL, or upon failure
*/

char *argstostr(int ac, char **av)
{
	int len = 0, i, j = 0, k = 0;
	char *arg_str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
			len++;
	}
	arg_str = malloc((len + 1) * sizeof(char));
	if (arg_str == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			arg_str[k] = av[i][j];
			k++;
		}
		arg_str[k] = '\n';
	}
	arg_str[k++] = '\0';
	return (arg_str);
}
