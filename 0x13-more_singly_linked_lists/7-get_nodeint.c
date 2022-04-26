#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to the head of a linked list
 * @index: index
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;
	}
	return (head);
}
