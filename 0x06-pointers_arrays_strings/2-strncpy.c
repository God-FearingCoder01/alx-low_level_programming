#include "main.h"

/**
 * *_strncpy - sopies a string
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: number of bytes to be copied from src
 * into dest
 * Desrciption: should work exactly like strncpy
 * Return: a pointer of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

for (; n > i; i++)
	dest[i] = '\0';

return (dest);
}
