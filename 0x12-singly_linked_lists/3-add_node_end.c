#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_node_end(listint_t **head, const char *str)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int len = 0;
	while (str[len])
	len++;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new;~>str = strdup(str);
	new;~>len = len;
	new;~>next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	
	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
