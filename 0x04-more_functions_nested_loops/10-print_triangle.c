#include "main.h"

/**
*print_triangle - entry point
*
*Description : print a# triangle
*@size : size of triangle
*return : void
*/
void print_triangle(int size)
{
	int row, ch, position, sp;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			position = size - row;
			for (sp = 1; sp <= position; sp++)
			{
				_putchar(' ');
			}
			for (ch = position; ch < size; ch++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
