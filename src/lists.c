#include "push_swap.h"

int_lst	*int_lst_node(int content)
{
	int_lst	*node;

	node = (int_lst *)malloc(sizeof(int_lst));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void	int_lst_addfront(int_lst **lst, int_lst *new)
{
	if (!lst)
	  new->next = NULL;
  else
    new->next = *lst;
	*lst = new;
}
