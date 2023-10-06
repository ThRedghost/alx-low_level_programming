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
int first;
int second;
int third;
int fourth;
int i;
int j;

	for (i = 0; i <= 99; i++)
	{
		first = i / 10;
		second = i % 10;
		for (j = i; j <= 99; j++)
		{
			third = j / 10;
			fourth = j % 10;
			putchar('0' + first);
			putchar('0' + second);
			putchar(' ');
			putchar('0' + third);
			putchar('0' + fourth);
			if (!(i == 99 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
