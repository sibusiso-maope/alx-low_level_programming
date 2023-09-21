#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to list_t
 * @str: new string to add to the node
 *
 * Return: address to the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int k = 0;

	while (str[k])
		k++;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = k;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
