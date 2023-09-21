#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in the linked list
 * @h: a pointer to list_t
 *
 * Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}

