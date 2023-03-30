#include "main.h"

/**
 * string_toupper - functions that changes all lowercases to uppercase
 * @s: string
 * Return: 0 on success
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}

	return (0);
}
