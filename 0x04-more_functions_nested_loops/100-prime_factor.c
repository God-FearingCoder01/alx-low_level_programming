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
	long long int n = 612852475143 / 2;
	long long int i = 2;
	long long int largest = 0;

	while (n != 1)
	{
		if (n % i == 0)
		{
			if (i > largest)
			{
				largest = i;
			}
			i = 1;
		}
		i = i + 1;
	}

	printf("%llu\n", largest);

	return (0);
}
