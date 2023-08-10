#include <stdio.h>
/**
*main - entry point
*
*Description : programe give size of variable
*
*
*Return: Always 0 (success)
*/
int main(void)
{
	int schar = sizeof(char);
	int sint = sizeof(int);
	int slong = sizeof(long int);
	int sllong = sizeof(double);
	int sfloat = sizeof(float);

	printf("Size of a char: %d byte(s)\n", schar);
	printf("Size of an int: %d byte(s)\n", sint);
	printf("Size of a long int: %d byte(s)\n", slong);
	printf("Size of a long long int: %d byte(s)\n", sllong);
	printf("Size of a float: %d byte(s)\n", sfloat);
	return (0);
}
