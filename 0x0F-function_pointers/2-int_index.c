#include "function_pointers.h"

/**
 * int_index - function that searches for an interger
 * @array: array to work on
 * @size: size of the array
 * @cmp: function to pointer
 *
 * Return: 0 on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]) != 0)
					return (i);
			}
		}
	}

	return (-1);
}
