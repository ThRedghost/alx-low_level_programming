#include "main.h"
/**
* *string_nconcat - function that allocat memory and put a two string in
* it 
* @*s1 : first string
* @*s2 : second string
* @n : number
*Return : a ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	//the check
	if (nmemb == 0 || size == 0) return(NULL);

	ptr = (void*)malloc(nmemb * size);
	if (ptr == NULL) return(NULL);

	return(ptr);
}

