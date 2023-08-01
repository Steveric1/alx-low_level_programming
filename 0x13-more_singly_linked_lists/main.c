#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: head
 *
 * Return: data
 */

size_t print_listint(const listint_t *h)
{
        int count = 0;

        while (h != NULL)
        {
                printf("%d\n", h->n);
                h =  h->next;
                count++;
        }

        return (count);
}

void free_listint2(listint_t **head)
{
        listint_t *current;
        listint_t *next_node;

        if (*head == NULL)
                return;

        current = *head;

        while (current != NULL)
        {
                next_node = current->next;
                free(current);
                current = next_node;
        }
 
        *head = NULL;
}


listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
                return (NULL);

        new_node->n = n;
        new_node->next = NULL;

        if (*head == NULL)
        {
                *head = new_node;
                return (new_node);
        }

        listint_t *current = *head;
        while (current->next != NULL)
                current = current->next;
 
        current->next = new_node;
 
        return (new_node);
}

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        int count = 0;

        if (head == NULL)
             return (NULL);

        while (head != NULL)
        {
                if (count == index)
                        return (head);
                head = head->next;
                count++;
        }
}

int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
