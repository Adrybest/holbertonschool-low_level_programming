#include "lists.h"
/**
 * free_dlistint - free a dlistint_t
 * @head: head
 * Return: free
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	for (i = 0; head; i++)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
