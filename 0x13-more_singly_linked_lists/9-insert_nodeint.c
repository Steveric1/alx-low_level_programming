#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: head
 * @idx: index
 * @n: new node
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *new;

	if (*head == NULL)
		return (NULL);

	if (idx != 0)
	{
		ptr = *head;
		for (i = 0; i < idx - 1 && ptr != NULL; i++)
			ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
