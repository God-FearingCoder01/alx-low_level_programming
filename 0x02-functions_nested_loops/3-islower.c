#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: The character to print
 *
 * Description: checks for lowercase character
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	
	return (0);
}
