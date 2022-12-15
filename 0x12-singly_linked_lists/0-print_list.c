#include "lists.h"
#include <stdio.h>

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
		print_node(&i, h);
		h = h->next;
	}

	print_node(&i, h);
 
	/*const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		c++;
	}*/

	return (i);
}

/**
 * print_node - prints a single node of 'list_t'
 *		list.
 * @i: the number of node of in list
 * @h: the node itself
 */

void print_node(size_t *i, const list_t *h)
{
	printf("[%i] %s", (h->str) ? *i : 0,
		(h->str) ? (h->str) : ("(nil)"));
}
