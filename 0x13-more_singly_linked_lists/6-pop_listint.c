#include "lists.h"

/**
 * int pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the linked list head
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodes = 0;

	if (head && *head)
	{
		temp = *head;
		nodes = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (nodes);
}
