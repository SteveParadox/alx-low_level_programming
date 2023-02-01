#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts the number of items in a linked list
 * @h: the address of the head member of the linked list
 * Return: the number of items in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
