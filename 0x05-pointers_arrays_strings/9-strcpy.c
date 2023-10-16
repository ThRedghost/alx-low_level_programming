#include "main.h"

/**
 * _strcpy - function with string
 * Description : print string giving
 * @src : string
 * @dest : string
 * Return: Always 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';

	return (ptr);
}

