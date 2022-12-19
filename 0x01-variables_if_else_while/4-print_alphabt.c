#include <stdio.h>
/**
 * main - Entry point
 * Discription: print the alphabet except q and e
 * Return: Alays 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}

		a++;
	}
	putchar('\n');

	return (0);
}
