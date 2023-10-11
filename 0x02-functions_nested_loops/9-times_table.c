#include "main.h"
/**
*times_table - entry point
*
*Description : print table of 9
*
*Return: Always 0 (success)
*/

void times_table(void)
{
	int row;
	int colum;
	int number;
	int fir_nb;
	int sec_nb;

	for (row = 0; row <= 9; row++)
	{
		for (colum = 0; colum <= 9; colum++)
		{
			number = row * colum;
			if (number >= 10)
			{
			fir_nb = number / 10;
			sec_nb = number % 10;
			_putchar('0' + fir_nb);
			_putchar('0' + sec_nb);
			}
			else if (number == 0 && colum == 0)
			{
				_putchar('0' + number);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + number);
			}
			if (colum != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}