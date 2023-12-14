#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @head: dlistint_t *
 * @index: unsigned int
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	p = head;
	i = 0;
	while (p != NULL)
	{
		if (i == index)
			return (p);
		p = p->next;
		i++;
	}

	return (NULL);
}
