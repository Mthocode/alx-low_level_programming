#include <stdio.h>
/**
 * main - entry ppoint
 * Discription: hexadecimal
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	char a = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
