#include "main.h"
/**
* *malloc_checked - function allocat memory
*@b : byte to allocate
* Return: 0
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *) malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}

	return (ptr);
}

