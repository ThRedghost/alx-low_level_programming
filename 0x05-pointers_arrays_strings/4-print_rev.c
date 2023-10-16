#include "main.h"

/**
 * print_rev - function with string
 * Description : print string in rev
 * @s : string
 *return : void
 */
void print_rev(char *s)
{
	char strp;
	size_t length, i;

	length = strlen(s);

	if (length == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = (length - 1); i > 0; i--)
		{
			strp = s[i];
			_putchar(strp);
		}
		strp = s[0];
		_putchar(strp);
		_putchar('\n');
	}
}

