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
char lw_alp;
char up_alp;

for (lw_alp = 'a'; lw_alp <= 'z'; lw_alp++)
{
putchar(lw_alp);
}
for (up_alp = 'A'; up_alp <= 'Z'; up_alp++)
{
putchar(up_alp);
}
putchar('\n');
return (0);
}
