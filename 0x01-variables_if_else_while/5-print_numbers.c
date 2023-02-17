#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program prints all single digit numbers of base 10
  * starting from 0, followed by a new line.
  * Return: 0
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
