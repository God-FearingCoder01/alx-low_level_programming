#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints thefirst 50 Fibonaccir numbers
 * starting with 1 and 2, followed by a newline.
 * Return: 0 (Success)
 */
int main(void)
{
	long i, j, n;
	int k;

	i = 1;
	j = 2;

	printf("%d, %d, ", i, j);

	for (k = 1; k < 49; k++)
	{
		n = i + j;
		printf("%d, ", n);
		i = j;
		j = n;
	}	
	printf("\n");

	return (0);
}
