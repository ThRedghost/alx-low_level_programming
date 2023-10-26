#include "main.h"
/**
 * _pow_recursion - the function
 * Description : function that return the power of an number
 * @x : number
 * @y : the power
 * Return : result
*/

int _pow_recursion2_0(int x, int y)
{
    int result = 1, i;
    if ( y < 0)
    {
        return (-1);
    }
    for (i = y; i > 0; i--)
    {
        result *= x;
    }
    return (result);
}
int _pow_recursion(int x, int y)
{
    int result;
    if ( y < 0)
    {
        return (-1);
    }
    else if (y == 1)
    {
        return (x);
    }
    result = x * _pow_recursion(x, (y - 1));

    return (result);
}
int main(void)
{
    long temp;
    int x = 2, y = 5;
    temp = _pow_recursion(x, y);
    printf("%d of the power of %d is = %d\n", x, y, temp);
    return (0);
}
