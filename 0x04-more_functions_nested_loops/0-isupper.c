#include "main.h"

/**
 * _isupper - main entry
 * Description : check if the charactyer is uooer case
 *@c : the character to check
 *Return: 1 if it a character and  0 if it not
 */
int _isupper(int c)
{
	int check;

	check = isupper(c);
	if (check != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
