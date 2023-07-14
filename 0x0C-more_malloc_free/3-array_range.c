#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that create an array of integer
 * @min: int
 * @max: int
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (int i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
