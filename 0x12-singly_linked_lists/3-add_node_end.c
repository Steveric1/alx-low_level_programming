#include "lists.h"

/**
 * add_node_end - add a new node at the end
 * @head: head
 * @str: str to duplicate
 *
 * Return: 0 on success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s = malloc(sizeof(list_t));

	if (s == NULL)
		return (NULL);

	s->str = strdup(str);
	s->len = strlen(str);
	s->next = NULL;

	if (*head == NULL)
	{
		*head = s;
		return (*head);
	}

	list_t *ptr = malloc(sizeof(list_t));

	ptr = head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = s;
}
