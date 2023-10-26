#include "main.h"
/**
 * _puts_recursion - the function
 * Description : function that print a string
 * @s : string to print
 * Return : void
*/
int _sqrt_recursion(int n)
{
    int temp, test;
    float result = n;
    float presicion = 0.00001;

    while (((result * result) - n) > presicion)
    {
        result = (result + n / result) / 2;
        printf("the result is %f\n", result);
    }
    temp = result * 100;
    //printf("temp is = %d\n", temp);
    //result = temp / 100;
    //printf("result is %f\n", result);
    //temp = result;
    //printf("the new temp is %d\n", temp);
    //test = temp % 10;
    //printf("test is %d\n", test);
    if (temp % 10 != 0)
    {
        return(-1);
    }
    return (result);
}
int main(void)
{
    long temp;
    int x = 16, y = 5;
    temp = _sqrt_recursion(x);
    printf("th squar root of %d is = %d\n", x, temp);
    return (0);
}