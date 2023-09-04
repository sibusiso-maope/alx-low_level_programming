#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int k;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		arr[k] = c;
	return (arr);
}
