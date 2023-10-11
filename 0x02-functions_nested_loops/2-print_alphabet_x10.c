#include "main.h"
/**
*print_alphabet_x10- entry point
*
*Description : print alphabet x10 time
*
*
*Return: Always 0 (success)
*/
int print_alphabet_x10(void)
{
	int i;
	char lettre;

	for (i = 0; i <= 9; i++)
	{
		for (lettre = 'a'; lettre <= 'z'; lettre++)
			_putchar(lettre);
		_putchar('\n');
	}
	return (0);
}