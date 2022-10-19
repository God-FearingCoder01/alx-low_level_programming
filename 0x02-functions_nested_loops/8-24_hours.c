#include "main.h"

/**
 * jack_bauer - prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int counter, m, h, fd, sd;

	for (counter = 0; counter < 1440; counter++)
	{
		m = counter;
		h = m / 60;
		m %= 60;
		if (h < 10)
		{
			_putchar('0');
			_putchar(h + 48);
		}
		else
		{
			fd = h / 10, sd = h % 10;
			_putchar(fd + 48);
			_putchar(sd + 48);
		}

		_putchar(':');

		if (m < 10)
		{
			_putchar('0');
			_putchar(m + 48);
		}
		else
		{
			fd = m / 10, sd = m % 10;
			_putchar(fd + 48);
			_putchar(sd + 48);
		}
		_putchar('\n');
	}
}
