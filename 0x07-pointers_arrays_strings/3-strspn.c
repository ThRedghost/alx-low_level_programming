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
unsigned int _strspn(char *s, char *accept)
{
	int len1, len2, i, j;
	unsigned int leng = 0;

	len1 = strlen(s);
	len2 = strlen(accept);
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				leng++;
				break;
			}
			else
			{
				if (j == (len2 - 1))
				{
					return (leng);
				}
				continue;

			}
            
		}
        
	}


	return (leng);
}

