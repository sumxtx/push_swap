#include "push_swap.h"

t_int_lst_node *t_lst_newnode(int content)
{
	t_int_lst_node *node;

	node = (t_int_lst_node *)malloc(sizeof(t_int_lst_node));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}


void	t_int_lst_pushback(t_int_lst **lst, t_int_lst_node *new)
{
	if (!lst)
	  new->next = NULL;
  else
    new->next = *lst;
	*lst = new;
}
