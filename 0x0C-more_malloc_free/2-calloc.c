#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocat memory for an array using calloc
 * @nmemb: number of array content
 * @size: size of array
 *
 * Return: Pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
