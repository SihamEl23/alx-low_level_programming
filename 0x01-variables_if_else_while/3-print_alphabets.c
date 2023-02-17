#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program prints the alphabet in lowercase, and
  * then in uppercase, followed by a new line. You are to use only the
  * putchar function not more than twice.
  * Return: 0
  */
int main(void)
{
	char lower_alphabet = 'a';
	char upper_alphabet = 'A';

	while (lower_alphabet <= 'z')
	{
		putchar(lower_alphabet);
		lower_alphabet++;
	}
	while (upper_alphabet <= 'Z')
	{
		putchar(upper_alphabet);
		upper_alphabet++;
	}
	putchar('\n');
	return (0);
}
