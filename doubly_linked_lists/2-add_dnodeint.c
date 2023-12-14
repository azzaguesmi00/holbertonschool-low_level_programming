#include "lists.h"
/**
 * add_dnodeint - check the code
 * @head: list_t
 * @n: const int
 * Return:  dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *p;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;

	p->next = *head;
	p->prev = NULL;

	if (*head != NULL)
		(*head)->prev = p;

	*head = p;

	return (*head);
}
