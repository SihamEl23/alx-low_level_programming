#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - The entry point of C programs
  * @void: The function takes no parameters
  *
  * Description: This program will assign a random number to the variable n
  * each time it is executed and print the last digit of the number stored
  * in the variable n followed by a new line.
  * Return: 0
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
		printf("the last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("the last digit of %d is %d and is %d", n, ld, ld);
	else
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	return (0);
}
