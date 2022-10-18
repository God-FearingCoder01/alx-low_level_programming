#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Description: checks for lowercase character
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	int i;
	char temp;

	for (i = 97; i < 123; i++)
	{
		temp = _putchar(i);
		if (c == temp)
			return (1);
	}
	
	return (0);
}
