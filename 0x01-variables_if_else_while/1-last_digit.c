#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*main - entry point
*
*Description : using programe ti print last digit
*
*
*Return: Always 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lt_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lt_dig = n % 10;
	if (lt_dig > 5)
	{
		printf("Last digit of %d", n);
		printf(" is %d and is greater than 5\n", lt_dig);
	}
	else if (lt_dig == 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d and is 0\n", lt_dig);
	}
	else
	{
		printf("Last digit of %d", n);
		printf(" is %d and is less than 6 and not 0\n", lt_dig);
	}
return (0);
}