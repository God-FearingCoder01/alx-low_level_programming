
/**
 * _isupper - chacks for uppercase character.
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
