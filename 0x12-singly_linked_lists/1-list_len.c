#include "lists.h"

/**
 * list_len - return number of element
 * @h: head
 *
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
