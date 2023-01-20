#include "main.h"
/**
 * print_diagsums - prints the sum of the two
 *  diagonals of a square matrix of integers
 *  @a: integer
 *  @size: size of int
 *  Return: void
 */
void print_diagsums(int *a, int size)
{
	int index;
	int sum1 = 0;
	int sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
