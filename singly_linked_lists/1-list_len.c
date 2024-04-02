#include "lists.h"

/**
 * list_len - print  a function that returns the number of elements
 * @h: pointer
 * Return: the number of element int a linked list_t
*/

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
