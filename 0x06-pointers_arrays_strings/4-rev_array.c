#include "main.h"

/**
 * reverse_array - function that reverse the content of an array of interger
 * @a: array
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp = 0;

	for (; i < j; i++, j--)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
	}
	return (0);
}
