#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - Adds a new node at the end
  * of a doubly linked list
  * @head: The head of the doubly linked list
  * @n: The number to place in the new node
  *
  * Return: The new head of the doubly linked list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL, *new_node = NULL;
if(!head)
head = temp;
else {
temp -> next = last(head) -> next;
temp -> prev = last(head);
last(head) -> next = temp; 
head -> prev = temp;
}
}
