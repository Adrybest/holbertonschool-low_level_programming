#include "lists.h"

/**
 * print_list - print the list
 * @h: nodes
 * Return: Always success
*/

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
	}
	return (i);
}
