#include "main.h"
/**
 * wildcmp - the function
 * Description : function that test if word is a palindrome
 * @s1 : string1
 * @s2 : string2
 * Return : void
*/
int wildcmp(char *s1, char *s2)
{
    int i, len1, len2, index, stop;

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 != len2)
    {
        return (0);
    }

    for (i = 0; i < len1; i++)
    {
        index = len1 - 1 - i;
        if (s1[i] == s2[i] || s2[i] == '*')
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
    int x;
    char t1[10] = "salah";
    char t2[10] = "sala*";
    x = wildcmp(t1, t2);
    if (x == 0)
        printf("not identical\n");
    else
        printf("identical\n");
    return (0);
}