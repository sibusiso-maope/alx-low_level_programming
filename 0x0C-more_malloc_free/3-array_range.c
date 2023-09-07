#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum number in the array
 * @max: maximum number in the array
 *
 * Return: new allocated memory
 */

int *array_range(int min, int max)
{
	int *result;
	int size;
	int k;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	for (k = 0; min <= max; k++)
		result[k] = min++;
	return (result);
}
