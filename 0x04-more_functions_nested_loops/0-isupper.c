#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to be tested
 * Return: returns 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'z')
{
	return (1);
}

else
{
	return (0);
}
}
