#include "main.h"
/**
 * print_number - prints an integer
 * @n: an integer to be printed
 */
void print_number(int n)
{
	int m = 1, c = 1, num = n;

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	while (c)
	{
		if ((num / (m * 10)) > 0)
			m *= 10;
		else
			c = 0;
	}
	while (num >= 0)
	{
		if (num == 0)
		{
			_putchar('0');
			num = -1;
		}
		else
		{
			if (m == 1)
			{
				_putchar((num % 10) + '0');
				num = -1;
			}
			else
			{
				_putchar((num / m) + '0');
				if ((num > m) && (m != 1))
					num -= (m * (num / m));
				m /= 10;
			}
		}
	}
}
