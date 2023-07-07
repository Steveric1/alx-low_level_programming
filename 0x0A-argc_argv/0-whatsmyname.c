#include <stdio.h>

/**
 * main - print name of program follow by newline
 * @argv: array
 * @argc: size of the array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
