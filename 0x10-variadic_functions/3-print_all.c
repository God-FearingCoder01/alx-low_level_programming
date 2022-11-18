#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints everything
 * @format: is a list of types of arguments passed
 * to the function.
 * Description: 'c' is 'char', 'i' is 'integer', 'f' is 'float', 's'
 *		is 'char *' (is the string is NULL print '(nil)' instead)
 *		any other char should be ignored. Use of a 'for', 'goto',
 *		ternary operator, 'else', 'do ... while', is not allowed.
 *		Only a miximum of 2 'while' loops and 2 'if' statements
 *		can be used. A maximum of 9 variables only can be declared.
 *		Use of 'printf' is allowed. Print a new line at the end of
 *		your function.
 */

void print_all(const char * const format, ...)
{
	int index = 0;
	char my_array[] = {'c', 'i', 'f', 's'};
	int my_index;
	va_list ap;
	char *c_v;

	va_start(ap, format);

	while (format[index] != '\0')
	{
		my_index = 0;

		while (format[index] != my_array[my_index] && my_index < 4)
			my_index++;

		index++;

		if (my_index == 0)
			printf("%c", va_arg(ap, int));
		else if (my_index == 1)
			printf("%i", va_arg(ap, int));
		else if (my_index == 2)
			printf("%f", va_arg(ap, double));
		else if (my_index == 3)
		{
			c_v = va_arg(ap, char *);
			if (c_v == NULL)
				printf("(nil)");
			else
				printf("%s", c_v);
		}
		else
			continue;
	}

	va_end(ap);
	printf("\n");
}
