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
	char *str;
	int x;

	va_start(pa, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(pa, char *);
		if (str == NULL)
			printf("(nil)");
		else
			print("%s", str);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(pa);
}
