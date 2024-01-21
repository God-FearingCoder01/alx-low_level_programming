#include "main.h"
#include <string.h>

void _puts_recursion(char *s)
{
	if (strlen(s) == 1)
		return _putchar(s);
	return _puts_recursion(s);
}
