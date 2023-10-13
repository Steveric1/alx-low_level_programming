#include "lists.h"

/**
 * insert_dnodeint_at_index - inset node at a given position
 * @h: head
 * @idx: index
 * @n: number to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *ptr;
	unsigned int i;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		ptr = *h;

		for (i = 0; i < idx - 1 && ptr != NULL; i++)
		{
			ptr = ptr->next;
			if (ptr == NULL)
				return (NULL);
		}
	}

	if (idx == 0)
	{
		temp->next = *h;
		(*h)->prev = temp;
		*h = temp;
		return (*h);
	}

	temp->next = ptr->next;
	ptr->next = temp;
	temp->prev = ptr;
	return (*h);
}
