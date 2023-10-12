#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*
*Description : fizzbuzz game
*
*Return: Always 0 (success)
*/
int main(void)
{
	int nb;

	for (nb = 1; nb <= 100; nb++)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			printf("FizzBuzz");
		else if (nb % 5 == 0)
			printf("Buzz");
		else if (nb % 3 == 0)
			printf("Fizz");
		else
			printf("%d", nb);
		if (nb != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
