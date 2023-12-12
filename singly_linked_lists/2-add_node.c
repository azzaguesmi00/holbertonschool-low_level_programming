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

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head; // Set the next pointer to the current head
	*head = new_node;		// Update the head to point to the new node

	return (new_node);
}
