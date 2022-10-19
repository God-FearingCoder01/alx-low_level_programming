#include "main.h"

/**
 * jack_bauer - prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int counter, m, h;

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
			_putchar(h);

		_putchar(':');

		if (m < 10)
		{
			_putchar('0');
			_putchar(m);
		}
		else
			_putchar(m);

		_putchar('\n');
	}
}
