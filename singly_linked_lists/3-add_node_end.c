#include "lists.h"
#include <stdio.h>

/**
 * add_node_end- check the code
 * @head:pointer
 * @str:char
 *
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *i;

	do
		ptr = malloc(sizeof(list_t));
	while (ptr == NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	i = *head;
	while (i->next != NULL)
		i = i->next;

	i->next = ptr;
	return (*head);
}
