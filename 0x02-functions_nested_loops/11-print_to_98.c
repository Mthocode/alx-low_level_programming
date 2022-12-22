#include "main.h"
/**
 * print_to_98 -  prints all natural numbers from
 * n to 98, followed by a new line
 * @n: Starting point
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf(n);
		printf(",");
		printf(" ");
		n++;
	}
}
