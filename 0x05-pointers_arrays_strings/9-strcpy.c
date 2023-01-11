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

	while (*(src + l) != '0')
	{
		*(dest + l) = *(src + l);
		l++;
	}

	*(dest + l) = '\0';
	return (dest);
}
