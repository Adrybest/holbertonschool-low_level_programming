#include "lists.h"

/**
 * add_node - adding nodes
 * @head: pointer
 * @str: str
 * Return: the address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	int taille;
	char *m;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}
	i = malloc(sizeof(list_t));
	m = strdup(str);

	if (m == NULL)
	{
		return (NULL);
	}
	for (taille = 0; str[taille]; taille++)
	{
		;
	}
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}
	i->str = m;
	i->len = taille;
	i->next = *head;
	*head = i;
	return (i);
}
