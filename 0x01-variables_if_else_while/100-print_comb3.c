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
int n;
int b = 1;

for (n = 0; n < 9; n++)
{
	for (b = n; b <= 9; b++)
	{
		if (b != n)
		{
			putchar('0' + num_1[n]);
			putchar('0' + num_2[b]);
			if (n != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}