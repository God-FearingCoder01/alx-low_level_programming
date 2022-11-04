#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, otherwise 0
 */

int _isalpha(int c)
{
	char i;

	for (i = 'A'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}
