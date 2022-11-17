#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its
 * parameters.
 * @n: the number of paramaters to be given
 * Description: if @n is 0, return 0
 *
 * Return: sum on success, otherwise 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
