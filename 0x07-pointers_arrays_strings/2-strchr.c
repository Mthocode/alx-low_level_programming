#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: strings
 * @c: string
 * Return: the correct string or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
