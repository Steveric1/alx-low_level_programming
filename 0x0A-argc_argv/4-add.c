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
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;

		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
