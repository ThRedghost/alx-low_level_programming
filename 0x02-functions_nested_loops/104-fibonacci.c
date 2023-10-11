#include "main.h"

/**
* main - Entry point of the program
*
* Description: Finds and prints the first 98 Fibonacci numbers
* Return: 0 (Success)
*/
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib_next;
	int count = 2;

	printf("%lu, %lu", fib1, fib2);
	while (count < 98)
	{
		fib_next = fib1 + fib2;
		printf(", %lu", fib_next);
		fib1 = fib2;
		fib2 = fib_next;
		count++;
	}
	printf("\n");
	return (0);
}

