#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @n: is the number of elements of the array to be
 * printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
