#include <stdio.h>
#include <math.h>
/**
 *largestPrimeFactor - calculer the l prime number
 *description : calculer le nombre prime
 *@n : the  number
 *Return: Always 0 (success)
 */

long largestPrimeFactor(long n)
{
	long largestFactor = 0;

	while (n % 2 == 0)
	{
		largestFactor = 2;
		n = n / 2;
	}

	long i;

	for (i = 3; i <= (n ^ (1 / 2)); i = i + 2)
	{
		while (n % i == 0)
		{
			largestFactor = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		largestFactor = n;
	}
	return (largestFactor);
}
/**
 * main - entry point
 * Description : entry point
 *Return: Always 0 (success)
 */

int main(void)
{
	long number = 612852475143;
	long largestFactor = largestPrimeFactor(number);

	printf("%ld\n", largestFactor);

	return (0);
}
