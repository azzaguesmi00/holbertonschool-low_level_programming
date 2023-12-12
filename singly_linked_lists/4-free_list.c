#include "lists.h"
#include <stdio.h>
/**
 * free_list- check the code
 * @head: pointer
 *
 * Return: void
 */
void free_list(list_t *head)
{

	list_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
