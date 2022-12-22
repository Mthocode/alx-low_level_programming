#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from
 * n to 98, followed by a new line
 * @n: Starting point
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");

		if (n == 98)
			printf("%d", n);
		print("\n");
		n++;
	}
}
