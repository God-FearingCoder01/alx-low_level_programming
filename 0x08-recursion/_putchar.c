#include <unistd.h>

/**
 * _putchar - prints a character to the standard output straem
 * @c: character to be printed
 * Return: a numerical value of 1 indicating a success, otherwise a 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
