#define "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string
 * Return: 0 on success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
