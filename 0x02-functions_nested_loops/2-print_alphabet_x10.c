#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		i++;
	}
}

