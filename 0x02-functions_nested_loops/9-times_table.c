#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num_1, num_2;

	for (num = 0; num <= 10; num++)
	{
		num_2 = 0;

		while (num_2 < 10)
		{
			_putchar(num_2);
			_putchar(',');
			_putchar(' ');

			num_2++;
		}

		_putchar('\n');
	}
}
