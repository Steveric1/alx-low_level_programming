#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The lengt
 * h of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n-- && (*dest++ = *src++) != '\0')
		;
	*dest = '\0';
	return (s);
}
