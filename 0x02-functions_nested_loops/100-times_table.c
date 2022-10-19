#include "main.h"

/**
 * print_times_table - prints the n time table,
 * starting with 0.
 *
 * Description: If n is greater than 15 or less than 0,
 *		function should not print anything.
 */

void print_times_table(int n)
{
	int rowCount, columnCount;

	if (!((n > 15) || (n < 0)))
	{
		for (rowCount = 0; rowCount <= n; rowCount++)
		{
			for (columnCount = 0; columnCount <= n; columnCount++)
			{
				_putchar(rowCount * columnCount);
				if (columnCount != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}
