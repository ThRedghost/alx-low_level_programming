#include "main.h"

/**
*print_numbers - entry point
*
*Description : print number from 0 to 9
*
*
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
