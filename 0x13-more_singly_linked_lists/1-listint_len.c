#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h:
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		++len;
	}
	return (len);
}
