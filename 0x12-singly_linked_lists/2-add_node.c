#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning
 *		of a 'list_t' list
 * @head: the head node o fthe 'list_t' list
 * @str: the string component 'str' of a node
 * Descriptionn: 'str' needs to be duplicated
 *
 * Return: the address of the new element (on
 *		success), otherwise 'NULL'
 */

list_t *add_node(list_t **head, char *str)
{
	list_t *node = NULL;

	if (head)
	{
		node = malloc(sizeof(list_t));
		if (!node)
			return (NULL);
		node->str = strdup(str);
		node->len = strnlen(str);
		node->next = *head;
		*head = node;
	}
	else
	{
		*head = malloc(sizeof(list_t));
		if (!(*head))
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
	}

	return (*head);
}
