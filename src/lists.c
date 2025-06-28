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
	if (lst->counter == 0)
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

void _ftlstfreewexit_(t_int_lst *sta, t_int_lst *stb, int *arr, int doexit)
{
  t_int_lst_node *holder;
  t_int_lst_node *cur;

  free(stb);
  free(arr);
  if(sta->counter == 0)
    free(sta);
  else
  {
    cur = sta->first;
    holder = cur->next;
    while(sta->counter > 0)
    {
      free(cur);
      cur = holder;
      holder = cur->next;
      sta->counter--;
    }
    free(sta);
  }
  if(doexit == 1)
    exit(EXIT_FAILURE);
}
