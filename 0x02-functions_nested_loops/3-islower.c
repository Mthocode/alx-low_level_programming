#Include "main.h"
/**
 * _islower -  checks for lowercase character
 * @c: the character
 * Return: 1 if the character is lower case and 0 if the character is uper case
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
