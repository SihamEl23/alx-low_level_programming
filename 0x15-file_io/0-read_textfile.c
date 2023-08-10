#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters read and printed, or 0 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numb_letters;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	numb_letters = read(fd, buf, letters);
	if (numb_letters < 0)
		return (0);

	numb_letters = write(STDOUT_FILENO, buf, numb_letters);
	if (numb_letters < 0)
		return (0);

	if (close(fd) < 0)
		return (0);

	free(buf);
	return (numb_letters);
}

