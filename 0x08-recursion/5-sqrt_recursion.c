#include "main.h"
int find _sqrt(int n, int start, int end);

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 1, n / 2));
}

/**
 * find_sqrt - find square root
 * @n: an input integer
 * @start: the begining value to search
 * @end: the end value to search
 * Return: the square root of n, otherwise -1
 */
int find_sqrt(int n, int start, int end)
{
	if (start <= end)
	{
		int mid = (start + end) / 2;
		int square = mid * mid;

		if (square == n)
			return (mid);
		else if (square > n)
			return (find_sqrt(n, start, mid - 1));
		else
			return (find_sqrt(n, mid + 1, end));
	}
	return (-1);
}

