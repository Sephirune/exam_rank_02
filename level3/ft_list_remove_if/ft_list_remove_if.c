#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current;
    t_list *tmp;

    if (begin_list == NULL)
        return;
    current = *begin_list;
    while (current && cmp(current->data, data_ref) == 0)   // se borran todos los nodos iniciales que coincidan
    {
        *begin_list = current->next;
        free(current);
        current = *begin_list;
    }
    while (current && current->next)    // borramos los nodos intermedios saltando el inicial. 
    {
        if (cmp(current->next->data, data_ref) == 0)
        {
            tmp = current->next;
            current->next = tmp->next;
            free(tmp);
        }
        else
            current = current->next;
    }
}