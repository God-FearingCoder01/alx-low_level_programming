#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the actual string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int count = 0;
	int i, j;

	while (s[count] != '\0')
		count++;

	char m[];

	for (i = 0; i < count; i++)
	{
		m[i] = s[count - 1];
		count--;
	}

	for (i = 0; i < count; i++)
		s[i] = m[i];

	s[count] = '\0';

}
