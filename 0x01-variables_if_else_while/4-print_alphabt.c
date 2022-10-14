#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Description: doesn't print the key q and e
 * Return: 0 (success)
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		if (x == 113 || x == 101)
			x++;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
