#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	while (str[len])
	{
		len++;
	}

	new_node->len = len;
	new_node = *head;
	*head = new_node;

	return (new_node);
}
