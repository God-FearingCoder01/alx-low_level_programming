#include <unistd.h>

/**
 * _putchar - prints a single character on
 *		screen
 * @c: character to be printed
 *
 * Return: number of character printed, otherwise
 *		-1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
