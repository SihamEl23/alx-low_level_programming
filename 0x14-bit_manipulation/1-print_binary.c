/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: the unsigned long int to be converted to binary and printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
