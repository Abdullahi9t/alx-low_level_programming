#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
<<<<<<< HEAD
	size_t nodes = 0;
=======
	size_t num = 0;
>>>>>>> e981e1012490e9f2b5289b26ccb6ec5ab0bdafc7

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
<<<<<<< HEAD
 		h = h->next;
	}

	return (nodes);
=======
		num++;
		h = h->next;
	}
	return (num);
>>>>>>> e981e1012490e9f2b5289b26ccb6ec5ab0bdafc7
}
