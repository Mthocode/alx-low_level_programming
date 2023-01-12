#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null
 * @dest: first string
 * @src: second string
 * Return: char
 */ 
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (l >= 0)
	{
		*(dest + l) = *(src + l);
		if (*(src + l) == '\0')
			break
		l++;
	}
	return (dest);
}
