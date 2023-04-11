#include "main.h"
#include <stdio.h>

void check_file_open(int source_fd, int dest_fd, char *argv[]);
void close_file(int fd, char *filename);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments.
 * @argv: The arguments vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd, chars_read, chars_written, close_result;
	char buffer[1024];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}
	source_fd = open(argv[1], O_RDONLY);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file_open(source_fd, dest_fd, argv);
	chars_read = 1024;
	while (chars_read == 1024)
	{
		chars_read = read(source_fd, buffer, 1024);
		if (chars_read == -1)
		{
			check_file_open(-1, 0, argv);
		}
		chars_written = write(dest_fd, buffer, chars_read);
		if (chars_written == -1)
			check_file_open(0, -1, argv);
	}
	close_file(source_fd, argv[1]);
	close_file(dest_fd, argv[2]);
	return (0);
}

/**
 * check_file_open - Checks if files can be opened.
 * @source_fd: The source file descriptor.
 * @dest_fd: The destination file descriptor.
 * @argv: The arguments vector.
 *
 * Return: No return.
 */
void check_file_open(int source_fd, int dest_fd, char *argv[])
{
	if (source_fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest_fd == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor.
 * @filename: The name of the file.
 *
 * Return: No return.
 */
void close_file(int fd, char *filename)
{
	int result = close(fd);

	if (result == -1)
	{
		fprintf(stderr, "Error: Can't close file %s\n", filename);
		exit(100);
	}
}
