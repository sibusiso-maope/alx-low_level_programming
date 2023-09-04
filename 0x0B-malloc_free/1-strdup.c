#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)		
{
	char *arr;
	int k, l = 0;

	if (str == NULL)
		return (NULL);

	k = 0;

	while (str[k] != '\0')
		k++;

	arr = malloc(sizeof(char) * (k + 1));

	if (arr == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
		arr[l] = str[l];
	return (arr);
}
