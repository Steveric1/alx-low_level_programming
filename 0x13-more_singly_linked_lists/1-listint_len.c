#include "lists.h"

/**
 * listint_len - return number of element in linked list
 * @h: head
 *
 * Return: num_count
 */

size_t listint_len(const listint_t *h)
{
	int num_count = 0;

	while (h != NULL)
	{
		h = h->next;
		num_count++;
	}

	return (num_count);
}
