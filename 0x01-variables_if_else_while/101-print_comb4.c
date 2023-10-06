#include <stdio.h>
/**
*main - entry point
*
*Description : using programe with putchar
*
*
*Return: Always 0 (success)
*/
int main(void)
{
int num_1 [] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int num_2 [] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int num_3 [] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int n;
int b = 1;
int r;

for (n = 0; n < 9; n++)
{
	for (b = n; b <= 9; b++)
	{
		for (r = b; r <= 9; r++)
		{

			if (b != n && r != n && b != r)
			{
				putchar('0' + num_1[n]);
				putchar('0' + num_2[b]);
				putchar('0' + num_3[r]);
				if (n != 7 || b != 8 || r != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}