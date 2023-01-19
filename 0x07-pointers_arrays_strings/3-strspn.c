#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s:String
 * @accept: string
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
	}
	return (i);
}
