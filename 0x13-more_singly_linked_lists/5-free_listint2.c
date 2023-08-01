#include "lists.h"

/**
 * free_listint2 - function that free a list
 * @head: head
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	current = *head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*head = NULL;
}
