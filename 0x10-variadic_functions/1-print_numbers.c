#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be placed between numbers.
 * @n: is the number of integers passed to the function.
 * Description: If @separator is 'NULL', don't print it.
 *		Use of 'printf' is allowed. Print a new line
 *		at the end of the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list ap;

	va_start(ap, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%i", va_arg(ap, int));

		if (separator != NULL && counter < n - 1)
			printf("%s", separator);
	}

	va_end(ap);

	printf("\n");
}
