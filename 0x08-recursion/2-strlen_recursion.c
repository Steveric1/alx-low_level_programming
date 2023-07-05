#define "main.h"
#define <stdio.h>

/**
 * _strlen_recursion - print the length of a string
 * @s: string
 * Return: 0 on success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	else
		return 1 + _strlen_recursion(s + 1);
}
