#include "main.h"

/**
 * print_number - Prints an integer
 * Description : print integers
 * @n: The integer to be printed
 * Return : void
 */
int countDigits(int number)
{
	int count = 0;

	if (number == 0)
	{
		count = 1;
	}
	while (number != 0)
	{
		number /= 10;
		count++;
	}

	return count;
}
void print_number(int n)
{
	int sizenb, onedig, i, bigten;

	sizenb = countdigits(n);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	for(i = 0; i <= sizenb; i++)
	{

		if (n / 10 != 0)
		{
			onedig = n / 10;
			_putchar('0' + onedig);
		}
		bigten = n % 10;
		_putchar('0' + n % 10);
	}
}
