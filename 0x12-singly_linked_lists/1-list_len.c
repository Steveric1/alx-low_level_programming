#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - function that return the number
 * of element in a list
 * @h: string in the linke list
 *
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
