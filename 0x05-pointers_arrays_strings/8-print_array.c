#include "main.h"

/**
 * print_array - function with array
 * Description : prin array giving
 * @a : array
 * @n : size of arary
 *return : void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n && i != (n - 1))
			printf(", ");
	}
	printf("\n");
}

