#include "main.h"

/**
*_putchar - entry point
*
*Description : using programe with putchar
* @c : variable
*
*Return: Always 0 (success)
*/

int _putchar(char c)
{
        return (write(1, &c, 1));
}
