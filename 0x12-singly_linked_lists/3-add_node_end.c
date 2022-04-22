#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list.
 * @str: string to store in the list.
 *
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;
	size_t nodePtr = 0;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	for(nodePtr = 0; str[nodePtr]; nodePtr++)
		;

	newNode->str = strdup(str) ? strdup(str) : (NULL);
	newNode->len = nodePtr;
	newNode->next = NULL;

	if (!(*head))
		*head = newNode;
	else
	{
		lastNode = *head;
		while(lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (newNode);
}
