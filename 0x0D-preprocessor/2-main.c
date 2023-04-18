#include <stdio.h>

/**
 * main - program that print the name of a file that it is compile from
 *
 * Return: 0 on success
 */

int main(void)
{
	char *s = __FILE__;

	while (*s)
		putchar(*s++);

	putchar('\n');
	return (0);
}
