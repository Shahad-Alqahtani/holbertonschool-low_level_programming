#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard array
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	row = 0;

	while (row < 8)
	{
		col = 0;

		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}

		_putchar('\n');
		row++;
	}
}
