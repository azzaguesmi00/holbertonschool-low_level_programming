#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: pointer
 * 
 * Return: null or 0
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *p;
	size_t i = 0;

	if (h)
	{
		p = (dlistint_t *)h;
		while (p)
		{
			printf("%d\n", p->n);
			p = p->next;
			i++;
		}
	}
	return (i);
}
