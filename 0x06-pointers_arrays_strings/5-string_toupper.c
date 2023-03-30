#include "main.h"

/**
 * string_toupper - functions that changes all lowercases to uppercase
 * @s: string
 * Return: 0 on success
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++
	}

	return (s);
}
