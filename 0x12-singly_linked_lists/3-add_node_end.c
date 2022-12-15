#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a
 *		'list_t' list.
 * @head: the head node o fthe 'list_t' liist
 * @str: the string component of a node 'str'
 * Description: 'str' needs to be duplicated
 *
 * Return: address of the new element,
 *		otherwise 'NULL'
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *second_of_last, *node = NULL;

	if (*head)
	{
		second_of_last  = last_node(*head);
		node = malloc(sizeof(list_t));
		if (!node)
			return (NULL);
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = NULL;
		(second_of_last)->next = node;
	}
	else
	{
		(*head) = malloc(sizeof(list_t));
		if (!(*head))
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
		node = *head;
	}

	return (node);
}

/**
 * last_node - find s the last element in
 *		'list_t' list
 * @h: node address of the head node
 *
 * Return: address of the last node
 */

list_t *last_node(list_t *h)
{
	while (h->next)
		h = h->next;

	return (h);
}
