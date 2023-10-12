#include "main.h"

/**
* print_line - entry point
*
*Description : print number from 0 to 14
*@n : long of the line
*return : void
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
