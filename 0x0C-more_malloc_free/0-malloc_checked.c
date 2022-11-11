#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: function parameter
 * Return: a pointer to the allocated memory
 * Description: if malloc fails, this function should cause normal
 *		process termination with status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
