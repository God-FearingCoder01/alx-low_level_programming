#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a 'list_t' list
 * @head: the head node of the list
 */

void free_list(list_t *head)
{
	if (head)
	{
		if ((*head).next)
			free_list(head);
		free(head);
	}
}
