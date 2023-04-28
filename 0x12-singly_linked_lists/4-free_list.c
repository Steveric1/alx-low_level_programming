#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * free_list - free memory allocated for the list
 *
 * @head: a pointer to the first node
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
