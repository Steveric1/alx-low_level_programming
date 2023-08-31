#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, flip;
	unsigned int j, i;

	j = 0;
	i = 0;

	flip = 1;
	xor = n ^ m;

	while (i < (sizeof(unsigned long int) * 8))
	{
		if (flip == (xor & flip))
			j++;
		flip <<= 1;
		i++;
	}

	return (j);
}

