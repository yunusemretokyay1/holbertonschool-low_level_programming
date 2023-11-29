#include <stdlib.h>
#include "lists.h"

/**
  * 
  * @head: The head of the doubly linked list
  *
  *
  * Return: The specific node of the doubly linked list
  */
int sum_dlistint(dlistint_t *head);{
    dlistint_t*current=head;
    int sum;
    if(head)
    {
        while(current!=is NULL){
        sum+=current->n;
        current=current->next;

        }

    }
    return(sum)

}
