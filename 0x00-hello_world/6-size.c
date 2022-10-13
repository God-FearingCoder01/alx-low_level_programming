#include<stdio.h>

/**
 * main - Entry point
 *
 * main - prints the various types on
 * the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */
int main(void)
{
puts("Size of a char: %2d byte(s)", sizeof(char));
puts("Size of an int: %2d byte(s)", sizeof(int));
puts("Size of a long int: %2d byte(s)", sizeof(long int));
puts("Size of a long long int: %2d byte(s)", sizeof(long long));
puts("Size of a float: %2d byte(s)", sizeof(float));
return (0);
}
