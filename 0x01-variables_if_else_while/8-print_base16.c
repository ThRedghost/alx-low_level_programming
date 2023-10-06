#include <stdio.h>
/**
*main - entry point
*
*Description : using programe with printg
*
*
*Return: Always 0 (success)
*/
int main(void)
{
char digits[] = "0123456789abcdef";
int i;

for (i = 0; i < 16; i++)
{
putchar(digits[i]);
}
putchar('\n');
return (0);
}