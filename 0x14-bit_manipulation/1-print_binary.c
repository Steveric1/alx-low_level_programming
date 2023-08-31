#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;
	unsigned long int result;

	while (mask != 0)
	{
		result = n & mask;
		if (result == mask)
		{
			flag = 1;
			_putchar('1');
		}
		else
		{
			if (flag == 1 || mask == 1)
				_putchar('0');
		}

		mask >>= 1;
	}
}

