#include "lists.h"
#include <stdio.h>

/**
 * print_list- check the code
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *ptr;
	size_t i = 0;

	if (h)
	{
		ptr = (list_t *)h;
		while (ptr)
		{
			if (!ptr->str)
				printf("[%d] (nil)\n", ptr->len);
			else
				printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
			i++;
		}
	}
	return (i);
}
