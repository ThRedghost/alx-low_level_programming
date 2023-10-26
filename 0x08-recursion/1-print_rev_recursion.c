#include "main.h"
/**
 * _puts_recursion - the function
 * Description : function that print a string
 * @s : string to print
 * Return : void
*/

void _print_rev_recursion(char *s)
{
    int i, len;

    len = strlen(s);

    for (i = (len - 1); i >= 0; i--)
    {
        putchar(s[i]);
    }
    putchar('\n');
    
}

int main(void)
{
    _puts_rev_recursion("salaheddine");
    return (0);
}