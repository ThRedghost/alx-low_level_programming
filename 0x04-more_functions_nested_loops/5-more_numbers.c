#include "main.h"

/**
* more_numbers - entry point
*
*Description : print number from 0 to 14
*return : void
*/

void more_numbers(void)
{
	int i, j, nb1, nb2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			nb1 = j % 10;
			nb2 = j / 10;
			if (j >= 10)
				_putchar('0' + nb2);
			_putchar('0' + nb1);
		}
		_putchar('\n');
	}
}
