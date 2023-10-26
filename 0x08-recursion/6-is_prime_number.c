#include "main.h"
/**
 * is_prime_number - the function
 * Description : function that test prime number
 * @n : the number
 * Return : void
*/
int is_prime_number_1(int n)
{
    int i = 2, temp, test;
    while (i < n)
    {
        test = n % i;
        printf(" test :  n= %d and i= %d, result= %d\n", n, i, test);
        if (n % i == 0)
        {
            return (0);
        }
        i++;    
    }
    return (1);
}
int is_prime_number(int n)
{
    int i = 2, temp, test;
    int stop = sqrt(n);
    while (i < stop)
    {
        test = n % i;
        printf(" test :  n= %d and i= %d, result= %d\n", n, i, test);
        if (n % i == 0)
        {
            return (0);
        }
        i++;    
    }
    return (1);
}

int main(void)
{
    int temp = 197;
    int x;
    x = is_prime_number(temp);
    if (x == 0)
        printf("not prime\n");
    else
        printf("prime\n");
    return (0);
}

