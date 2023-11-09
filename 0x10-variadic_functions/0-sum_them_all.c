#include "variadic_functions.h"

/**
 * sum_them_all - function return sum of number passed
 * @n : numbers of argument;
 * Return: the sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum = 0;
	unsigned int i;

	va_start(numbers, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int num;

		num = va_arg(numbers, int);
		sum += num;
	}
	return (sum);
}

