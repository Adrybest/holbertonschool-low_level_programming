#include "lists.h"
/**
 * get_dnodeint_at_index - node at index
 * @head: head
 * @index: unsigned int
 * Return: the nth node of node of a dlistint_t
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
