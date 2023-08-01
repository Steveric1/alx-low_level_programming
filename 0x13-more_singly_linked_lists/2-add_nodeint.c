#include "lists.h"

/**
 * add_nodeint - add new node at the beginning
 * @head: head
 * @n: new node
 *
 * Return: new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
