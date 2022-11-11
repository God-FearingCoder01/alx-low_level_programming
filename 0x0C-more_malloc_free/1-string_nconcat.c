#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the destinatio  string
 * @s2: the source string
 * @n: the number of character to be copied from @s2
 * Description: if the function fails, it whould return
 *		'NULL'. If n is greater or equal to the length
 *		of @s2 then use the entire string @s2. If 'NULL'
 *		is passed, treat it as an empty string.
 * Return: pointer to a newly allocated space in memory,
 *	which contains @s1, followed by the first n bytes of
 *	@s2, and null terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_index = 0;
	int s2_index = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	while (s1[s1_length] != '\0')
		s1_index++;

	while (s2_index < n && s2[s2_index] != '\0')
	{
		s1[s1_index] = s2[s2_index];
		s1_index++;
		s2_index++;
	}

	s1[s1_index] = '\0';

	p = malloc(s1_index);

	if (p == NULL)
		return (NULL);

	return (p);
}
