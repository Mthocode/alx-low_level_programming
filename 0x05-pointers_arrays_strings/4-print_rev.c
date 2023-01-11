#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int strleng = 0;

	while (*s != '\0')
	{
		strleng++;
	}

	while (strleng != 0)
	{
		_putchar(s[strleng]);
		strleng--;
	}
	_putchar('\n');
}
