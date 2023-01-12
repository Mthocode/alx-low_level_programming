#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: integes
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		a++;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[i] = src[j];
		a++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
