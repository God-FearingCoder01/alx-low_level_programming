#include "main.h"

/**
 * _isupper - chacks for uppercase character.
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	
	return (0);
}
