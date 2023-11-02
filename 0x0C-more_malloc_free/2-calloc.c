#include "main.h"
/**
* *_calloc - function that allocat memory
* @nmemb : first int
* @size : second int
* Return: pointer to the resulting string
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}

