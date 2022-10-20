#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of times the character '_' should be printed.
 * Description: the line should end with a '\n'.
 * If n is 0 or less, the function should only print \n.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
