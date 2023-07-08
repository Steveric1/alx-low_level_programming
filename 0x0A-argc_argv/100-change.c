#include <stdio.h>
#include <stdlib.h>

/**
 * calculateMinCoins - program that calculate the cent
 * @amount: amount of cent
 * Return: minCoins
 */

int calculateMinCoins(int amount)
{
	int numberOfCoin[] = {25, 10, 5, 2, 1};
	int size = sizeof(numberOfCoin) / sizeof(numberOfCoin[0]);
	int minCoin = 0, i;

	for (i = 0; i < size; i++)
	{
		minCoin += amount / numberOfCoin[i];
		amount %= numberOfCoin[i];
	}

	return (minCoin);
}

/**
 * main - program that prints the minimum number of coins
 * @argc: size of array
 * @argv: array
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int cent, minCent;

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
	else
	{
		minCent = calculateMinCoins(cent);
		printf("%d\n", minCent);
	}

	return (0);
}
