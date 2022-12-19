#include <stdio.h>
/**
 * main - Entry point
 * Discription: print alphabets from lowerc cas to uprt case
 * Return: Alwayse 0 (success)
 */
int main(void)
{
	char a = 'a';

	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
