#include "lists.h"

/**
 * sum_listint - sums all the data in a linked list
 * @head: pointer to the first node
 * Return: the sum or 0 is the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
