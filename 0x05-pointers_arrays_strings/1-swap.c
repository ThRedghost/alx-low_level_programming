#include "main.h"
/**
 * swap_int - swipe the valuue of two integer
 * Description : function swipe value
 * @a : integer n 1
 * @b : integer n 2
 *Return : void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

