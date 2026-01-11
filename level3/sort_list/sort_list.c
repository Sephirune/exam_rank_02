#include "list.h"
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*tmp;

	tmp = lst;    // guardamos el primer nodo para devolverlo al final.
	while (lst && lst->next != NULL)  // se recorre la lista comparándola con los siguientes elementos.
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;   // el algoritmo que se usa aquí es bubble sort. Cada vez que se swapea, se vuelve al inicio para dejar todo ordenado.
		}
		else
			lst = lst->next;  // si está ordenado, se avanza. 
	}
	return (tmp);
}