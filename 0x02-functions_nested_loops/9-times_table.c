#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num_1, num_2;
	int multiplier;

	for (num_1 = 0; num_1 < 10; num_1++)
	{
		num_2 = 0;

		while (num_2 < 10)
		{
			multiplier = num_1 * num_2;

			if (multiplier <= 9)
			{
				if (num_2 != 9)
				{
					_putchar(multiplier + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(multiplier + '0');
			}
			else
			{
				if (num_2 != 9)
				{
					_putchar((multiplier / 10) + '0');
					_putchar((multiplier % 10) + '0');
					_putchar(',');
				}
				else
				{
					_putchar((multiplier / 10) + '0');
					_putchar((multiplier % 10) + '0');
				}
			}

			num_2++;
		}

		_putchar('\n');
	}
}
