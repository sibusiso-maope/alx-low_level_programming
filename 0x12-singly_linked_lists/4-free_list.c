#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked list
 * @head: list_t to be freed
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
