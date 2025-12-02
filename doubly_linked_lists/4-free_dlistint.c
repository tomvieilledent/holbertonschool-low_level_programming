#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *next;

if (head == NULL)
	return;
while (head != NULL)
{
	next = head->next;
	free(head);

	head = next;
}
}
