#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, jump;

	if (array == NULL)
		return (-1);

	prev = jump = 0;
	step = sqrt(size);

	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);
	jump = jump < size - 1 ? jump : size - 1;
	while (prev < jump && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	return (array[prev] == value ? (int)prev : -1);

}
