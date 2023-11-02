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
	printf("fail to allocat memory\n");
	free(ptr);
	exit(98);
	}
	if (ptr != NULL)
		printf("allocated memory succesfully\n");

	return (ptr);
}

