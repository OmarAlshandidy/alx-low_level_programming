#include <stdlib.h>
#include "main.h"


/**
 * create_array - a program that creates a dynamic memory allocation
 * filled with a specific character c .
 * @size : size of an array.
 * @c: character.
 * Return: pointer to the Array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	j = (char *) malloc(sizeof(char) * size);

	if (j == NULL)
		return (0);

	while (i < size)
	{
		*(j + i) = c;
		i++;
	}

	*(j + i) = '\0';

	return (j);
}
