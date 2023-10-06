#include <stdio.h>
/**
*main - entry point
*
*Description : using programe with putchare
*
*
*Return: Always 0 (success)
*/
int main(void)
{
	char lw_alp;

	for (lw_alp = 'a'; lw_alp <= 'z'; lw_alp++)
	{
	putchar(lw_alp);
	}
	putchar('\n');
	return (0);
}