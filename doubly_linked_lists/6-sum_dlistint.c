#include "lists.h"
/**
 * sum_dlistint - the sum of the list dlistint_t
 * @head: head
 * Return: The sum of the list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
