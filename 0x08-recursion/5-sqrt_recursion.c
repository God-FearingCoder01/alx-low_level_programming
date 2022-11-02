#include "main.h"

/**
 * _sqrt_recursion - computes the natural squar root
 * of a number
 * @n: the number for which a sqaure is to be calculates
 * Return: the result of computation, otherwise -1 is n < 0
 */


int _sqrt_recursion(int n)
{
	return (helper_func(n, 1));
}

/**
 * helper_func - is a function that helps compute the
 * natural square root of agiven value
 * @c: the given value
 * @i: variable of iteration
 * Return: result of computation
 */

int helper_func(int c, int i)
{
	int their_square;

	their_square = i * i;
	if (their_square == c)
		return (1);
	else if (their_square < c)
		return (helper_func(c, i + 1));
	return (-1);
}
