#include "push_swap.h"

void sort_stack(int *int_arr, int ac)
{
}

t_int_lst *stack_b_init(int *int_arr)
{
  t_int_lst *stack_b;
  
  stack_b = (t_int_lst *)ft_calloc(1, sizeof(t_int_lst));
  if(!stack_b)
    _ftintfreewexit_(int_arr, 1);
  stack_b->first = NULL;
  stack_b->last = NULL;
  stack_b->counter = 0;
  return (stack_b);
}

t_int_lst *stack_a_fill(t_int_lst *stack_b, int *int_arr, int ac)
{
  int i;
  t_int_lst *stack_a;
  t_int_lst_node *node;

  stack_a = (t_int_lst *)ft_calloc(1, sizeof(t_int_lst));
  if(!stack_a)
    _ftintfreewexit_(int_arr, 1);
  i = 0;
  while(i < ac)
  {
    node = t_int_lst_newnode(int_arr[i]);
    if(!node)
      _ftlstfreewexit_(stack_a, stack_b, int_arr, 1);
    t_int_lst_pushback(stack_a, node);
    i++;
  }
  _ftintfreewexit_(int_arr, 0);
  return stack_a;
}
