#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t
 * @str: string to put in the new node
 *
 * Return: address of the new element or NULL if unsuccessful
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old;
	unsigned int k, count = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (k = 0; str[k] != '\0'; k++)
		count++;
	new->len = count;
	new->next = NULL;
	old = *head;

	if (old == NULL)
		*head = new;
	else
	{
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}
	return (*head);
}
