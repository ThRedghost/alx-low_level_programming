#include "main.h"

/**
*print_square - entry point
*
*Description : print number from 0 to 14
*@size : the longht and the deept of the square
*return : void
*/
void print_square(int size)
{
	int colum, row;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (colum = 0; colum < size; colum++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
