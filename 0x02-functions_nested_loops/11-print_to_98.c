#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from
 * n to 98, followed by a new line
 * @n: Starting point
 */
void print_to_98(int n)
{
	int sumNum = 0;

	if (n > 98)
	{
		while (sumNum < 13)
		{
			printf("%d", n);
			sumNum++;
		}
		printf("%d", 98);
	}

	while (n <= 98)
	{
		if (n != 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
		else
			printf("%d", n);

		n++;
	}
	printf("\n");
}
