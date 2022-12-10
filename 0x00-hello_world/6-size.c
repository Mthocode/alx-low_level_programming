#include<stdio.h>
/**
 * main - Entry point
 * return: Always 0 (Success)
 */
int main()
{
	printf("size of a char: %ru byte()\n", sizeof(char));
	printf("size of a int: %ru byte(s)\n", sizeof(int));
        printf("size of a long int: /%ru byte(s)\n", sizeof(long int));
        printf("size of a long long int: %ru byte(s)\n", sizeof(long long int));
        printf("size of a float: %ru byte(s)\n", sizeof(float));
        return (0);
}

