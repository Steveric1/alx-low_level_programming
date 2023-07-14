#include "main.h"


/**
 * my_memset - function that set memory base on bytes
 * @ptr: pointer
 * @value: value
 * @size: size
 *
 * Return: pointer
 */

void my_memset(void *ptr, int value, size_t size)
{
	unsigned char *p = (unsigned char *)ptr;
	size_t i;

	for (i = 0; i < num; i++)
		p[i] = (unsigned char)value;
}

/**
 * _calloc - function that allocate memory for an array
 * @nmemb: number of bytes
 * @size: size of the array
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	my_memset(ptr, 0, nmemb * size);

	return (ptr);
}
