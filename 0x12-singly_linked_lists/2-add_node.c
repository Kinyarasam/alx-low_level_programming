#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the linked list.
 * @str: string to store in the linked list.
 *
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead;
	size_t nodePtr;

	newHead = malloc(sizeof(list_t));
	if (newHead == NULL)
		return NULL;

	newHead->str = strdup(str);

	for (nodePtr = 0; str[nodePtr]; nodePtr++)
		;

	newHead->len = nodePtr;
	newHead->next = *head;
	*head = newHead;

	return (*head);
}
