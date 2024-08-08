#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *new, *last;

    if (list == NULL)
    {
        return;
    }
    new = (*list)->next;
    while (new)
    {
        last = new->prev;
        while (last && new->n < last->n)
        {
            if(last->prev)
            {
                last->prev->next = new;
            }
            else
            {
                *list = new;
            }
            if (new->next)
            {
                new->next->prev = last;
            }
            last->next = new->next;
            new->prev = last->prev;
            new->next = last;
            last->prev = new;
            print_list(*list);
            last = new->prev;
        }
        new = new->next;
    }
}