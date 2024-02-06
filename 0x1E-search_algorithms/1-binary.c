#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, or -1 if value is not
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, m;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (m = left; m < right; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);
		m = left + (right - left) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			left = m + 1;
		else
			right = m - 1;
	}

	return (-1);
}
