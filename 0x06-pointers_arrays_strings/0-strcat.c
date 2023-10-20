#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int p;
	int d;

	p = 0;
	while (dest[d] != '\0')
	{
		p++;
	}
	p = 0;
	while (src[d] != '\0')
	{
		dest[p] = src[d];
		p++;
		d++;
	}
	dest[p] = '\0';
	return (dest);
}
