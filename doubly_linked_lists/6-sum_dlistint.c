#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Sum of all data (n) in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)

{
	int count = 0;
	dlistint_t *tmp;

	tmp = head;

	while (tmp)
	{
		count += tmp->n;
		tmp = tmp->next;
	}
	return (count);
}
