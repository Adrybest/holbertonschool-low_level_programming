#include "lists.h"
/**
 * add_dnodeint_end - add new nodes at the end
 * @head: head
 * @n: int
 * Return: the address of the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i, *new;

	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
	{
		return (NULL);
	}

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		i->prev = NULL;
		*head = i;
		return (i);
	}

	new = *head;
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = i;
	i->prev = new;

	return (i);
}
