#include <stdio.h>

/**
 * main - entry point to the program
 * Description: prints the name of this progra,
 *		followed by a new line. If the
 *		program is renamed, it will print
 *		the new name, without having to
 *		compile it again.
 * @argc: the number of command line arguments entered
 * @argv: the string o command line erguments entered
 * Return: 0 (on succes)
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
