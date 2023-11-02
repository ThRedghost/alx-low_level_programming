#include "main.h"
/**
* *_realloc - function that allocat new space in memory
*
* @ptr : the old memory pointer
* @old_size : size of old space
* @new_size : new size of memory
* Return: a ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *reptr;
	int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (NULL);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	reptr = (void *)malloc(new_size);

	if (reptr == NULL)
	{
		printf("fail to allocate \n");
		return (NULL);
	}

	if (reptr != NULL)
	{
		strcpy(reptr, ptr);

	}

	free(ptr);
	return (reptr);
}

