#include "lists.h"
#include <stdio.h>

/**
 * list_len - finds the number of elements of
 *		`list_t` list
 * @h: head of linked list
 *
 * Return: number of elements  of 'list_t' list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (!h)
		return (i);

	for (i = 1; h->next; i++)
	{
		h = h->next;
	}

	return (i);
}
