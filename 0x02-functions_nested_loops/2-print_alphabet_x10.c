#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i <= 10; i++)
	{
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}

		putchar('\n');
	}
}

