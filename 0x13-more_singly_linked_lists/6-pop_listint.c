#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the address of the head head node
 * Return: the head node's data or NULL if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	ptr = *head;
	if (ptr == NULL)
		return ('\0');
	n = ptr->n;
	(*head) = (*head)->next;
	free(ptr);

	return (n);
}
