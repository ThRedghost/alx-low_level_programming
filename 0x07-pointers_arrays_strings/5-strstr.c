#include"main.h"
/**
* _strspn - function
* Discription : this function scan every character of s with caracter of accept from the begining until it
* count eather a null character ("end of string") or count a character that dosent exinst in s . 
* @s : striing 1 
* @accept : string 2 
*
* return : value of difference
*/
char *_strstr(char *haystack, char *needle)
{
	int len1, len2, i, ref, j = 0;


	len1 = strlen(haystack);
	len2 = strlen(needle);


	for (i = 0; i < len1; i++)
	{
		if (needle[j] == haystack[i])
		{
			ref = i;
			while (needle[j] == haystack[i])
			{
				if (j == (len2 - 1))
				{
					return (&haystack[ref]);
				}
				j++;
				i++;
			}
			return (NULL);
		}
		else
		{
			if (j == (len2 - 1))
			{
				return (NULL);
			}

		}
	}

}

