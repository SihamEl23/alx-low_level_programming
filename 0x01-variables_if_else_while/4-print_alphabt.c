#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program that prints the alphabet in lowercase,
  * except 'q' and 'e' and then followed by a new line. You are to use only
  * the putchar function not more than twice.
  * Return: 0
  */
int main(void)
{
	char lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
	{
		if (lower_alphabet != 'e' && lower_alphabet != 'q')
			putchar(lower_alphabet);
	}
	putchar('\n');
	return (0);
}
