#include "lists.h"
#include <stdio.h>

/**
 * add_node- check the code
 * @head: pointer
 * @str: char
 *
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	do{
		new_node = malloc(sizeof(list_t));
	} while (new_node == NULL);

	new_node->len = strlen(str);
	new_node->str = strdup(str);

	new_node->next = *head;

	*head = new_node;

	return (*head);
}
