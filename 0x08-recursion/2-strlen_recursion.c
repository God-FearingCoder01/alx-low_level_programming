#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * and then returns it
 * @s: string to be used
 * Return: the number of characters in string s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
