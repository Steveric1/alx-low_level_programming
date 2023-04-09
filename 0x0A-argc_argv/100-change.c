#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int cent, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	count = 0;
	int i;
	int coins[5] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		count += cent / coins[i];
		cent %= coins[i];
	}

	printf("%d\n", count);
	return (0);
}
