#include "lists.h"

/**
 * dlistint_len- check the code
 * @h: pointer
 * Return: null or 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *ptr;
	size_t i = 0;

	if (h)
	{
		ptr = (dlistint_t *)h;
		while (ptr)
		{
			ptr = ptr->next;
			i++;
		}
	}
	return (i);
}
