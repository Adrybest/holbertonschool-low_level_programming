#include "lists.h"
/**
 * add_dnodeint - print new nodes at the begenning
 * @head: pointer
 * @n: int
 * Return: the address of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;

	i = malloc(sizeof(dlistint_t));/*Create new nodes w/malloc*/
	if (i == NULL)
	{
		return (NULL);
	}

	i->n = n;
	i->prev = NULL;
	i->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = i;/*prev: node previously at the*/
						/*top of the list which points to the new node i*/
	}
	*head = i;
	return (i);
}
