#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at an index
 * @head: pointer to the head node
 * @index: node index
 * Return: the address of the node at the index or NULL if no node is found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index > 0)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		index--;
	}
	return (head);
}
