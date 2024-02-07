#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted
 * array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: left elements in array
 * @right: right elements in array
 * @value: value to search for
 * Return: the first index where value is located, or -1 if value is not
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
/**
 * exponential_search - function that searches for a value
 * in a sorted array of integers
 * @array:  pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, upper_bound;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	upper_bound = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, upper_bound);
	return (_binary_search(array, i / 2, upper_bound, value));
}
