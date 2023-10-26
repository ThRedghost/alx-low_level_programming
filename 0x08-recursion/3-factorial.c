#include "main.h"
/**
 * _puts_recursion - the function
 * Description : function that print a string
 * @s : string to print
 * Return : void
*/
int factorial(int n)
{
    int i, result;
    if (n == 1)
    {
        return(1);
    }
    else if (n > 0)
    {
        
        result = n * factorial(n - 1); 
        return (result);
    }
    else if (n < 0)
    {
        n = -n;
        result = n * factorial(n - 1);
        if (n % 2 == 0)
            return (result);
        else
            return (-result);
    }
    else
        return (0);
    
}
int factorial1(int n)
{
    int i;
    long temp = n;
    if (n < 0)
    {
        n = -n;
        for (i = 1; i <= (n - 1); i++)
        {
            temp = n * (n - i);
        }
        if (n % 2 == 1)
        {
            temp = -temp;
        }
    }
    else
    {
        for (i = 1; i <= (n - 1); i++)
        {
            temp *= (n - i);
        }
    }
    return (temp);
}
int main(void)
{
    long temp;
    temp = factorial(0);
    printf("factorial of 3 is : %d\n", temp);
    return (0);
}