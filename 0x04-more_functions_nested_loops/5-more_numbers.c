#include "main.h"

/**
 * mode_numbers - prints 10 times the numbers 0 to 14,
 * followed by a new line
 */

void more_numbers(void)
{
	int k = 0, m = 48;
	int i, j, c;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			c = 48 + k, m += 1;
			if (m > 57)
			{
				_putchar(49);
				if (m == 58)
					k = 0, c = 48;
			}
			_putchar(c);
			k++;
		}
		k = 0, m = 48;
		_putchar('\n');
	}
}
