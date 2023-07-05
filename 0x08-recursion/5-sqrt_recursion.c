#include "main.h"

/**
 * _sqrt_recursion - cal square root of a number
 * @n: number
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calculateSqrt(n, 1, n));
}

/**
 * calculateSqrt - function to calculate the sqrt
 * @n: number
 * @x: start
 * @y: end
 * Return: end
 */
int calculateSqrt(int n, int x, int y);
int calculateSqrt(int n, int x, int y)
{
	int mid = x + (y - x) / 2;
	int square = mid * mid;

	if (x > y)
	{
		return (-1);
	}

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (calculateSqrt(n, x, mid - 1));
	}
	else
	{
		return (calculateSqrt(n, mid + 1, y));
	}
}
