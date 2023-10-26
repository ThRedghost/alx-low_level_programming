#include "main.h"
/**
 * is_palindrome - the function
 * Description : function that test if word is a palindrome
 * @s : the string
 * Return : void
*/
int is_palindrome(char *s)
{
    int i, len, index, stop;

    len = strlen(s);
    stop = len / 2;

    for (i = 0; i < stop; i++)
    {
        index = len - 1 - i;
        if (s[i] == s[index])
        {
            continue;
        }
        else
            return (0);
    }
    return (1);
}
int main(void)
{
    int temp = 197;
    int x;
    x = is_palindrome("");
    if (x == 0)
        printf("not palindrome\n");
    else
        printf("palindrome\n");
    return (0);
}