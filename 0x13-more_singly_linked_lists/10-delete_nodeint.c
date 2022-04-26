#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index of a list in head
 * @head: pointer to list head
 * @index: delete node at index
 *
 * Return: 1 (Success), -1 (Error)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *nodes, *nodeAt;

	if (head && *head)
	{
		if (index == 0)
		{
			nodes = *head;
			*head = (*head)->next;
			free(nodes);
			return (1);
		}
		nodeAt = *head;
		for (count = 1; nodeAt; count++)
		{
			if (count == (index))
			{
				nodes = nodeAt;
				nodeAt = nodeAt->next;
				nodes->next = nodeAt->next;
				free (nodeAt);
				return (1);
			}
			nodeAt = nodeAt->next;
		}
		return (-1);
	}
	return (-1);
}
