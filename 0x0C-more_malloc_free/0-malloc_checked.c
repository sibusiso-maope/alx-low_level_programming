#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: Pointer to new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	else
		return (result);
}
