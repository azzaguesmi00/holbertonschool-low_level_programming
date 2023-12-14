#include "lists.h"
/**
 * add_dnodeint_end - check the code
 * @head: list **
 * @n: const int
 * Return: list_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p, *i;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (*head);
	}

	i = *head;
	while (i->next != NULL)
		i = i->next;

	i->next = p;
	p->prev = i;

	return (p);
}
