#include "main.h"

/**
 * _puts - print string follow by new line
 * @str: char to check
 * Owned by Steveric1
 * Return: 0 on success
 */
void _puts(char *str)
{
	for (int n = 0; *str != '\0'; str++)
		putchar(*str);
	putchar('\n');
}
