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
printf("Size of a char: %2d byte(s)\n", sizeof(char));
printf("Size of a int: %2d byte(s)\n", sizeof(int));
printf("Size of a long int: %2d byte(s)\n", sizeof(long int));
printf("Size of a long long: %2d byte(s)\n", sizeof(long long));
printf("Size of a float: %2d byte(s)\n", sizeof(float));
return (0);
}
