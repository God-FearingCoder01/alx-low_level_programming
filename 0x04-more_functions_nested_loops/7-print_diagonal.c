#include "main.h"

/**
 * print_diagonal - draws aa diagonal line on the terminal.
 * @n: the number of times the character '\' should be printed
 * Decription: if n is 0 or less, the function should only
 * printa '\n'. The diagonal should end with a \n.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			if (i != n)
			{
				for (j = 1; j <= i; j++)
				{
					_putchar(' ');
				}
			}
		}
	}
}
