#include "push_swap.h"


int max_content(t_int_lst *stack)
{
  int max;
  t_int_lst_node *holder;

  max = 0;
  holder = stack->first;
  while(holder != NULL)
  {
    if(holder->content > max)
      max = holder->content;
    holder = holder->next;
  }
  return max;
}

int st_bubble_sort(t_int_lst *stack_a, t_int_lst *stack_b)
{
  int max;
  t_int_lst_node *holder;

  max = max_content(stack_a);
  holder = stack_a->first;
  while(holder != NULL)
  {
    if(holder->content < max)
      pb(stack_b, stack_a);
    else
      ra(stack_a);
    holder = holder->next;
  }
  return(1);
}
