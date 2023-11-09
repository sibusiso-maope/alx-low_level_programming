#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	current = *head;

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}

	new->next = current;

	if (current != NULL)
		current->prev = new;

	*head = new;

	return (new);
}
