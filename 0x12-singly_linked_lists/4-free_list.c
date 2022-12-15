#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a 'list_t' list
 * @head: the head node of the list
 */

void free_list(list_t *head)
{
	list_t *new_head = NULL;

	if (head)
	{
		if ((*head).next)
		{
			new_head = (*head).next;
			free((*head).str);
			free(head);
			free_list(new_head);
		}
	}
}
