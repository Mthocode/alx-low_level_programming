#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String
 * @accept: String to look for
 * Return: pointer to the byte in s that 
 * matches one of the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
				return (s);
		}
		s++;
	}
	return ('\0');
}
