#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024

void copy_file(int fd_from, int fd_to);
void print_usage(void);
void handle_error(const char *message, const char *file, int code);
void set_permissions(const char *filename);
/**
 * main - Entry point for the program
 *
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments passed to the program
 *
 * Return: 0 if successful, otherwise an error code
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	ssize_t	bytes_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_usage();
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		handle_error("Can't read from file", argv[1], 98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		handle_error("Can't write to file", argv[2], 99);
	copy_file(fd_from, fd_to);
	if (close(fd_from) == -1 || close(fd_to) == -1)
		handle_error("Can't close file descriptor", NULL, 100);
	set_permissions(argv[2]);
	return (0);
}
/**
 * copy_file - Copies data from one file descriptor to another
 *
 * @fd_from: File descriptor to read from
 * @fd_to: File descriptor to write to
 *
 * Return: None
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t	bytes_read;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		if (write(fd_to, buffer, bytes_read) != bytes_read)
			handle_error("Can't write to file", NULL, 99);
	if (bytes_read == -1)
		handle_error("Can't read from file", NULL, 98);
}
/**
 * print_usage - Prints usage instructions to standard error
 *
 * Return: None
 */
void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}
/**
 * handle_error - Handles errors and exits the program
 *
 * @message: Error message to print
 * @file: The name of the file that caused the error
 * @code: The exit code associated with the error
 *
 * Return: None
 */
void handle_error(const char *message, const char *file, int code)
{
	if (file)
		dprintf(STDERR_FILENO, "Error: %s %s\n", message, file);
	else
		dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}
/**
 * set_permissions - Sets permissions for a file
 *
 * @filename: Name of the file to set permissions for
 *
 * Return: None
 */
void set_permissions(const char *filename)
{
	struct stat st;

	if (stat(filename, &st) == -1)
		handle_error("Can't stat file", NULL, 100);
	if (chmod(filename, st.st_mode | S_IRUSR | S_IWUSR | S_IRGRP |
				S_IWGRP | S_IROTH) == -1)
		handle_error("Can't change file permissions", NULL, 100);
}

