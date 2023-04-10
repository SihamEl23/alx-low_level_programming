#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file: file descriptor.
 * @filename: name of file associated with file descriptor.
 *
 * Return: no return.
 */
void error_file(int file, char *filename)
{
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * error_write - checks if file can be written to.
 * @file: file descriptor.
 * @filename: name of file associated with file descriptor.
 *
 * Return: no return.
 */
void error_write(int file, char *filename)
{
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * error_close - checks if file descriptor can be closed.
 * @fd: file descriptor.
 *
 * Return: no return.
 */
void error_close(int fd)
{
	int err_close;

	err_close = close(fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	error_file(file_from, argv[1]);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_write(file_to, argv[2]);

	while ((nchars = read(file_from, buf, 1024)))
	{
		if (nchars == -1)
			error_file(-1, argv[1]);

		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			error_write(0, argv[2]);
	}

	error_close(file_from);
	error_close(file_to);

	return (0);
}
