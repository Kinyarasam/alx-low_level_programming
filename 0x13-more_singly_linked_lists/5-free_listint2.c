#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the linked list head
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
	}
}
