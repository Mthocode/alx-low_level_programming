#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int strleng = strlen(*s);

	while (*s != '\0')
	{
		_putchar(*s[strleng--]);
	}
	_putchar('\n');
}
