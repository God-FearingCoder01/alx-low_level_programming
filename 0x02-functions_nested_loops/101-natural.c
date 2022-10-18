#include <stdio.h>

/**
 * main - entry point
 *
 * Description: computes and prints the sum of all the multiples
 * 		of 3 or 5  below 1024 (excluded), followed by a 
 * 		new line.
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long sum = 0;
	int counter;

	for (counter = 0; counter < 1024; counter++)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
			sum += counter;
	}

	printf("%lu\n", sum);

	return (0);
}
