#include "lists.h"

/**
 * free_list - free a list_t
 * @head: head
 *
 * Return: 0
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
