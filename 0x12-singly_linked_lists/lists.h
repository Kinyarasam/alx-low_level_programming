#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct list_s - stingly linked list
 * @str: malloc'ed string 
 * @len: length of the string
 * @next: next node.
 *
 * Description - Stingly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
