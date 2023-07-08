#include <stdio.h>

/**
 * main - print number of argument passed
 * @argc: size of array
 * @argv: array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
