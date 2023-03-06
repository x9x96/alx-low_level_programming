#include "main.h"

/**
* print_chessboard - output emulation of a chessboard
* @a: pointer
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	for (r = 0; a[r][7]; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
