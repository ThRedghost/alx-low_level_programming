#include "main.h"
/**
*print_sign - entry point
*
*Description :test the sign of a number
* @n : variable
*
*Return: Always 0 (success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

