#include <stdio.h>

/**
 * main - print the number of argument passed into it
 * @argc: argument count
 * @argv: argments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
