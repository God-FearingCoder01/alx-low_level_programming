#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry poiint
 * Description: multiples two numbers, and then
 *		prints the result of the multiplication,
 *		followed by a new line.
 *		You can asssume the two numbers and result
 *		can be stored in an integer.
 *		If the program doesn't receive two
 *		arguments, it should print "Error",
 *		followed by a new line; and then return
 *		1
 * @argc: number of command line arguments passed
 * @argv: string of command line arguments apssed
 * Return: 0 (on success)
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", result);
	}

	return (0);
}
