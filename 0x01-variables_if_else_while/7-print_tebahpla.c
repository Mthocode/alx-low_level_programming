#include <stdio.h>
/**
 * main - Entry point
 * Discription: print alpherbet in revers
 * Return: Always 0 (success)
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);

		z--;
	}
	putchar('\n');

	return (0);
}
