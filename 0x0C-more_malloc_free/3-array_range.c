#include "main.h"
/**
* *array_range - function that allocat memory
* @max : max nub
* @min : min nub
*
* Return: a ptr to a string
*/
int *array_range(int min, int max)
{
	int *ptr;
	int element, i;

	if (min > max)
		return (NULL);
	element = max - min + 1;
	ptr = (int *)malloc(element * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < element; i++)
	{
		*ptr = min + i;
		ptr++;

	}
	return (ptr);
}

