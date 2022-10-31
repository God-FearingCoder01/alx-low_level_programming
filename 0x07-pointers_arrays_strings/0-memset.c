#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: hh
 * @b: ss
 * @n: jj
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int counter = 0;

	while (*(s + counter) != '\0' && counter < n)
	{
		s[counter] = b;
		counter++;
	}

	s[counter] = '\0';

	return (s);
}
