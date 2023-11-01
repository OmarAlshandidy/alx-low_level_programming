#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **mm;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	mm = (int **) malloc(sizeof(int *) * height);

	if (mm == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mm[i] = (int *) malloc(sizeof(int) * width);
		if (mm[i] == NULL)
		{
			free(mm);
			for (j = 0; j <= i; j++)
				free(mm[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mm[i][j] = 0;
		}
	}
	return (mm);
}
