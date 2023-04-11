#include "main.h"
#include <stdio.h>

/**
 * file_error - checks if files can be opened.
 * @fd_from: file descriptor for source file.
 * @fd_to: file descriptor for destination file.
 * @argv: arguments vector.
 *
 * Return: no return.
 */
void file_error(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
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
	int fd_from, fd_to, err_close;
	ssize_t nchars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(fd_from, fd_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fd_from, buffer, 1024);
		if (nchars == -1)
			file_error(-1, 0, argv);
		nwr = write(fd_to, buffer, nchars);
		if (nwr == -1)
			file_error(0, -1, argv);
	}

	err_close = close(fd_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	err_close = close(fd_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
