#include "lists.h"

/**
 * add_dnodeint - function with two arguments
 * @head: pointer to double linked list
 * @n: data for each node
 *
 * Description: adds a new node at the beginning
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{if(head == NULL) {
head = (struct node *)malloc(sizeof(struct node));
head -> data = key;
head -> next = head;
head -> prev = head;
}
else {
struct node *temp = (struct node *)malloc(sizeof(struct node));
temp -> data = key;
struct node *last = head;
head->prev->next=temp;
temp->next=head;
temp->prev=head->prev;
head->prev=temp;
head = temp;
}
}
