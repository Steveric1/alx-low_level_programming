#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointing to string
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j;
	int i;

	j = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;

		if (b[i] == '1')
			j += 1;
	}

	return (j);
}
