#include "main.h"
/**
 * _puts_recursion - the function
 * Description : function that print a string
 * @s : string to print
 * Return : void
*/

void _puts_recursion(char *s)
{
    int i, len;

    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        putchar(s[i]);
    }
    putchar('\n');
    
}

int main(void)
{
    _puts_recursion("salaheddine");
    return (0);
}