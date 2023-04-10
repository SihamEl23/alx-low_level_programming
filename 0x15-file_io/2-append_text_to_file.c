#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text to an existing file
 *
 * @filename: The name of the file to append to
 * @text_content: The content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (!text_content)
		res = write(fd, "", 0);
	else
		res = write(fd, text_content, strlen(text_content));

	if (res < 0)
		return (-1);

	if (close(fd) < 0)
		return (0);

	return (1);
}
