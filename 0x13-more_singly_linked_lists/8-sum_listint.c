#include "lists.h"

/**
 * sum_listint - return the sum of the data
 * @head: head
 *
 * Return: 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
