#include "lists.h"
/**
 * free_dlistint - free list
 * @head: list *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
