#include <stdio.h>
/**
 * main - print
 *
 *
 * Return: 0 sucees
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	a[2] = 98;
/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

