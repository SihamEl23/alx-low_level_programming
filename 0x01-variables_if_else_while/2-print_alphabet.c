#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program prints the alphabet in lowercase, followed by
  * a new line. You are to use only the putchar function not more than two
  * times.
  * Return: 0
  */
int main(void)
{
	char lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
	{
		putchar(lower_alphabet);
	}
	putchar('\n');
	return (0);
}
