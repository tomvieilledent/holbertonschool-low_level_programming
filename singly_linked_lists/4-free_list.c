#include "lists.h"
#include <stdio.h>

/**
 * free_list - Frees a linked list of type list_t.
 * @head: Pointer to the head node of the list to be freed.
 *
 * This function iterates through a singly linked list and frees
 * each node, including any dynamically allocated memory for the
 * string elements within the nodes. After execution, all memory
 * previously allocated for the list is released.
 */
void free_list(list_t *head)

{
list_t *next;

if (head == NULL)
	return;
while (head != NULL)
{
	next = head->next;
	free(head->str);
	free(head);
	head = next;
}
}
