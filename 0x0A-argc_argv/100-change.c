#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	count = 0;
	total = (argv[1], &p, 10);

	if(!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			 count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
