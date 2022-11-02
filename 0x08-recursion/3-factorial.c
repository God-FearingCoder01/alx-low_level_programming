/**
 * factorial - computes the factorial of a number and then returns it
 * @n: the number for which the factorial is being computed
 * Return: -1 if n < 0, 1 if n == 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
