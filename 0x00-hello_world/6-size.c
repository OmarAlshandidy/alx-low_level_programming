#include <stdio.h>


/**
 * main - Entry point
 * Description: print size
 * Return: Always 0
 *
 */


int main(void)
{
	printf("Size of a char: %zu \n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu\n", sizeof(long int));
	printf("Size of a long long int: %d\n", sizeof(long long int));
	printf("Size of a float: %zu \n", sizeof(float));
	return (0);
}
