#include "main.h"

/**
 * rev_string - function with string
 * Description : string in rev
 * @s : string
 *return : void
 */

void rev_string(char *s)
{
	size_t length = strlen(s);
	size_t start = 0;
	size_t end = length - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

