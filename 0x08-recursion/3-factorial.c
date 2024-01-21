#include "main.h"

/**
 * factorial(int n) - returns  the factorial of a given number
 * @n: the number to determine it's factorial
 *
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
