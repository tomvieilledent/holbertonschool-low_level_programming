#include "lists.h"
#include <stdio.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list_t list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)

{
	char *str_cpy;
	int len_cpy = 0;
	list_t *node;

	if (str == NULL)
		return (NULL);

	str_cpy = strdup(str);

	if (str_cpy == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(str_cpy);
		str_cpy = NULL;
		return (NULL);
	}

	while (str_cpy[len_cpy] != '\0')
		len_cpy++;

	node->str = str_cpy;
	node->len = len_cpy;
	node->next = *head;
	*head = node;

	return (node);
}
