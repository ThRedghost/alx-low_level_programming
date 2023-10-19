#include "main.h"
/**
* string_toupper - function
* Description : function upper letter
* @a : the array
*
*
*Return: value returned
*/

char *string_toupper(char *a)
{
	int i, len;

	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		else
		{
			continue;
		}
	}
	return (a);
}

