#include "main.h"
/**
 *_isalpha - entry point
 * @c : the carachter
 *Description : check if we have a alphabet
 *return 0 if not alpha
 * and 1 if is an alpha
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	int check;

	check = isalpha(c);
	if (check != 0)
		return (1);
	else
		return (0);
}

