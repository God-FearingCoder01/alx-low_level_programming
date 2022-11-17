#include <unistd.h>

/**
 * _putchar - prints a single character, c on screen.
 * @c: the characterto printed on screen.
 *
 * Return: an integer value o the corresponding status
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
