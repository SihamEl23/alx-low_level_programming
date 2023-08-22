#include "main.h"

/**
 * _abs - Entry point
 * @n: int input
 * Description: return absolute value of a number
 * Return: absolute value of the number n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}
