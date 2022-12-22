#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num_1, num_2, prod;

	for (num_1 = 0; num_1 <= 9; num_1++)
	{
		
		for (num_2 = 0; num_2 <= 9; num_2++)
		{
			prod = num_1 * num_2;

			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (num_2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
