#include <stdio.h>

/**
 * main - prints the alphabet ins small letters only
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 122; x > 96; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
