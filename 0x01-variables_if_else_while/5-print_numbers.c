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
int number = 10;
int i;

for (i = 0; i <= 9; i++)
{
number %= 10;
printf("%d", number);
number++;
}
putchar('\n');
return (0);
}