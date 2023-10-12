#include "main.h"

/**
*print_most_numbers - entry point
*
*Description : print number from 0 to 9 exept 2 and 4
*
*return : void
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
