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
	char myNums[] = {'4', '3', '0', '1', '7'}
	int myIndex;

	while (arry[index] != '\0')
	{
		myIndex = 0;

		while (myIndex < 10)
		{
			if (arry[index] == myArray[myIndex] || arry[index] == myArray[5 + myIndex])
			{
				arry[index] = myNums[myIndex];
				myIndex = 10;
			}
			myIndex++;
		}

		index++;
	}

	return (arry);
}
