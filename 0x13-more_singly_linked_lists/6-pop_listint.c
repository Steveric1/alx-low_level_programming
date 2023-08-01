#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: head
 *
 * Return: data
 */

int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	next_node = (*head)->next;

	free(*head);
	*head = next_node;

	return (data);
}
