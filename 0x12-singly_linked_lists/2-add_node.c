#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * @head: head
 * @str: str to duplicate
 *
 * Return: new address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *s = malloc(sizeof(list_t));
	s->str = strdup(str);
	s->len = strlen(str);
	s->next = NULL;

	s->next = *head;
	*head = s;

	if (*head == NULL)
		return (NULL);
	else
		return (*head);
}
