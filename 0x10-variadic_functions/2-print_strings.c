#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed.
 * @n: number of integers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	int x;

	va_start(pa, n);

	for (x = 0; x < n; x++)
		printf("%s", va_arg(pa, char));

	printf("\n");

	va_end(pa);
}
