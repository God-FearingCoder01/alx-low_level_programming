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
	size_t i = 0;

	if (!h)
		return (i);

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
	printf("[%i] %s\n", (h->str) ?
		_strlen(h->str) : 0, (h->str) ?
		(h->str) : ("(nil)"));
}

/**
 * _strlen - counts the number of characters in a
 *		string
 * @s: string to determine number of characters
 *
 * Return: number of characters in @s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
