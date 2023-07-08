#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of argument passed
 * @argc: size of array
 * @argv: array
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", x * y);

	return (0);
}
