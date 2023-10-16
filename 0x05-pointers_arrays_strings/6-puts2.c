#include "main.h"

/**
 * puts2 - function with string
 * Description : print string giving
 * @str : string
 *return : void
 */
void puts2(char *str)
{
	char strp;
	size_t length, i;

	length = strlen(str);
	for (i = 0; i < length; i += 2)
	{
		strp = str[i];
		_putchar(strp);
	}
	_putchar('\n');
}

