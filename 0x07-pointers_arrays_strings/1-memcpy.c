#include "main.h"
/**
* _memcpy - function copy set of memory
* @dest : striing 1
* @src : string 2
* @n : a number
* Return: value of difference dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		/* code */
		dest[i] = src[i];
	}
	return (dest);
}

