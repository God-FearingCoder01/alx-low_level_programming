#include <unistd.h>

/**
 * _putchar - prints a character on screen
 * @c: character to be printed
 *
 * Return: integer value corresponding to result
 * corresponding to the execution of the function
 * body
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
