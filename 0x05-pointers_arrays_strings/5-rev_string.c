#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the actual string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j, k;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = i;
		for (i--, j = 0; j < k / 2; i--, j++)
		{
			ch = s[j];
			s[j] = s[i];
			s[i] = ch;
		}
	}

}
