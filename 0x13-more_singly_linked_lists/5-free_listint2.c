#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head pointer of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	ptr = *head;
	while (*head)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
