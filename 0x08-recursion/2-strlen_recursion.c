#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: The string to check the length of
 *
 * Return: an interger the display the length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
