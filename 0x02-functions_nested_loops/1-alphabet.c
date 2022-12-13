#include "main.h"
/**
 * main - main block
 * Discription: print alpherbet in low case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter < 'z')
	{
		_printchar(letter);
		letter++;
	}

	_printchar('\n');

	return (0);
}

