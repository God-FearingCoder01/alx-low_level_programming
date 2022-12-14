#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed
 * by a new line.
 * @s: actial string to be printed in reverse
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;

	for (i = counter - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
