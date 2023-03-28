#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 * @a: first int
 * @b: second int
 * Owned by Steveric1
 * Return 0 on success
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
