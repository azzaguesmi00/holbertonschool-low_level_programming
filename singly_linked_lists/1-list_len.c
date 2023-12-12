#include "lists.h"
#include <stdio.h>

/**
 * list_len- check the code
 * @h: pointer
 *Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
