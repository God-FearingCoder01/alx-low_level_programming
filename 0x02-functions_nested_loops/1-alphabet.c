#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowecase,
 * folowed by a new line.
 *
 * Description: You can only use _putchar twice.
 */

void print_alphabet(void)
{
	int i;

	for (i = 92; i < 131; i++)
		_putchar(i);
	_putchar('\n');

}
