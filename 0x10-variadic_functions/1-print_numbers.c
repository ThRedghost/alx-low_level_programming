#include "variadic_functions.h"

/**
 * print_numbers - function print numbers
 * @separator : the string to seperat
 * @n : arguments
 *
 * Retrun: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (separator == NULL)
	{
		va_end(args);
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

