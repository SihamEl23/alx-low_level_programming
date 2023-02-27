#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */

int _atoi(char *s)
{
	int i = 0, nb_int = 0, nb_minus = 0, nb_plus = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '+')
			nb_plus++;
		if (s[i] == '-')
			nb_minus++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (nb_plus >= 0 && nb_minus % 2 == 0)
				nb_int = nb_int * 10 + s[i] - '0';
			else if (nb_minus % 2 != 0)
				nb_int = nb_int * 10 + (-1) * (s[i] - '0');
			if (s[i + 1] == ' ')
				break;
		}
		i++;
	}
	return (nb_int);
}
