#include "main.h"
/**
*print_to_98 - entry point
*
*Description : print to 98
* @n : variable
*
*Return: Always 0 (success)
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n ; n <= 98; n++)
		{
			if (n < 98)
				printf("%d, ", n);
			else
				printf("98\n");
		}
	}
	else
	{
		for (n ; n >= 98; n--)
		{
			if (n > 98)
				printf("%d, ", n);
			else
				printf("98\n");
		}
	}
}

