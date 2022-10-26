#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Desrciption: appends the src string to the dest string,
 * overwriting the terminatination null byte ('\0') at
 * st the end of the dest, and the adds a terminating
 * null byte
 * Return: a pointer to the resulting string dest
 */

char  *_strcat(char *dest, char *src)
{
	int counter = 0, count = 0;
	int i;

	while (dest[counter] != '\0')
		counter++;

	while (src[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		dest[counter] = src[i];
		counter++;
	}

	dest[counter] = '\0';

	return (dest);

}
