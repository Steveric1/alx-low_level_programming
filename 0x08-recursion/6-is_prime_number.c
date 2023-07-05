#include "main.h"

/**
 * checkPrime - check if a number is a prime
 * @a: int
 * @b: int
 * Return: 0 on success
 */

int checkPrime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b/2)
		return (1);
	else
		return (checkPrime(a + 1, b));
}

/**
 * is_prime_number - state if number is a prime
 * @n: number
 * Return: 1 if is prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else
		return (checkPrime(2, n));
}
