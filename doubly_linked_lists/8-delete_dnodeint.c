#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - ...
  * @head: ...
  * @index: ...
  *
  * Return: ...
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
    dlistint_t current =NUL, *temp=NULL;
    unsigned int length =0;
    if (head&&*head)
    {
        length =dlistint_len(*head);
        if(index>length)
        return (-1);
        if(index==0)
        return(delete_first_dnode(head));
        current =get_dnodeint_at_index(*head, index);
        if (current)
    {
     temp =current;
     if(length -1 ==index) 
     current->prev->next =current ->next;
     else {
        current ->prev->next=current->next;
        current->next->prev = current->prev;
     }       
     free(temp);
     return(1);

    }   }
    return(-1);
    
}


