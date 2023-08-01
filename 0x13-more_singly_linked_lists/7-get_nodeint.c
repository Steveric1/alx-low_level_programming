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
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
		count++;
	}
	return (head);
}
