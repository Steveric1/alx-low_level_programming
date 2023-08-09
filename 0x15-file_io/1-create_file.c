#include "main.h"

/**
 * create_file - function that create a file
 * @filename: file to be created
 * @text_content: content to inseted
 *
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t w, fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
