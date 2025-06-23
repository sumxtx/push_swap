#include "push_swap.h"

int swap(t_int_lst *src)
{
  t_int_lst_node *holder;

  if(!src->first || !src->first->next)
    return (-1);
  holder = src->first->next;
  src->first->next = holder->next;
  holder->next = src->first;
  src->first = holder;
  if(src->counter == 2)
    src->last = src->first->next;
  return (1);
}

int sa(t_int_lst *stack_a)
{
  if(swap(stack_a) > 0 )
  {
    write(1,"\nsa\n",4);
    return(1);
  }
  return (-1);
}

int sb(t_int_lst *stack_b)
{
  if(swap(stack_b) > 0 )
  {
    write(1,"\nsb\n",4);
    return(1);
  }
  return (-1);
}

void ss(t_int_lst *stack_a, t_int_lst *stack_b)
{
  if(sa(stack_a) && sb(stack_b))
  {
    write(1,"\nss\n",4);
  }
}
