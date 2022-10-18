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

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');

}
