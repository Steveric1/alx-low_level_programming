#include "main.h"

/**
 * print_rev - function that print a string in reverse, follow by newline
 * @s: char check
 * Owned by Steveric1
 * Return: 0 on success
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
