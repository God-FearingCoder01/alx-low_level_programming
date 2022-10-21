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
	long long n = 612852475143 / 2;
	long long i = 2;
	long long largest = 0;

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

	printf("%lld\n", largest);

	return (0);
}
