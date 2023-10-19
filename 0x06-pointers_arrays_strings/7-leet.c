#include "main.h"
/**
* leet - function
* Description : function capital word
* @a : the array
*
*
*Return: value returned
*/

char *leet(char *a)
{
	int len, i, j;

	char lettre[] = {'a', 'e', 'o', 't', 'l'};
	char lettrup[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == lettre[j] || a[i] == lettrup[j])
			{
				a[i] = num[j];
			}
		}
	}
	return (a);
}

