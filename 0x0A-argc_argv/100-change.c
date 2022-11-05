#include <stdio.h>
#include <stdlib.h>

int calculate_minimum_coins(int n);

/**
 * main - entry point to the program
 * Description: prints the minumim number of coins to make change for an
 * ammount
 * of money. Usage: "./change cents", where cents is the amount of
 *cents you need to give back. If the number of arguments passed
 *to this program is not exactly 1, print "Error", followed by a
 *new line, and return 1. You should use "atoi" to parse the parameter
 *passed to your program. If the number passed as the argument is
 *negative, print '0', followed by a new line. You can use an unlimited
 *number of coins of values 25, 10, 5, 2 and 1 cent.
 * @argc: the number of command line arguments passed to the program
 * @argv: the string holidng all the arguments passed into the program
 * Return: 1 (on success) otherwise a non-zero integer number
 */

int main(int argc, char **argv)
{
int minimum_number_of_coins;
int cents;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (*argv[1] == '-')
printf("%i\n", 0);
else
{
cents = atoi(argv[1]);
minimum_number_of_coins = calculate_minimum_coins(cents);
printf("%i\n", minimum_number_of_coins);
}
return (0);
}

/**
 * calculate_minimum_coins - computes the minimun number of cents that make
 * up the number of cents 'n'
 * @n: the total number of cents entered
 * Return: minimum cents
 */

int calculate_minimum_coins(int n)
{
int coins_of_value[5] = {25, 10, 5, 2, 1};
int i;

if (n == 0)
return (0);
else if (n <= 2)
{
return (1);
}
for (i = 0; i < 5; i++)
{
if (n == coins_of_value[i])
return (1);
else if (n > coins_of_value[i])
return ((n / coins_of_value[i]) +
	calculate_minimum_coins(n - ((n / coins_of_value[i]) * coins_of_value[i])));
}
return (0);
}
