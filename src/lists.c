#include "push_swap.h"

t_int_lst_node  *t_int_lst_newnode(int content)
{
	t_int_lst_node *node;

	node = (t_int_lst_node *)malloc(sizeof(t_int_lst_node));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}


void	t_int_lst_pushback(t_int_lst *lst, t_int_lst_node *new)
{
	if (!lst->last)
  {
    lst->first = new;
    lst->last = new;
    lst->counter = 1;
  }
  else
  {
    lst->last->next = new;
    lst->last = new;
    lst->counter++;
  }
}

void _ftlstfreewexit_(int *arr, int doexit)
{
  free(arr);
  if(doexit == 1)
    exit(EXIT_FAILURE);
}
