#include "main.h"
/**
 * print_alphabet - tntry point
 * Discription: print alphabet in low case
 * Return: Always 0 .
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

	return;
}

