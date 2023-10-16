#include "main.h"

/**
 * puts_half - function with string
 * Description : print string giving
 * @str : string
 *return : void
 */
void puts_half(char *str)
{
	char strp;
	size_t length, i, half;

	length = strlen(str);
	if (length == 0)
	{
		_putchar('\n');
	}
	else if (length % 2 == 0)
	{
		half = length / 2;
		for (i = half; i < length; i++)
		{
			strp = str[i];
			_putchar(strp);
		}
		_putchar('\n');
	}
	else
	{
		half = (length - 1) / 2;
		for (i = half + 1; i < length; i++)
		{
			strp = str[i];
			_putchar(strp);
		}
		_putchar('\n');
	}
}

