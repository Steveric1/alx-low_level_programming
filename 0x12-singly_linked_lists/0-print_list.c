#include "lists.h"

/**
 * size_t print_list - print all element
 * @h: head
 *
 * Return: count_node
 */

size_t print_list(const list_t *h)
{
	const list_h *ptr = h;
	size_t count_node = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count_node++;
	}

	return (count_node);
}
