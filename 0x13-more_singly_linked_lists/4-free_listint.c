#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: the address of the first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
