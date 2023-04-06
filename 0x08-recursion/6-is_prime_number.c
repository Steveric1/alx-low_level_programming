#include "main.h"

/**
 * check - checks to see if number is prime
 * @n:int
 * @i:int
 * Return:int
 */

int check(int n, int i)
{
	if (i < 2 || i % n == 0)
		return (0);
	else if (n > i / 2)
		return (1);
	else
		return (check(n + 1, i));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
