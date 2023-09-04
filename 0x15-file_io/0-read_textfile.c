#include "main.h"

/**
 * read_textfile - reads a text file and print out
 * @filename: filename
 * @letters: number of letters
 *
 * Return: total_read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, fileDescriptor;
	size_t total_r = 0;
	ssize_t chunk_size = 0;

	char buffer[1024];

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	while (letters > 0)
	{
		chunk_size = letters < sizeof(buffer) ? letters : sizeof(buffer);
		r = read(fileDescriptor, buffer, chunk_size);

		if (r == 0)
			break;
		w = write(STDOUT_FILENO, buffer, r);
		if (w != r)
		{
			close(fileDescriptor);
			return (total_r);
		}

		total_r += r;
		letters -= r;

		if (r < chunk_size)
			break;
	}

	close(fileDescriptor);
	return (total_r);
}

