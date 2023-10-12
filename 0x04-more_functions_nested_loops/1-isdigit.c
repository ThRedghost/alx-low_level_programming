#include "main.h"

/**
 * _isdigit - main entry
 * Description : check if the int is digit
 *@c : the character to check
 *Return: 1 if it a character and  0 if it not
 */
int _isdigit(int c)
{
	int check;

	check = isdigit(c);
	if (check != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
