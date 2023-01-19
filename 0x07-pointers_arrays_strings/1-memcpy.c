#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: sourc string
 * @src: string
 * @n: integer
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i = 0;

		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
}
