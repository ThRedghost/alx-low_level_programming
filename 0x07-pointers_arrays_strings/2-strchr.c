#include "main.h"
/**
* _strchr - function  search fora char
* @s : striing 1
* @c : string 2
*
* Return: value of difference
*/

char *_strchr(char *s, char c)
{
	int len = 0, i = 0;


	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

	}

	return (NULL);
}

