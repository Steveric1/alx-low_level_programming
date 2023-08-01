#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a list
 * @head: head
 * @index: index
 *
 * Return: 0 on success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return NULL;
}
