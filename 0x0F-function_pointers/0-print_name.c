#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function print name
 *
 * @name: name to print
 * @f: the pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

