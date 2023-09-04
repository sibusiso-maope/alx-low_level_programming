#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **two_d;

	int k, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_d = malloc(sizeof(int *) * height);

	if (two_d == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		two_d[k] = malloc(sizeof(int) * width);

		if (two_d[k] == NULL)
		{
			for (; k >= 0; k--)
				free(two_d[k]);

			free(two_d);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			two_d[k][l] = 0;
	}
	return (two_d);
}
