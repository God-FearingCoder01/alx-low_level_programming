#include <unistd.h>

/**
 * _putchar - prints a character on screen
 * @c: character to be printed
 *
 * Return: 1 on success, otheriwse -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
