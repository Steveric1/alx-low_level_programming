#include "lists.h"

/**
 * print_listint_safe - print a linked list
 * @head: head
 *
 * Return: nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	int nodes = 0;

	while (slow && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		nodes++;

		if (slow == fast)
			exit(98);
	}

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		nodes++;
	}

	return (nodes);
}
