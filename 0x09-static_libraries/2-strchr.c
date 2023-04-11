#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in string
 * @s: the string to check
 * @c: the character we are looking for
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (*s == '\0')
		return (s);

	return (NULL);
}
