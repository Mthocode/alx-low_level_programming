#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @*str: string to be printed
 * Retuns: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putcher(*str++);
	}
	_putchar('\n');
}
