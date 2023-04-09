#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiply two numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc > 1)
	{
		mul = 1;

		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
