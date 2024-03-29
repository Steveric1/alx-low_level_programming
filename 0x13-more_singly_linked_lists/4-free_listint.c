#include "lists.h"

/**
 * free_listint - free a list
 * @head: head
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
