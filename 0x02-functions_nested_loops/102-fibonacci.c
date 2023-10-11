#include "main.h"

/**
* main - Entry point of the program
*
* Description: Prints the first 50 Fibonacci numbers
* Return: 0 (Success)
*/
int main(void)
{
	int count = 50;
	unsigned long long fib1 = 1, fib2 = 2;
	int i;

	printf("%llu, %llu", fib1, fib2);

	for (i = 3; i <= count; i++)
	{
		unsigned long long next = fib1 + fib2;

		printf(", %llu", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return (0);
}

