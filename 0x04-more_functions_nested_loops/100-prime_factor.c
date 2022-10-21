#include <stdio.h>

/**
 * main - entry point
 *
 * Description: finds and prints the largest prime
 * factor the number 612852475143, followed by a
 * new line.
 * Return: 0
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i = 2;
	unsigned long largest = 0;

	while (n != 1)
	{
		if (n % i == 0)
		{
			if (i > largest)
			{
				largest = i;
			}
			n = n / i;
			i = 1;
		}
		i = i + 1;
	}

	printf("%lu\n", largest);

	return (0);
}
