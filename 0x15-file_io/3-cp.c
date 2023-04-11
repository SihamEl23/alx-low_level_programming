#include <stdio.h>
#include "main.h"
#define BUF_SIZE 1024

/**
 * close_fd - close a file descriptor and exit if an error occurs
 * @fd: file descriptor to close
 * Return: none
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: num argument
 * @argv: string argument
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_cnt, write_cnt;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_fd(fd_from);
		return (99);
	}
	while ((read_cnt = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		write_cnt = write(fd_to, buf, read_cnt);
		if (write_cnt == -1 || write_cnt != read_cnt)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_fd(fd_from);
			close_fd(fd_to);
			return (99);
		}
	}
	if (read_cnt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_fd(fd_from);
		close_fd(fd_to);
		return (98);
	}
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
