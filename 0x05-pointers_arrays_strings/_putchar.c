#include <unistd.h>

/**
 * _putchar - prints a character c on screen
 * @c: character to be printed
 *
 * Return: value approriatesly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
