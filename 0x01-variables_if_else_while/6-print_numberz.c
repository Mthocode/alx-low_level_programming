#include <stdio.h>
/**
 * main - Entry point
 * Discription: print numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		putchar(num + '0');

		num++;
	}
	putchar('\n');

	return (0);
}
