#include "lists.h"

/**
 * dlistint_len - number of element in a linkedlist
 * @h: head
 *
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		h = h->next;
		node_num += 1;
	}

	return (node_num);
}
