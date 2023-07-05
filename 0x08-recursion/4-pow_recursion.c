#include "main.h"

/**
 * _pow_recursion - raise to power
 * @x: value
 * @y: power
 *
 * Return: value of x raise to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
