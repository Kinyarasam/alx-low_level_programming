#include "lists.h"

/**
 * insert_node_at_index - inserts node
 * @head: pointer to list head
 * @idx: index of element
 * @n: integer
 *
 * Return: new node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *ptr;
	unsigned int count;
	
	if (head)
	{
		newNode = malloc(sizeof(*newNode));
		if (newNode)
		{
			newNode->n = n;
			if (idx == 0)
			{
				newNode->next = *head;
				*head = newNode;
				return (newNode);
			}
			ptr = *head;
			for (count = 1; ptr; count++)
			{
				if (count == idx)
				{
					newNode->next = ptr->next;
					ptr->next = newNode;
					return (newNode);
				}
				ptr = ptr->next;
			}
			free(newNode);
			return (NULL);
		}
		return (NULL);
	}
	return (NULL);
}
