#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0.
 */

void times_table(void)
{
	int i, j, n, fd, sd;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = j * i;
			if (n > 9)
			{
				fd = n / 10;
				sd = n % 10;
				_putchar(fd + 48);
				_putchar(sd + 48);
			}
			else
				_putchar(n + 48);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
