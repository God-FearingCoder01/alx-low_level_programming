#include <stdio.h>

/**
 * main - prints the alphabet ins small letters only
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 97; x <= 123; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
