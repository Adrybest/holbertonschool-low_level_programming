#include "lists.h"

/**
 * add_node_end - new nodes at the and of the list_t
 * @head: head
 * @str: string
 * Return: Address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i, *new;
	int taille;
	char *m;

	i = malloc(sizeof(list_t));
	if (i == NULL)
	{
		return (NULL);
	}

	m = strdup(str);/*returns a pointer to a new string, and duplicated from str*/
	if (str == NULL)
	{
		free(i);
		return (NULL);
	}

	for (taille = 0; str[taille]; taille++)
	{
		;
	}
	i->len = taille;
	i->str = m;
	i->next = NULL;

	if (head == NULL)
	{
		*head = i;
	}
	else
	{
		new = *head;
		while (new->next != NULL)
		{
			new = new->next;
			new->next = i;
		}

	}
	return (*head);
}
