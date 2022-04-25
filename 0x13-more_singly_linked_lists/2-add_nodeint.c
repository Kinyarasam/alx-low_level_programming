#include "lists.h"

/**
 * add_nodeint - adds a node at the begining of a listint_t list
 * @head: pointer to address of the list.
 * @n: integer
 *
 * Return: Address of new elment
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));

	if (!current)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;
	return (*head);
}
