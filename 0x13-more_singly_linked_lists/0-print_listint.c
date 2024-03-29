#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of a list
 * @h: head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h =  h->next;
		count++;
	}

	return (count);
}
