#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: buffer array
 * @b: ss
 * @n: jj
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int counter = 0;

	while (n > 0)
	{
		s[counter] = b;
		counter++;
		n--;
	}

	return (s);
}
