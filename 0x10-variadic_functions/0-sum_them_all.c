#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of peramiters
 * @...: variables to be calculated
 * Return: returns the sum of all its parameters If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	i = 0;
	while (i < n)
		sum += va_arg(ap, int);

	va_end(ap);


	return (sum);
}
