#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: size of array
 * @argv: array
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int sum = 0, i, n;
	char *flag;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);

		if (*flag)
		{
			printf("error\n");
			return (10);
		}

		sum += n;
	}

	printf("%d\n", sum);
	return (0);
}
