#include "main.h"
#include <string.h>

/**
 * pal_checker - palindrome checker
 * @s: string
 * @i: int
 * @j: int
 * Return: 1 if its palindrome 0 otherwise
 */

int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - palindrome function
 * @s: string
 * Return: 0 on success
 */

int is_palindrome(char *s)
{
	if (*s == '\0' || *(s + 1) == '\0')
		return (1);
	return (pal_checker(s, 0, strlen(s) - 1));
}
