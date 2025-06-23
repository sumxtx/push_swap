#include "push_swap.h"

int push(t_int_lst *dst, t_int_lst *src)
{
  t_int_lst_node *holder;

  if(!src->first)
    return -1;
  if(!dst->first)
  {
    holder = src->first->next;
    dst->first = src->first;
    src->first = holder;
    dst->first->next = NULL;
    dst->last = dst->first;
  }
  else
  {
    holder = src->first->next;
    src->first->next = dst->first;
    dst->first = src->first;
    src->first = holder;
  }
  src->counter--;
  dst->counter++;
  return 1;
}

void pb(t_int_lst *stack_b, t_int_lst *stack_a)
{
  if(push(stack_b, stack_a) > 0)
  {
    write(1,"\npb\n",4);
  }
}

void pa(t_int_lst *stack_a, t_int_lst *stack_b)
{
  if(push(stack_a, stack_b) > 0)
  {
    write(1,"\npa\n",4);
  }
}
