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
	va_list valist;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}
