#include "main.h"
#include <string.h>

int check_string(char *s, int start, int end);

/**
 * is_palindrome - A function that checks if s is a palindrome string
 * @s: An inpuit string
 * Return: 1 if is string is a palindrome or 0 in otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (check_string(s, 0, strlen(s) - 1));
}

/**
 * check_string - A function that help to check if s is palindrome
 * @s: An input string
 * @start: The first character in s
 * @end: The last character in s
 * Return: 1 if s is palindrome, 0 otherwise
 */

int check_string(char *s, int start, int end)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			return (check_string(s, start + 1, end - 1));
		else
			return (0);
	}
	return (1);
}
