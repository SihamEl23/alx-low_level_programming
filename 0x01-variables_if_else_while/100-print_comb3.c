#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This  program that prints all possible different
  * combinations of two digits. The two digits must be different and unique.
  * Return: 0
  */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 < 57; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar (num1);
			putchar (num2);
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
