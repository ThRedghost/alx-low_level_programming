#include "variadic_functions.h"

/**
 * print_strings - function print string
 * @separator : the string to seperat
 * @n : arguments
 *
 * Retrun: nothing
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s_args;
	unsigned int i;

	va_start(s_args, n);
	if (separator == NULL)
	{
		va_end(s_args);
		return;
	}

	for (i = 0; i < n; i++)
	{
		const char *strg;

		strg = va_arg(s_args, const char*);
		if (strg != NULL)
			printf("%s", strg);
		else
			printf("(nil)");

		if (i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(s_args);
}

