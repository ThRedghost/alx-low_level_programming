#include "main.h"
/**
*print_alphabet - entry point
*
*Description : it print lettre
*
*
*Return: Always 0 (success)
*/
int print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		_putchar(lettre);
	}
	_putchar('\n');
	return (0);
}