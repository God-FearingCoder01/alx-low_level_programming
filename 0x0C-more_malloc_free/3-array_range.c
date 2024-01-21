#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the smallest value the arrayshould hold
 * @max: the biggest integer value the array
 *	should be able to hold
 *
 * Return: the pointer to the newly created
 *	array, OTHERWISE NULL if min > max
 *	OR if malloc fails
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *p;
	int nmemb = (max - min) + 1;

	if (nmemb < 0)
		return (NULL);

	p = malloc(nmemb * sizeof(int));

	if (p == NULL)
		return NULL;

	while (!(min > max))
	{
		p[i] = min;
		min++;
		i++;
	}

	return (p);
}
