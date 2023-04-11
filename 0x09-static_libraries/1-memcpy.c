#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: copied destination
 * @src: copy from src
 * @n: n bytes from memory area src
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

