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
	listint_t *ptr, *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node = *head;
		*head = new_node;
		return (new_node);
	}

	ptr = *head;
	idx--;

	while (idx != 0 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
	}

	if (idx != 0)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
