#include "main.h"
/**
*print_last_digit - entry point
*
*Description : print last digit of a number
* @nb : variable
*
*Return: Always 0 (success)
*/
#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}

