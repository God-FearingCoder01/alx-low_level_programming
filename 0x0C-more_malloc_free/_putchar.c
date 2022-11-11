#include <unistd.h>

/**
 * _putchar - prints a character on screen
 * @c: the character to be printed
 * Return: value showing status execution, 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
