#include "lists.h"

/**
 * free_listint2 - function that free a list
 * @head: head
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	*head = NULL;
}
