#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double linked list
 * @h: The double linked list to prints
 *
 * Return: The number of nodes of the double linked list
 */
size_t print_dlistint(const dlistint_t *head)
{
	int length = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		++length;
		head = head->next;
	}

	return (length);
}
