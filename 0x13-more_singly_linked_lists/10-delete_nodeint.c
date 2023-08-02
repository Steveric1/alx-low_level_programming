#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (current->next == NULL)
				return (-1);
			previous = current;
			current = current->next;
		}

		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
}
