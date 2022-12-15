#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - print all elements of `list_t` list
 * @h: head of linked list
 * Description: if 'str' is 'null', print
 *		'[0] (nil)'. YOU CAN USE 'printf'
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 1; h->next; i++)
	{
		print_node(h);
		h = h->next;
	}

	print_node(h);

	return (i);
}

/**
 * print_node - prints a single node of 'list_t'
 *		list.
 * @i: the number of node of in list
 * @h: the node itself
 */

void print_node(const list_t *h)
{
	printf("[%lu] %s\n", (h->str) ?
		strlen(h->str) : 0, (h->str) ?
		(h->str) : ("(nil)"));
}
