/**
 * _pow_recursion - computes the value of x raised to the power
 * and then returns it
 * @x: base value
 * @y: exponent or index value
 * Description: if n is 1, function returns -1
 * Return: The result of computation otherwise -1 is y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
