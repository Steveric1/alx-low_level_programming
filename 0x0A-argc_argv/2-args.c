#include <stdio.h>

/**
 * main - print number of argument passed
 * @argc: size of array
 * @argv: array
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
