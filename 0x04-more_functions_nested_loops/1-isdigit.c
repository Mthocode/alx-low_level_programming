#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: digit
 * Return: returns 1 or 0
 */
int _isdigit(int c)
{
	while (c <= 9)
	{
        	if (c >= 0 && c <= 9)
                	return (1);
        	else
                	return (0);
		c++;
	}
}
