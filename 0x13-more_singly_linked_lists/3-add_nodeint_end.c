#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint_end - add elements at the end of a linked list
 * @head: pointer to the head of the list
 * @n: number of elements
 *
 * Return: Address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *len;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		len = *head;
		while (len->next != NULL)
		{
			len = len->next;
		}
		len->next = newNode;
	}
	return (newNode);
}

