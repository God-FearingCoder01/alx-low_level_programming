#include <stdio.h>

/**
 * main - entry point
 *
 * Description: finds and prints the sum of
 * the even-valued terms, folowed by a
 * new line.
 * Return: 0 (Success)
 */
int main(void)
{
	long i, j, n, s;
	long const x = 4000000;

	i = 1;
	j = 2;

	s = 2;

	while (j < x)
	{
		n = i + j;
		if (n % 2 == 0)
			s += n;
		i = j;
		j = n;
	}

	printf("%ld\n", s);

	return (0);
}
