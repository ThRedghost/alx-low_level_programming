#include "main.h"
/**
* *string_nconcat - function that allocat memory and put a two string in
* it 
* @*s1 : first string
* @*s2 : second string
* @n : number
*Return : a ptr
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_alloc;
	unsigned int len,  i, len2;

    //the check
	if (s1 == NULL) strcpy(s1, "");
	if (s2 == NULL) strcpy(s2, "");
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
		strcpy(s1, "");
	}
	len = strlen(s1) + strlen(s2) + 1;

	ptr_alloc = (char*)malloc(len * sizeof(char));

	if (ptr_alloc != NULL)
	{
		strcpy(ptr_alloc, s1);
		strncat(ptr_alloc, s2, n);
		strcat(ptr_alloc, "\0");
		printf("ptr not null\n");
	}
	else
	{
		printf("fail to allocate memoery\n");
		free(ptr_alloc);
		return(NULL);
	}
	return(ptr_alloc);
}

