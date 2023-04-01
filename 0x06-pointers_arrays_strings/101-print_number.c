#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: number to be printed
 * Return: 0 on success
 */
void print_number(int n)
{
	unsigned int y = 0;

	if (n < 0)
	{
		_putchar('-');
		y = -n;
	}
	y = n;

	if (y / 10)
		print_number(y / 10);
	_putchar(y % 10 + '0');
}
