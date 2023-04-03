#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: the string to check
 * @c: the character we are looking for
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}

	return (s);
}
