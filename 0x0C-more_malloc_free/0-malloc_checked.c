#include "main.h"
/**
* main - entry point
* Description :
*
* Write a function that allocates memory using malloc.
*
* Prototype: void *malloc_checked(unsigned int b);
*
* Returns a pointer to the allocated memory
*
* if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
*
*
* Return: 0
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void*) malloc(b);
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

