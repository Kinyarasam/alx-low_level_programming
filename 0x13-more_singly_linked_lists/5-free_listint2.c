#include "lists.h"

/**
 * free_listint2 - frees a linked listint_t list
 * @head: pointer to linked list head
 *
 * Return:nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
}
