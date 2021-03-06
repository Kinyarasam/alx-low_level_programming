#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

size_t print_list(const list_t *h)
{
	size_t nodes;
	
	for(nodes = 0; h; nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		
		h = h->next;
	}
	return (nodes);
}
