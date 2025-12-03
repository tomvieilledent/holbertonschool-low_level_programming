#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node at a given index in a doubly list.
 * @h: Double pointer to head of list.
 * @idx: Index to insert new node (starts at 0).
 * @n: Value to put in new node.
 *
 * Return: Address of new node, or NULL if fail or index out of range.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int last_idx = 0, i = 0;
	dlistint_t *tmp, *new_node;

	tmp = *h;

	while (tmp)
	{
		tmp = tmp->next;
		last_idx++;
	}

	if (idx > last_idx)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == last_idx)
		return (add_dnodeint_end(h, n));

	tmp = *h;

	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp;
	new_node->prev = tmp->prev;
	tmp->prev->next = new_node;
	tmp->prev = new_node;

	return (new_node);
}
