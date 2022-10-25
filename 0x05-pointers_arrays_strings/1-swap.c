#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: fist integer
 * @b: second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int *p = NULL;

	*p = *a;
	*a = *b;
	*b = *p;
}
