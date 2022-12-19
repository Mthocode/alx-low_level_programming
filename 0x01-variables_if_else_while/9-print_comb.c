#include <stdio.h>
/**
 * main - Entry point
 * Discription: number separated list
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		if (num == 9)
		{
			putchar(num + '0');
		}
		else
		{
			putchar(num + '0');
			putchar(',');
			putchar(' ');
		}

		num++;
	}
	putchar('\n');

	return (0);
}
