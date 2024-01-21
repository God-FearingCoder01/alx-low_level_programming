#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the smallest value the arrayshould hold
 * @max: the biggest integer value the array should be able to hold
 *
 * Return: the pointer to the newly created array,
 *	OTHERWISE NULL if min > max OR if malloc fails
 */

int *array_range(int min, int max)
{
	int *p;
	int nmemb = max - min;

	if (nmemb < 0)
		return (NULL);

	p = malloc(nmeb * sizeof(int));

	if (!p)
		return NULL;

	return (p);
}
