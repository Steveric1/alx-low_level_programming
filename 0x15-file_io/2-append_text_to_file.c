#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: filename
 * @text_content: content to append
 *
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t w, len;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

