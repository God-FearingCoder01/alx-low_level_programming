#include <stdio.h>

/**
 * main - entry point
 * Description: prints all arguements received,
 *		including the first one. Only
 *		one per line, endling with a
 *		new line.
 * @argc: number of command line arguments received
 * @argv: string of command line arguments received
 * Return: 0 (on succss)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
