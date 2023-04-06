#include "main.h"

/**
 * check - check for the square root
 * @n: int
 * @i: int
 *
 * Return: int
 */

int check(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (check(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to find sqrt of
 * Return: natural sqrt or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(n, 1));
}
