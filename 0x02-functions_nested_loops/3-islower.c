#include "main.h"
/**
*_islower - entry point
* @c : the character
*Description :
*check lower case
*
*Return: Always 0 (success)
*/
int _islower(int c)
{
	int check;

	check = islower(c);
	if (check != 0)
		return (1);
	else
		return (0);
}

