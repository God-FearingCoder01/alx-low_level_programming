#include <stdio.h>

/**
 * main - entry point of the program
 * Description: prints the number of arguments passed
 *		into the program, followed by a
 *		a new line.
 * @argc: number of arguments apssed into the program
 * @argv: string of all the arguements passed into program
 * Return: 0 (on success0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", (argc - 1));
	return (0);
}
