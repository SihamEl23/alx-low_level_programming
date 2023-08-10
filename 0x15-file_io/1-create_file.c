#include "main.h"
#include <string.h>
/**
 * create_file - Creates a file with the given filename
 * and writes the given text content to it
 *
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (!text_content)
		res = write(fd, "", 0);
	else
		res = write(fd, text_content, strlen(text_content));

	if (res < 0)
		return (-1);

	if (close(fd) < 0)
		return (-1);

	return (1);
}
