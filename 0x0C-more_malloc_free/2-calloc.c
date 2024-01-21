#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array,
 *	using malloc
 * @nmembb: number of members of the array
 * @size: size of each member of the array,
 *	in bytes
 *
 * Return: pointer to the allocated memory,
 *	OTHERWISE NULL if nmemb or size is 0
 *	OR if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
