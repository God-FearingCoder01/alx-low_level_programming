#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Description: Use of 'printf' is allowed. Don't print the
 *		separator if it is 'NULL'. Print '(nil)' instead
 *		if one of the string is 'NULL'. Print a new line
 *		at the end if your function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list ap;
	char *current_value;

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		current_value = va_arg(ap, char*);

		if (current_value == NULL)
			printf("(nill)");
		else
			printf("%s", current_value);

		if ((separator != NULL) && (count < (n - 1)))
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
