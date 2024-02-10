#include "search_algos.h"

/**
 * jump_list -  searches for a value in a sorted
 * list of integers using
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 * Return: a pointer to the first node where value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *node, *prev;
	size_t i, step;

	if (list == NULL || size == 0)
		return (NULL);

	i = 0;
	step = sqrt(size);

	for (prev = node = list; node->index + 1 < size && node->n < value;)
	{
		prev = node;
		for (i += step; node->index < i; node = node->next)
		{
			if (node->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, node->index);

	for (; prev->index < node->index && prev->n < value; prev = prev->next)
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	return (prev->n == value ? prev : NULL);
}
