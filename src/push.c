#include "push_swap.h"

void push(t_int_lst *dst, t_int_lst *src)
{
  if(!src)
    return ;
  t_int_lst_node *holder;
  /*if !src | ! dst */
  /* badbins badabuns */

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
}

void pb(t_int_lst *stack_b, t_int_lst *stack_a)
{
  push(stack_b, stack_a);
  stack_a->counter--;
  stack_b->counter++;
  write(1,"pb",2);
}
