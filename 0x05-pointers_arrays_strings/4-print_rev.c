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

	while (s[counter] != '\0')
		counter++;

	for (int i = counter; i >= 0; i--)
		_putchar(s[counter]);

	_putchar('\n');
}
