#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: chessboard
 * Return: vooid
 */
void print_chessboard(char (*a)[8])
{
	int count1;
	int count2;

	for (count1 = 0; a[count1][7]; count1)
	{
		for (count2 = 0; count2 < 8; count2++)
			_putchar(a[count1][count2]);

		_putchar('\n');
	}
}
