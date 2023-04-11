#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_usage - print usage
 *
 * Return: void
 */
void print_usage(void)
{
	printf("Usage: cp file_from file_to\n");
	exit(1);
}

/**
 * print_error - print error
 * @message: error message
 * @filename: name of file
 * @code: exit code
 *
 * Return: void
 */
void print_error(const char *message, const char *filename, int code)
{
	printf("Error: %s %s\n", message, filename);
	exit(code);
}

/**
 * copy_file - copy file
 * @src_fd: source file descriptor
 * @dst_fd: destination file descriptor
 *
 * Return: void
 */
void copy_file(int src_fd, int dst_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t num_bytes_read;

	while ((num_bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		ssize_t num_bytes_written = write(dst_fd, buffer, num_bytes_read);

		if (num_bytes_written == -1)
			print_error("Can't write to", "file", 99);
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_usage();
	int src_fd = open(argv[1], O_RDONLY);

	if (src_fd == -1)
		print_error("Can't read from", argv[1], 98);
	int dst_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (dst_fd == -1)
		print_error("Can't write to", argv[2], 99);
	copy_file(src_fd, dst_fd);

	if (close(src_fd) == -1)
	{
		printf("Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	if (close(dst_fd) == -1)
	{
		printf("Error: Can't close fd %d\n", dst_fd);
		exit(100);
	}

	return (0);
}
