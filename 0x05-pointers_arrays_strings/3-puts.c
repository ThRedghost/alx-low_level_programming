#include "main.h"
#include <ctype.h>

/**
 * _puts - function with string
 * Description : print string giving
 * @str : string
 *return : void
 */
void _puts(char *str)
{
	char strp;
	size_t length, i;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		strp = str[i];
		_putchar(strp);
	}
	_putchar('\n');
}

