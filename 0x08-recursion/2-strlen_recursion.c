#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @*s - the string to return its length of
 *
 * return length of @*s.
 */

int _strlen_recursion(char *s)
{
	static int count = 0;
	if (!(*s == '\0'))
	{
		count++;
		s++;
		_strlen_recursion(s);
	} else
		count++;
	return count;
}
