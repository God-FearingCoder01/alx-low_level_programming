
/**
 * _isdigit - check for a digit (0 through 9)
 * @c: the character to be chacked if is a digit
 *
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
	}

	return (0);
}
