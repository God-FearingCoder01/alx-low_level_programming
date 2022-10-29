#include "main.h"

/**
 * leet - encode a string into 1337
 * @arry: string to be encoded
 * Return: encoded string `s`
 */

char *leet(char *arry)
{
	int index = 0;
	char myArry[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int myIndex;

	while (arry[index] != '\0')
	{
		myIndex = 0;

		while (arry[index] != myArray[myIndex] && myIndex < 10)
			myIndex++;

		if (myIndex > 9)
			;
		else if (myIndex > 7)
			arry[index] = 49;
		else if (myIndex > 5)
			arry[index] = 55;
		else if (myIndex > 3)
			arry[index] = 48;
		else if (myIndex > 1)
			arry[index] = 51;
		else
			arry[index] = 52;

		index++;
	}

	return (arry);
}
