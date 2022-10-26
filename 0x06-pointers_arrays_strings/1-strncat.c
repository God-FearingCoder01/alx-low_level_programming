#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: number of bytes to used from src
 * Desrciption: appends the src string to the dest string,
 * using at most n bytes from src and
 * overwriting the null-byte if src does not contain
 * n or more bytes
 * Return: a pointer to the resulting string dest
 */

char  *_strncat(char *dest, char *src, int n)
{
	int counter = 0, count = 0;
	int i;

	while (dest[counter] != '\0')
		counter++;

	while (src[count] != '\0')
		count++;

	for (i = 0; i < n; i++)
	{
		dest[counter] = src[i];
		counter++;
	}

	if (count < n)
		dest[counter] = '\0';

	return (dest);

}
