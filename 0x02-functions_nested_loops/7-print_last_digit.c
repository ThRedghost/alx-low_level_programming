#include "main.h"
/**
*print_last_digit - entry point
*
*Description : print last digit of a number
* @nb : variable
*
*Return: Always 0 (success)
*/
int print_last_digit(int nb)
{
	int last_digit;
	
	last_digit = nb % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}