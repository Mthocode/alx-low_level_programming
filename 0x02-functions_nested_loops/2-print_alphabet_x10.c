#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 10;
	int i = 0;

	while (i <= count)
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

