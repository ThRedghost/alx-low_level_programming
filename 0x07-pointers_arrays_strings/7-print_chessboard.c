#include"main.h"
/**
* _strspn - function
* Discription : this function print element of array ass a chessboard
* @da the name of array
*
* return : void
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
//printf("%c", a[i][j]);
			putchar(a[i][j]);
		}

		putchar('\n');
	}

}

