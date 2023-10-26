#include "main.h"
/**
 * _puts_recursion - the function
 * Description : function that print a string
 * @s : string to print
 * Return : void
*/
int _strlen_recursion(char *s)
{
    int len = 0, i = 0;

    while (s[i] != '\0')
    {
        len++;
        i++;
    }
    return (len);
}
int main(void)
{
    int temp;
    temp = _strlen_recursion("salah eddine");
    printf("string len is : %d\n", temp);
    return (0);
}