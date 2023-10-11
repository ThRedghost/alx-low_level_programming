#include "main.h"

/**
*main - entry point
*
*Description : print message error putchar
*
*
*Return: Always 0 (success)
*/
int main(void)
{
	char array [] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(array[i]);

	_putchar('\n');
	return (0);
}