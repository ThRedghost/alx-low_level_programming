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
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}