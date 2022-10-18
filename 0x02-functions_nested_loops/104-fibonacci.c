#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the first 98 Fibonaccir numbers
 * starting with 1 and 2, followed by a newline.
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, n;
	int k;

	i = 1;
	j = 2;

	printf("%lu, %lu", i, j);

	for (k = 1; k < 97; k++)
	{
		n = i + j;
		printf(", %lu", n);
		i = j;
		j = n;
	}

	printf("\n");

	return (0);
}
