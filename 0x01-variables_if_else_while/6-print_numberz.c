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
int i;
for (i = 0; i <= 9; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}

