#incldue "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Description: checks for lowercase character
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (c == _putchar(i))
			return (1);
	}
	
	return (0);
}
