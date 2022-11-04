#include <stdio.h>

/**
 * main - entry point
 * Descrription: adds positive numbers, prints
 *		the result followed by a new line.
 *		If no number is passed to the program,
 *		prints 0, followed by a new line
 * @argc: number of arguemenst apssed
 * @argv: string of arguments passed
 * Return: 0 (onsuccess0
 */


int main(int argc, char **argv)
{
	int sum_result = 0;
	int k;

	if (argc == 1)
		printf("%i", 0);
	else
	{
		for (k = 1; k < argc; k++)
		{
			if (number_contains_symbols(argv[k]))
			{
				printf("Error\n");
				return (0);
			}
			else
			{
				sum_result += argv[k];
			}
		}
		printf("%i", sum_result);
	}
	return (0);
}

/**
 * number_contains_symbols - checeks if a given string literal
 * whichi is supposed ot be composed of numbers only, contains
 * any other symbols other tahn numbers
 * @arr: the string to be checked for symbols
 * Return: 0 (on success)
 */

int number_contains_symbols(char *arr)
{
	int len_argvElement, char_number, loop_counter;

	len_argvElement = get_array_size(arr);

	char_number = loop_counter = 0;

	for (i = '0'; i <= '9' || char_number < len_argvElement; i++)
	{
		if (*arr == i)
		{
			char_number++;
			loop_counter = -1;
			i = '0';
		}
		else if (loop_counter == 9)
			return (1);
		loop_counter++;
	}

	return (0);
}

/**
 * get_array_size - finds the length of agiven array or string
 * @arry: name of array to be used
 * Return: 0 (on success)
 */

int get_array_size(char *arry)
{
	int array_index = 0;

	while (arry[array_index] != '\0')
		array_index++;

	return (array_index);
}
