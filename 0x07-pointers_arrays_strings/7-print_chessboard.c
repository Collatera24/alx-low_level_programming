#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
