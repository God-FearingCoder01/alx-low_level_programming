#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number passed into print_last_digit
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
