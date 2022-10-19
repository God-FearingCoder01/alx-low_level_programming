#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number passed into print_last_digit
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	char x;
	x = n % 10;
	_putchar(x);
	return (n % 10);
}
