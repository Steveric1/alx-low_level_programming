#include "function_pointers.h"

/**
 * array_iterator - function that executes
 * a function given as a parameter
 *
 * @array: array to function
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
