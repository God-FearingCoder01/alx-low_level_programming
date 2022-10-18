#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - entry point
 *
 * Description: prints the first 98 Fibonaccir numbers
 * starting with 1 and 2, followed by a newline.
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, n, q, r;
	unsigned long int a = 0, b = 0;

	int k;

	i = 1;
	j = 2;

	printf("%lu, %lu", i, j);

	for (k = 1; k < 97; k++)
	{
		if (i + j > LARGEST || a > 0 || b > 0)
		{
			q = (i + j) / LARGEST;
			n = (i + j) % LARGEST;
			r = a + b + q;
			a = b, b = r;
			i = j, j = n;
			printf("%lu%010lu", b, j);
		}
		else
		{
			n = i + j;
			printf("%lu", n);
			i = j, j = n;
		}

		if (k != 96)
			printf(", ");
	}

	printf("\n");

	return (0);
}
