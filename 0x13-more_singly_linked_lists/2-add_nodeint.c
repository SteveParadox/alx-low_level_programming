#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a list
 * @head: pointer to the head of a list
 * @n: node interger
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
