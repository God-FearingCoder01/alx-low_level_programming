#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: value of n
 */

void print_to_98(int n)
{
	printf("%d, ", n);
	while (n != 98)
	{
		if (n > 98)
		{
			n--;
			printf("%d", n);
		}
		else
		{
			n++;
			printf("%d", n);
		}
		if (n != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
