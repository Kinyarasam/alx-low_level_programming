#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head pointer
 * @n: integer
 *
 * Return: new node.
 */
dlistint_t *add_dnodeint_node(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	/*
	 * new->next = NULL;
	 */

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
		
	tmp->next = new;
	new->prev = tmp;
	new->next = NULL;

	return (new);
}
